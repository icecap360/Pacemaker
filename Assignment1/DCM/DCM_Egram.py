from tkinter import *
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

time=0

def openEgram():
    def vPlot(i):
        #plot v egram
        y1,y2,x= dataGet()

        plt.cla()
        plt.plot(x,y1, label="Ventricle")

        plt.legend(loc='upper left')

        return
    def vOpen():
        #opens vPlot
        plt.style.use('fivethirtyeight')

        plot= FuncAnimation(plt.gcf(), vPlot, interval=1000)# change interval to what needed 

        plt.tight_layout()
        plt.show()

        return
    def aPlot(i):
        #plot a egram
        y1,y2,x= dataGet()

        plt.cla()
        plt.plot(x,y2, label= "Atrium")

        plt.legend(loc='upper left')

        return
    def aOpen():
        #opens aPlot
        plt.style.use('fivethirtyeight')

        plot= FuncAnimation(plt.gcf(), aPlot, interval=1000)# change interval to what needed 

        plt.tight_layout()
        plt.show()

        return 
    def bPlot(i):
        #plot both egram
        y1,y2,x= dataGet()

        plt.cla()
        plt.plot(x,y1, label="Ventricle")
        plt.plot(x,y2, label="Atrium")

        plt.legend(loc='upper left')

        return
    def bOpen():
        plt.style.use('fivethirtyeight')

        plot= FuncAnimation(plt.gcf(), bPlot, interval=1000)# change interval to what needed 

        plt.tight_layout()
        plt.show()

        return
    def dataGet():
        #gets data from pacemaker
        vAmp=0
        aAmp=0
        
        #use serial communication to get data from pacemaker, assign signals to aAmp and vAmp
        global time
        time+=1 #change to whatever interval we want time time to increase at 


        return  vAmp, aAmp, time

    #creating screens
    egramScreen= Toplevel()
    egramScreen.title("Electrogram")
    egramScreen.geometry("400x200")

    #creating Labels
    egramLabel= Label(egramScreen, text="Electrogram", font=(None,30, 'underline'))

    #creating Buttons
    vEgram= Button(egramScreen,text="Ventricle Egram", command= vOpen)
    aEgram= Button(egramScreen, text="Atrium Egram", command= aOpen)
    bEgram= Button(egramScreen, text="Both Egram", command=bOpen)

    #organizing objects
    egramLabel.grid(row=0,column=1)

    vEgram.grid(row=2,column=0)
    aEgram.grid(row=2,column=1)
    bEgram.grid(row=2,column=2)