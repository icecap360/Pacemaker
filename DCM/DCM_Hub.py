from tkinter import *
import DCM_WelcomeScreen
from DCM_Settings import openSettings
from DCM_AOOScreen import openAOO
from DCM_VOOScreen import openVOO
from DCM_AAIScreen import openAAI
from DCM_VVIScreen import openVVI

def openHub():
    def Pace():
        #Program to pace

        return
    #create main hub
    mainHub= Toplevel()
    mainHub.title("DCM HUB")
    mainHub.geometry("350x300")

    # create Labels
    mainHubLabel= Label(mainHub, text="Main Hub", font=(None, 50, 'underline'))

    # create Buttons
    AOOLink= Button(mainHub, text="AOO", command= openAOO)
    VOOLink= Button(mainHub, text="VOO", command= openVOO)
    AAILink= Button(mainHub, text="AAI", command= openAAI)
    VVILink= Button(mainHub, text="VVI", command= openVVI)

    SettingsLink= Button(mainHub, text="Settings", command= openSettings)

    PaceNowLink= Button(mainHub, text="Pace Now", command= Pace)

    # organize objects 
    mainHubLabel.grid(row= 0, column= 1)
    AOOLink.grid(row=2, column=0)
    VOOLink.grid(row=3, column=0)
    AAILink.grid(row=4, column=0)
    VVILink.grid(row=5, column=0)

    SettingsLink.grid(row=6, column=0, pady= 20)

    PaceNowLink.grid(row= 2, column= 2)

    #Statues Bar
    statusLabel= Label(mainHub, text="User: "+ DCM_WelcomeScreen.user +"\tConnection Status: "+DCM_WelcomeScreen.conectionStatus)
    statusLabel.grid(row=7,columnspan=3)

    mainloop()
