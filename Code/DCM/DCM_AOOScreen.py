#AOO Pacing
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

def openAOO():
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

    # Create AOO Page
    AOOpage = Toplevel()
    AOOpage.title("AOO Pacing Mode")
    AOOpage.geometry("800x400")

    # Create Labels
    AOOpageLabel= Label(AOOpage, text="AOO Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(AOOpage, text = "Lower Rate Limit (ppm)", font =(None,12))
    AtrialAmp_L = Label(AOOpage, text = "Atrial Amplitude (V)", font =(None,12))
    AtrialPW_L = Label(AOOpage, text = "Atrial Pulse Width (ms)", font =(None,12))

    LowRL_V = Label(AOOpage, text = LowRL, font =(None,12))
    AtrialAmp_V = Label(AOOpage, text = AtrAmp, font =(None,12))
    AtrialPW_V = Label(AOOpage, text = AtrPW, font =(None,12))

    # Button Functions
    def set_params():
        with serial.Serial(port=port_name, baudrate=baudrate) as device:	
            params = [1,0,0,int(VentAmp*20),int(VentPW),int(VentSens*20),int(AtrAmp*20),int(AtrPW),int(AtrSens*20),Hyst,60000//LowRL,AVDelay,VRP,ARP,HEI,MaxSR,0,ReacTime,RespF,RecTime]
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
                #write to file
                set_params()
        except:
            LowRL_V.config(text = "Invalid Value")
        
    def changeAtrAmp():
        global AtrAmp
        try:
            #check variable range
            AtrAmp = float(AtrialAmp_E.get())
            if (AtrAmp < 0):
                AtrialAmp_V.config(text = "Value too low")
            elif (AtrAmp > 5.0):
                AtrialAmp_V.config(text = "Value too high")
            else:
                AtrialAmp_V.config(text = AtrAmp)
                #write to file
                AtrAmp = AtrAmp
                set_params()
        except:
            AtrialAmp_V.config(text = "Invalid Value")
        
    def changeAtrPW():
        global AtrPW
        try:
            #check variable range
            AtrPW = int(AtrialPW_E.get())
            if (AtrPW < 1):
                AtrialPW_V.config(text = "Value too low")
            elif (AtrPW > 30):
                AtrialPW_V.config(text = "Value too high")
            else:
                AtrialPW_V.config(text = AtrPW)
                #write to file
                set_params()
        except:
            AtrialPW_V.config(text = "Invalid Value")

    # Create Entries
    LowRL_E = Entry(AOOpage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    AtrialAmp_E = Entry(AOOpage, width=20)
    AtrialAmp_E.insert(0, "Enter New Value")

    AtrialPW_E = Entry(AOOpage, width=20)
    AtrialPW_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(AOOpage, text="Update", command=changeLowRL)
    AtrialAmp_B = Button(AOOpage, text="Update", command=changeAtrAmp)
    AtrialPW_B = Button(AOOpage, text="Update", command=changeAtrPW)

    # Organize objects
    AOOpageLabel.grid(row= 1, column= 1)

    LowRL_L.grid(row= 2, column= 0)
    LowRL_V.grid(row= 2, column= 1)
    LowRL_E.grid(row= 2, column= 2)
    LowRL_B.grid(row= 2, column= 3)

    AtrialAmp_L.grid(row= 3, column= 0)
    AtrialAmp_V.grid(row= 3, column= 1)
    AtrialAmp_E.grid(row= 3, column= 2)
    AtrialAmp_B.grid(row= 3, column= 3)

    AtrialPW_L.grid(row= 4, column= 0)
    AtrialPW_V.grid(row= 4, column= 1)
    AtrialPW_E.grid(row= 4, column= 2)
    AtrialPW_B.grid(row= 4, column= 3)

    #Statues Bar
 
    def statusCreate():
            while(True):
                try:
                    user=open("currentUser.txt","r")
                    connectionStatus=checkConnection()
                    statusLabel= Label(AOOpage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()
