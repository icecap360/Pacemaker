#VVI Pacing
from tkinter import *
import DCM_WelcomeScreen

def openVVI():
    # Variables needed
    LowRL = 60
    UpRL = 120
    VentAmp = 2.5
    VentPW = 0.6

    VentSens = 2.5
    VRP = 320
    Hyst = 0
    RateSmo = 3

    # Create VVI Page
    VIIpage = Tk()
    VIIpage.title("VVI Pacing Mode")
    VIIpage.geometry("800x400")

    # Create Labels
    VIIpageLabel= Label(VIIpage, text="VVI Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(VIIpage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(VIIpage, text = "Upper Rate Limit (ppm)", font =(None,12))
    VentAmp_L = Label(VIIpage, text = "Ventricular Amplitude (V)", font =(None,12))
    VentPW_L = Label(VIIpage, text = "Ventricular Pulse Width (ms)", font =(None,12))

    LowRL_V = Label(VIIpage, text = LowRL, font =(None,12))
    UpRL_V = Label(VIIpage, text = UpRL, font =(None,12))
    VentAmp_V = Label(VIIpage, text = VentAmp, font =(None,12))
    VentPW_V = Label(VIIpage, text = VentPW, font =(None,12))

    #Additional Labels
    VentSens_L = Label(VIIpage, text = "Ventricular Sensitivity (mV)", font =(None,12))
    VRP_L = Label(VIIpage, text = "Refractory Period (ms)", font =(None,12))
    RateSmo_L = Label(VIIpage, text = "Rate Smoothing", font =(None,12))
    Hyst_L = Label(VIIpage, text = "Hysteresis", font =(None,12))

    VentSens_V = Label(VIIpage, text = VentSens, font =(None,12))
    VRP_V = Label(VIIpage, text = VRP, font =(None,12))
    RateSmo_V = Label(VIIpage, text = RateSmo, font =(None,12))
    Hyst_V = Label(VIIpage, text = "Disabled", font =(None,12))

    # Button Functions
    def changeLowRL():
        try:
            LowRL = int(LowRL_E.get())
            LowRL_V.config(text = LowRL)
        except:
            LowRL_V.config(text = "Invalid Value")

    def changeUpRL():
        try:
            UpRL = int(UpRL_E.get())
            UpRL_V.config(text = UpRL)
        except:
            UpRL_V.config(text = "Invalid Value")
        
    def changeVentAmp():
        try:
            VentAmp = float(VentAmp_E.get())
            VentAmp_V.config(text = VentAmp)
        except:
            VentAmp_V.config(text = "Invalid Value")
        
    def changeVentPW():
        try:
            VentPW = float(VentPW_E.get())
            VentPW_V.config(text = VentPW)
        except:
            VentPW_V.config(text = "Invalid Value")

    #Additional Functions

    def changeVentSens():
        try:
            VentSens = float(VentSens_E.get())
            VentSens_V.config(text = VentSens)
        except:
            VentSens_V.config(text = "Invalid Value")

    def changeVRP():
        try:
            VRP = int(VRP_E.get())
            VRP_V.config(text = VRP)
        except:
            VRP_V.config(text = "Invalid Value")

    def changeRateSmo():
        try:
            RateSmo = int(RateSmo_E.get())
            RateSmo_V.config(text = RateSmo)
        except:
            RateSmo_V.config(text = "Invalid Value")

    def changeHyst():
        global Hyst
        if (Hyst):
            Hyst = 0
            Hyst_V.config(text="Disabled")

        else:
            Hyst = 1
            Hyst_V.config(text="Enabled")


    # Create Entries
    LowRL_E = Entry(VIIpage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(VIIpage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    VentAmp_E = Entry(VIIpage, width=20)
    VentAmp_E.insert(0, "Enter New Value")

    VentPW_E = Entry(VIIpage, width=20)
    VentPW_E.insert(0, "Enter New Value")

    #Additional Entires
    VentSens_E = Entry(VIIpage, width=20)
    VentSens_E.insert(0, "Enter New Value")

    VRP_E = Entry(VIIpage, width=20)
    VRP_E.insert(0, "Enter New Value")

    RateSmo_E = Entry(VIIpage, width=20)
    RateSmo_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(VIIpage, text="Update", command=changeLowRL)
    UpRL_B = Button(VIIpage, text="Update", command=changeUpRL)
    VentAmp_B = Button(VIIpage, text="Update", command=changeVentAmp)
    VentPW_B = Button(VIIpage, text="Update", command=changeVentPW)

    VentSens_B = Button(VIIpage, text="Update", command=changeVentSens)
    VRP_B = Button(VIIpage, text="Update", command=changeVRP)
    RateSmo_B = Button(VIIpage, text="Update", command=changeRateSmo)
    Hyst_B = Button(VIIpage, text="Toggle", command=changeHyst)

    # Organize objects
    VIIpageLabel.grid(row= 1, column= 1)

    LowRL_L.grid(row= 2, column= 0)
    LowRL_V.grid(row= 2, column= 1)
    LowRL_E.grid(row= 2, column= 2)
    LowRL_B.grid(row= 2, column= 3)

    UpRL_L.grid(row= 3, column= 0)
    UpRL_V.grid(row= 3, column= 1)
    UpRL_E.grid(row= 3, column= 2)
    UpRL_B.grid(row= 3, column= 3)

    VentAmp_L.grid(row= 4, column= 0)
    VentAmp_V.grid(row= 4, column= 1)
    VentAmp_E.grid(row= 4, column= 2)
    VentAmp_B.grid(row= 4, column= 3)

    VentPW_L.grid(row= 5, column= 0)
    VentPW_V.grid(row= 5, column= 1)
    VentPW_E.grid(row= 5, column= 2)
    VentPW_B.grid(row= 5, column= 3)

    #Additional objects

    VentSens_L.grid(row= 6, column= 0)
    VentSens_V.grid(row= 6, column= 1)
    VentSens_E.grid(row= 6, column= 2)
    VentSens_B.grid(row= 6, column= 3)

    VRP_L.grid(row= 7, column= 0)
    VRP_V.grid(row= 7, column= 1)
    VRP_E.grid(row= 7, column= 2)
    VRP_B.grid(row= 7, column= 3)

    RateSmo_L.grid(row= 8, column= 0)
    RateSmo_V.grid(row= 8, column= 1)
    RateSmo_E.grid(row= 8, column= 2)
    RateSmo_B.grid(row= 8, column= 3)
    #Hyst
    Hyst_L.grid(row= 9, column= 0)
    Hyst_V.grid(row= 9, column= 1)
    Hyst_B.grid(row= 9, column= 2)

    #Statues Bar
    statusLabel= Label(VIIpage, text="User: "+ DCM_WelcomeScreen.user +"\tConnection Status: "+DCM_WelcomeScreen.conectionStatus)
    statusLabel.grid(row=10,columnspan=3)

    mainloop()
