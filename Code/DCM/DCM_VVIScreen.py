#VVI Pacing
from tkinter import *
import DCM_WelcomeScreen
import threading
import sys
import time
import serial
from DCM_Check_Connection import checkConnection
from DCM_Serial import echo_params
from DCM_Serial import read_params8
from DCM_Serial import read_params16
from serial.tools import list_ports
import struct

port = None
baudrate = 115200
num_bytes_sent = 27
for p in list_ports.comports():
    if 'JLink' in p.__str__():
        port = p
        break
port_name = port.device
test_code, set_code, echo_code = 10,20,30

AVDelay=0

def openVVI():
    global AVDelay
    global VentAmp
    global VentPW
    global VentSens
    global AtrAmp
    global AtrPW
    global AtrSens
    global Hyst
    global LowRL
    global VRP
    global ARP
    global HEI
    global MaxSR
    global ReacTime
    global RespF
    global RecTime
    #read all params
    #MCP
    r1 = False
    while (r1==False):
        echo_params(1)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==1):
            MCP = data[1]
            r1 = True

    #MCS
    r1 = False
    while (r1==False):
        echo_params(2)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==2):
            MCS = data[1]
            r1 = True

    #MR
    r1 = False
    while (r1==False):
        echo_params(3)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==3):
            MR = data[1]
            r1 = True

    #VentAmp
    r1 = False
    while (r1==False):
        echo_params(4)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==4):
            VentAmp = data[1]/20
            r1 = True

    #VentPW
    r1 = False
    while (r1==False):
        echo_params(5)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==5):
            VentPW = data[1]
            r1 = True

    #VentSens
    r1 = False
    while (r1==False):
        echo_params(6)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==6):
            VentSens = data[1]/20
            r1 = True

    #AtrAmp
    r1 = False
    while (r1==False):
        echo_params(7)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==7):
            AtrAmp = data[1]/20
            r1 = True

    #AtrPW
    r1 = False
    while (r1==False):
        echo_params(8)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==8):
            AtrPW = data[1]
            r1 = True

    #AtrSens
    r1 = False
    while (r1==False):
        echo_params(9)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==9):
            AtrSens = data[1]/20
            r1 = True

    #Hyst
    r1 = False
    while (r1==False):
        echo_params(10)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==10):
            Hyst = data[1]
            r1 = True

    #LowRL
    r1 = False
    while (r1==False):
        echo_params(11)
        read_params16(3)
        data = read_params16(3)
        if (data[0]==11):
            LowRL = data[1]
            r1 = True

    #AVDelay
    r1 = False
    while (r1==False):
        echo_params(12)
        read_params16(3)
        data = read_params16(3)
        if (data[0]==12):
            AVDelay = data[1]
        r1 = True

    #VRP
    r1 = False
    while (r1==False):
        echo_params(13)
        read_params16(3)
        data = read_params16(3)
        if (data[0]==13):
            VRP = data[1]
            r1 = True

    #ARP        
    r1 = False
    while (r1==False):
        echo_params(14)
        read_params16(3)
        data = read_params16(3)
        if (data[0]==14):
            ARP = data[1]
            r1 = True

    #HEI
    r1 = False
    while (r1==False):
        echo_params(15)
        read_params16(3)
        data = read_params16(3)
        if (data[0]==15):
            HEI = data[1]
            r1 = True

    #MaxSR
    r1 = False
    while (r1==False):
        echo_params(16)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==16):
            MaxSR = data[1]
            r1 = True

    #ModeAd
    r1 = False
    while (r1==False):
        echo_params(17)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==17):
            ModeAd = data[1]
            r1 = True

    #ReacTime
    r1 = False
    while (r1==False):
        echo_params(18)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==18):
            ReacTime = data[1]
            r1 = True

    #RespF
    r1 = False
    while (r1==False):
        echo_params(19)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==19):
            RespF = data[1]
            r1 = True

    #RecTime
    r1 = False
    while (r1==False):
        echo_params(20)
        read_params8(2)
        data = read_params8(2)
        if (data[0]==20):
            RecTime = data[1]
            r1 = True

    # Create VVI Page
    VIIpage = Toplevel()
    VIIpage.title("VVI Pacing Mode")
    VIIpage.geometry("800x400")

    # Create Labels
    VIIpageLabel= Label(VIIpage, text="VVI Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(VIIpage, text = "Lower Rate Limit (ppm)", font =(None,12))
    VentAmp_L = Label(VIIpage, text = "Ventricular Amplitude (V)", font =(None,12))
    VentPW_L = Label(VIIpage, text = "Ventricular Pulse Width (ms)", font =(None,12))

    LowRL_V = Label(VIIpage, text = LowRL, font =(None,12))
    VentAmp_V = Label(VIIpage, text = VentAmp, font =(None,12))
    VentPW_V = Label(VIIpage, text = VentPW, font =(None,12))

    #Additional Labels
    VentSens_L = Label(VIIpage, text = "Ventricular Sensitivity (V)", font =(None,12))
    VRP_L = Label(VIIpage, text = "Refractory Period (ms)", font =(None,12))
    Hyst_L = Label(VIIpage, text = "Hysteresis", font =(None,12))

    VentSens_V = Label(VIIpage, text = VentSens, font =(None,12))
    VRP_V = Label(VIIpage, text = VRP, font =(None,12))
    if (Hyst == 1):
        Hyst_V = Label(VIIpage, text = "Enabled", font =(None,12))
    else:
        Hyst_V = Label(VIIpage, text = "Disabled", font =(None,12))

    # Button Functions
    def set_params():
        with serial.Serial(port=port_name, baudrate=baudrate) as device:	
            params = [2,2,2,int(VentAmp*20),int(VentPW),int(VentSens*20),int(AtrAmp*20),int(AtrPW),int(AtrSens*20),Hyst,60000//LowRL,AVDelay,VRP,ARP,HEI,MaxSR,0,ReacTime,RespF,RecTime]
            #params = struct.pack("<"+"BBB"+"fBf"*2+"B"+"H"*5, *params)
            params = struct.pack("<"+"B"*10+"H"*5+"B"*5, *params)
            dat = serial.to_bytes([test_code, set_code]) + params
            bytes_written = device.write(dat)
            
    def changeLowRL():
        global LowRL
        try:
            #check variable range
            LowRL = int(LowRL_E.get())
            if (LowRL < 30):
                LowRL_V.config(text = "Value too low")
            elif (LowRL > 175):
                LowRL_V.config(text = "Value too high")
            else:
                LowRL_V.config(text = LowRL)
                set_params()
        except:
            LowRL_V.config(text = "Invalid Value")

    def changeVentAmp():
        global VentAmp
        try:
            #check variable range
            VentAmp = float(VentAmp_E.get())
            if (VentAmp < 0):
                VentAmp_V.config(text = "Value too low")
            elif (VentAmp > 5.0):
                VentAmp_V.config(text = "Value too high")
            else:
                VentAmp_V.config(text = VentAmp)
                VentAmp = VentAmp
                set_params()
        except:
            VentAmp_V.config(text = "Invalid Value")
            
    def changeVentPW():
        global VentPW
        try:
            #check variable range
            VentPW = int(VentPW_E.get())
            if (VentPW < 1):
                VentPW_V.config(text = "Value too low")
            elif (VentPW > 30):
                VentPW_V.config(text = "Value too high")
            else:
                VentPW_V.config(text = VentPW)
                set_params()
        except:
            VentPW_V.config(text = "Invalid Value")
            
    #Additional Functions
    def changeVentSens():
        global VentSens
        try:
            #check variable range
            VentSens = float(VentSens_E.get())
            if (VentSens < 0):
                VentSens_V.config(text = "Value too low")
            elif (VentSens > 5):
                VentSens_V.config(text = "Value too high")
            else:
                VentSens_V.config(text = VentSens)
                VentSens=VentSens
                set_params()
        except:
            VentSens_V.config(text = "Invalid Value")

    def changeVRP():
        global VRP
        try:
            #check variable range
            VRP = int(VRP_E.get())
            if (VRP < 150):
                VRP_V.config(text = "Value too low")
            elif (VRP > 500):
                VRP_V.config(text = "Value too high")
            else:
                VRP_V.config(text = VRP)
                set_params()
        except:
            VRP_V.config(text = "Invalid Value")

    def changeHyst():
        global Hyst
        if (Hyst):
            Hyst = 0
            Hyst_V.config(text="Disabled")
            set_params()
        else:
            Hyst = 1
            Hyst_V.config(text="Enabled")
            set_params()

    # Create Entries
    LowRL_E = Entry(VIIpage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    VentAmp_E = Entry(VIIpage, width=20)
    VentAmp_E.insert(0, "Enter New Value")

    VentPW_E = Entry(VIIpage, width=20)
    VentPW_E.insert(0, "Enter New Value")

    #Additional Entires
    VentSens_E = Entry(VIIpage, width=20)
    VentSens_E.insert(0, "Enter New Value")

    VRP_E = Entry(VIIpage, width=20)
    VRP_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(VIIpage, text="Update", command=changeLowRL)
    VentAmp_B = Button(VIIpage, text="Update", command=changeVentAmp)
    VentPW_B = Button(VIIpage, text="Update", command=changeVentPW)

    VentSens_B = Button(VIIpage, text="Update", command=changeVentSens)
    VRP_B = Button(VIIpage, text="Update", command=changeVRP)
    Hyst_B = Button(VIIpage, text="Toggle", command=changeHyst)

    # Organize objects
    VIIpageLabel.grid(row= 1, column= 1)

    LowRL_L.grid(row= 2, column= 0)
    LowRL_V.grid(row= 2, column= 1)
    LowRL_E.grid(row= 2, column= 2)
    LowRL_B.grid(row= 2, column= 3)

    VentAmp_L.grid(row= 3, column= 0)
    VentAmp_V.grid(row= 3, column= 1)
    VentAmp_E.grid(row= 3, column= 2)
    VentAmp_B.grid(row= 3, column= 3)

    VentPW_L.grid(row= 4, column= 0)
    VentPW_V.grid(row= 4, column= 1)
    VentPW_E.grid(row= 4, column= 2)
    VentPW_B.grid(row= 4, column= 3)

    #Additional objects

    VentSens_L.grid(row= 5, column= 0)
    VentSens_V.grid(row= 5, column= 1)
    VentSens_E.grid(row= 5, column= 2)
    VentSens_B.grid(row= 5, column= 3)

    VRP_L.grid(row= 6, column= 0)
    VRP_V.grid(row= 6, column= 1)
    VRP_E.grid(row= 6, column= 2)
    VRP_B.grid(row= 6, column= 3)
    
    #Hyst
    Hyst_L.grid(row= 7, column= 0)
    Hyst_V.grid(row= 7, column= 1)
    Hyst_B.grid(row= 7, column= 2)

    #Statues Bar
 
    def statusCreate():
            while(True):
                try:
                    user=open("currentUser.txt","r")
                    connectionStatus=checkConnection()
                    statusLabel= Label(VIIpage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()