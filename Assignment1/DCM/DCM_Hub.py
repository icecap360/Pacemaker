from tkinter import *
from DCM_Settings import openSettings
from DCM_AOOScreen import openAOO
from DCM_VOOScreen import openVOO
from DCM_AAIScreen import openAAI
from DCM_VVIScreen import openVVI
from DCM_Egram import openEgram
from DCM_Check_Connection import checkConnection
import threading
import sys

def openHub():
    
    #functions created to not raise an error
    def Pace():
        #Program to pace

        return
    def openDOO():
        #open DOO

        return
    def openAAIR():
        #open AAIR

        return
    def openVVIR():
        #open VVIR

        return
    def openAOOR():
        #open AOOR

        return
    def openVOOR():
        #open VOOR

        return
    def openDOOR():
        #open DOOR

        return


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
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()
    