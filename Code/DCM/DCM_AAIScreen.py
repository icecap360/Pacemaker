#AAI Pacing
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

def openAAI():
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
    
    # Create AAI Page
    AIIpage = Toplevel()
    AIIpage.title("AAI Pacing Mode")
    AIIpage.geometry("800x400")

    # Create Labels
    AIIpageLabel= Label(AIIpage, text="AAI Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(AIIpage, text = "Lower Rate Limit (ppm)", font =(None,12))
    AtrAmp_L = Label(AIIpage, text = "Atrial Amplitude (V)", font =(None,12))
    AtrPW_L = Label(AIIpage, text = "Atrial Pulse Width (ms)", font =(None,12))

    LowRL_V = Label(AIIpage, text = LowRL, font =(None,12))
    AtrAmp_V = Label(AIIpage, text = AtrAmp, font =(None,12))
    AtrPW_V = Label(AIIpage, text = AtrPW, font =(None,12))

    #Additional Labels
    AtrSens_L = Label(AIIpage, text = "Atrial Sensitivity (V)", font =(None,12))
    ARP_L = Label(AIIpage, text = "Refractory Period (ms)", font =(None,12))
    Hyst_L = Label(AIIpage, text = "Hysteresis", font =(None,12))

    AtrSens_V = Label(AIIpage, text = AtrSens, font =(None,12))
    ARP_V = Label(AIIpage, text = ARP, font =(None,12))
    Hyst_V = Label(AIIpage, text = "Disabled", font =(None,12))

    # Button Functions
    def set_params():
        with serial.Serial(port=port_name, baudrate=baudrate) as device:	
            params = [1,1,2,int(VentAmp*20),int(VentPW),int(VentSens*20),int(AtrAmp*20),int(AtrPW),int(AtrSens*20),Hyst,60000//LowRL,AVDelay,VRP,ARP,HEI,MaxSR,0,ReacTime,RespF,RecTime]
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
        
    def changeAtrAmp():
        global AtrAmp
        try:
            #check variable range
            AtrAmp = float(AtrAmp_E.get())
            if (AtrAmp < 0):
                AtrAmp_V.config(text = "Value too low")
            elif (AtrAmp > 5.0):
                AtrAmp_V.config(text = "Value too high")
            else:
                AtrAmp_V.config(text = AtrAmp)
                AtrAmp = AtrAmp
                set_params()
        except:
            AtrialAmp_V.config(text = "Invalid Value")
        
    def changeAtrPW():
        global AtrPW
        try:
            #check variable range
            AtrPW = int(AtrPW_E.get())
            if (AtrPW < 1):
                AtrPW_V.config(text = "Value too low")
            elif (AtrPW > 30):
                AtrPW_V.config(text = "Value too high")
            else:
                AtrPW_V.config(text = AtrPW)
                set_params()
        except:
            AtrPW_V.config(text = "Invalid Value")

    #Additional Functions

    def changeAtrSens():
        global AtrSens
        try:
            #check variable range
            AtrSens = float(AtrSens_E.get())
            if (AtrSens < 0):
                AtrSens_V.config(text = "Value too low")
            elif (AtrSens > 5):
                AtrSens_V.config(text = "Value too high")
            else:
                AtrSens_V.config(text = AtrSens)
                AtrSens = AtrSens
                set_params()
                
        except:
            AtrSens_V.config(text = "Invalid Value")

    def changeARP():
        global ARP
        try:
            #check variable range
            ARP = int(ARP_E.get())
            if (ARP < 150):
                ARP_V.config(text = "Value too low")
            elif (ARP > 500):
                ARP_V.config(text = "Value too high")
            else:
                ARP_V.config(text = ARP)
                set_params()
        except:
            ARP_V.config(text = "Invalid Value")

    def changeHyst():
        global Hyst
        if (Hyst):
            Hyst = 0
            Hyst_V.config(text="Disabled")
            set_params()
        else:
            Hyst = 1
            Hyst_V.config(text="Enabled")
            set_params

    # Create Entries
    LowRL_E = Entry(AIIpage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    AtrAmp_E = Entry(AIIpage, width=20)
    AtrAmp_E.insert(0, "Enter New Value")

    AtrPW_E = Entry(AIIpage, width=20)
    AtrPW_E.insert(0, "Enter New Value")

    #Additional Entires
    AtrSens_E = Entry(AIIpage, width=20)
    AtrSens_E.insert(0, "Enter New Value")

    ARP_E = Entry(AIIpage, width=20)
    ARP_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(AIIpage, text="Update", command=changeLowRL)
    AtrAmp_B = Button(AIIpage, text="Update", command=changeAtrAmp)
    AtrPW_B = Button(AIIpage, text="Update", command=changeAtrPW)

    AtrSens_B = Button(AIIpage, text="Update", command=changeAtrSens)
    ARP_B = Button(AIIpage, text="Update", command=changeARP)
    Hyst_B = Button(AIIpage, text="Toggle", command=changeHyst)

    # Organize objects
    AIIpageLabel.grid(row= 1, column= 1)

    LowRL_L.grid(row= 2, column= 0)
    LowRL_V.grid(row= 2, column= 1)
    LowRL_E.grid(row= 2, column= 2)
    LowRL_B.grid(row= 2, column= 3)

    AtrAmp_L.grid(row= 3, column= 0)
    AtrAmp_V.grid(row= 3, column= 1)
    AtrAmp_E.grid(row= 3, column= 2)
    AtrAmp_B.grid(row= 3, column= 3)

    AtrPW_L.grid(row= 4, column= 0)
    AtrPW_V.grid(row= 4, column= 1)
    AtrPW_E.grid(row= 4, column= 2)
    AtrPW_B.grid(row= 4, column= 3)

    #Additional objects

    AtrSens_L.grid(row= 5, column= 0)
    AtrSens_V.grid(row= 5, column= 1)
    AtrSens_E.grid(row= 5, column= 2)
    AtrSens_B.grid(row= 5, column= 3)

    ARP_L.grid(row= 6, column= 0)
    ARP_V.grid(row= 6, column= 1)
    ARP_E.grid(row= 6, column= 2)
    ARP_B.grid(row= 6, column= 3)

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
                statusLabel= Label(AIIpage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                time.sleep(5000)
            except TclError:
                sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()

