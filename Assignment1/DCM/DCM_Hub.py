from tkinter import *
from DCM_Settings import openSettings
from DCM_AOOScreen import openAOO
from DCM_VOOScreen import openVOO
from DCM_AAIScreen import openAAI
from DCM_VVIScreen import openVVI
from DCM_DOOScreen import openDOO
from DCM_AOORScreen import openAOOR
from DCM_VOORScreen import openVOOR
from DCM_AAIRScreen import openAAIR
from DCM_VVIRScreen import openVVIR
from DCM_DOORScreen import openDOOR
from DCM_Egram import openEgram
from DCM_Check_Connection import checkConnection
import threading
import sys
import time
import serial
from serial.tools import list_ports
import struct
port = None
baudrate = 115200
num_bytes_sent = 27
for p in list_ports.comports():
	if 'Link' in p.__str__():
		port = p
		break
port_name = port.device
print('port selected as'+port_name)
test_code, set_code, echo_code = 10,20,30

def set_params():
	### SET_PARAMS
	with serial.Serial(port=port_name, baudrate=baudrate) as device:	
		params = [1,1,1,50,4,50,50,4,50,1,60,60,100,100,200,120,0,30,8,5]
		#params = struct.pack("<"+"BBB"+"fBf"*2+"B"+"H"*5, *params)
		params = struct.pack("<"+"B"*10+"H"*5+"B"*5, *params)
		dat = serial.to_bytes([test_code, set_code]) + params
		bytes_written = device.write(dat)

def openHub():
    
    #functions created to not raise an error
    def Pace():
        #Program to pace

        return

    set_params()

    #create main hub
    mainHub= Toplevel()
    mainHub.title("DCM HUB")
    mainHub.geometry("500x300")

    # create Labels
    mainHubLabel= Label(mainHub, text="Main Hub", font=(None, 50, 'underline'))

    # create Buttons
    AOOLink= Button(mainHub, text="AOO", command= openAOO)
    VOOLink= Button(mainHub, text="VOO", command= openVOO)
    AAILink= Button(mainHub, text="AAI", command= openAAI)
    VVILink= Button(mainHub, text="VVI", command= openVVI)
    DOOLink= Button(mainHub, text="DOO", command= openDOO)
    AOORLink= Button(mainHub, text="AOOR", command= openAOOR)
    VOORLink= Button(mainHub, text="VOOR", command= openVOOR)
    AAIRLink= Button(mainHub, text="AAIR", command= openAAIR)
    VVIRLink= Button(mainHub, text="VVIR", command= openVVIR)
    DOORLink= Button(mainHub, text="DOOR", command= openDOOR)

    SettingsLink= Button(mainHub, text="Settings", command= openSettings)

    PaceNowLink= Button(mainHub, text="Pace Now", command= Pace)

    egramLink = Button(mainHub, text="Electrograms", command= openEgram)

    # organize objects 
    mainHubLabel.grid(row= 0, column= 1)
    AOOLink.grid(row=2, column=0)
    VOOLink.grid(row=3, column=0)
    AAILink.grid(row=4, column=0)
    VVILink.grid(row=5, column=0)
    DOOLink.grid(row=6, column=0)

    AOORLink.grid(row=2,column=1)
    VOORLink.grid(row=3,column=1)
    AAIRLink.grid(row=4,column=1)
    VVIRLink.grid(row=5,column=1)
    DOORLink.grid(row=6,column=1)

    SettingsLink.grid(row=7, column=0, pady= 20)

    PaceNowLink.grid(row= 2, column= 2)
    egramLink.grid(row=2, column=3)

    #Statues Bar
 
    def statusCreate():
            while(True):
                try:
                    user=open("currentUser.txt","r")
                    connectionStatus=checkConnection()
                    statusLabel= Label(mainHub, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()
    