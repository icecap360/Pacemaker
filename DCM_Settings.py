from tkinter import *
from PIL import ImageTk, Image

#Functions

def getModel():
    #code to get Model number of application from txt file

    Model= open("versionNumber.txt", "r")

    return Model.read()

def getSerial():
    #code to get serial number from PACEMAKER

    return ""

#create Settings Screen
settingsScreen = Tk()
settingsScreen.title("Settings")
settingsScreen.geometry("550x350")

#create Labels
settingsLabel= Label(settingsScreen, text="Settings",font= (None, 50, 'underline'))
institutionLabel= Label(settingsScreen, text="Institution:", font=(None,15))
modelLabel= Label(settingsScreen, text= "Application Model:", font=(None, 15))
serialLabel= Label(settingsScreen, text="DCM Serial Number:", font=(None, 15))

intstitutionName= Label(settingsScreen, text="McMaster University", font=(None, 15), relief=RAISED)
modelNumber= Label(settingsScreen, text="Version: " + getModel(), font=(None, 15), relief=RAISED)
DCMSerialNumber= Label(settingsScreen, text="DCM Serial Number: " + getSerial(), font=(None, 15), relief=RAISED)

institutionLogo= ImageTk.PhotoImage(Image.open("McMaster_Logo.png"))
Logo= Label(image=institutionLogo)

#organize Objects
settingsLabel.grid(row= 0, column=0)
institutionLabel.grid(row= 1, column=0)
modelLabel.grid(row= 2, column=0)
serialLabel.grid(row= 3, column=0)

intstitutionName.grid(row=1, column=1)
modelNumber.grid(row=2, column=1)
DCMSerialNumber.grid(row=3, column=1)

Logo.grid(row=4, column=0)


mainloop()

