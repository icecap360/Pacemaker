from tkinter import *
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation
from DCM_Serial import echo_params
import serial
import time
from serial.tools import list_ports
import struct

time=0
modeM=""
y1=[]
y2=[]
x=[]

#Code for Serial communication
port = None
baudrate = 115200
num_bytes_sent = 27
for p in list_ports.comports():
	if 'JLink' in p.__str__():
		port = p
		break
port_name = port.device
print('port selected as'+port_name)
test_code, set_code, echo_code = 10,20,30

def openEgram():
    def Plot(mode):
        #plot v egram
        global modeM
        global y1
        global y2
        global x
        if(modeM=="vPlot"):
            result= dataGet()

            y1.append(result[0])
            y2.append(result[1])
            x.append(result[2])

            while(y1[-1]==0):
                result= dataGet()
                y1[-1]=result[0]
                y2[-1]=result[1]
                x[-1]=result[2]

            plt.cla()
            plt.plot(x,y1, label="Ventricle")

            plt.legend(loc='upper left')
        elif(modeM=="aPlot"):
            result= dataGet()
            
            y1.append(result[0])
            y2.append(result[1])
            x.append(result[2])

            while(y1[-1]==0):
                result= dataGet()
                y1[-1]=result[0]
                y2[-1]=result[1]
                x[-1]=result[2]

            plt.cla()
            plt.plot(x,y2, label= "Atrium")

            plt.legend(loc='upper left')
        elif(modeM=="bPlot"):
            result= dataGet()

            y1.append(result[0])
            y2.append(result[1])
            x.append(result[2])

            while(y1[-1]==0):
                result= dataGet()
                y1[-1]=result[0]
                y2[-1]=result[1]
                x[-1]=result[2]

            plt.cla()
            plt.plot(x,y1, label="Ventricle")
            plt.plot(x,y2, label="Atrium")

            plt.legend(loc='upper left')

        return
    def Open(mode):
        #opens vPlot
        global modeM
        if (mode=="vPlot"):
            modeM="vPlot"
        elif (mode=="aPlot"):
            modeM="aPlot"
        elif(mode=="bPlot"):
            modeM="bPlot"

        plt.style.use('fivethirtyeight')

        plot= FuncAnimation(plt.gcf(), Plot, interval=5)# change interval to what needed 

        plt.tight_layout()
        plt.show()

        return

    def dataGet():
        #gets data from pacemaker
        global time
        global y1
        global y2
        global x

        time+=5 #change to whatever interval we want time time to increase at 

        if(time >= 1000):
            time=0
            y1.clear()
            y2.clear()
            x.clear()
            y1.append(0)
            y2.append(0)
            x.append(0)

        echo_params(22)
        read_params(3)
        data= read_params(3)
        if (data[0] == 22):
            vAmp= data[1]/10000
        else:
            return 0, 0, time

        echo_params(21)
        read_params(3)
        data= read_params(3)
        if (data[0] == 21):
            aAmp= data[1]/10000
        else:
            return 0, 0, time

        return  vAmp, aAmp, time
    
    def read_params(len_read):
	    #the serial port can send anywhere from 2 to 5 bytes, it is the reponsibility of the 
	    #implementers to not only read the correct number of bytes but also unpack the bytes correctly
        with serial.Serial(port=port_name, baudrate=baudrate) as device:
            bytes_read = device.read(len_read)
            bytes_read = struct.unpack("<BH", bytes_read)
            data = []
            for byt in bytes_read:
                data.append(byt)
            return data

    #creating screens
    egramScreen = Toplevel()
    egramScreen.title("Electrogram")
    egramScreen.geometry("400x200")

    #creating Labels
    egramLabel= Label(egramScreen, text="Electrogram", font=(None,30, 'underline'))

    #creating Buttons
    vEgram= Button(egramScreen,text="Ventricle Egram", command= lambda: Open("vPlot"))
    aEgram= Button(egramScreen, text="Atrium Egram", command= lambda: Open("aPlot"))
    bEgram= Button(egramScreen, text="Both Egram", command= lambda: Open("bPlot"))

    #organizing objects
    egramLabel.grid(row=0,column=1)

    vEgram.grid(row=2,column=0)
    aEgram.grid(row=2,column=1)
    bEgram.grid(row=2,column=2)

    mainloop()