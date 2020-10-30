#AII Pacing
from tkinter import *

def openAAI():
    # Variables needed
    LowRL = 60
    UpRL = 120
    AtrAmp = 3.5
    AtrPW = 0.4

    AtrSens = .75
    ARP = 250
    PVARP = 250
    Hyst = 0
    RateSmo = 3

    # Create AAI Page
    AIIpage = Tk()
    AIIpage.title("AAI Pacing Mode")
    AIIpage.geometry("800x400")

    # Create Labels
    AIIpageLabel= Label(AIIpage, text="AAI Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(AIIpage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(AIIpage, text = "Upper Rate Limit (ppm)", font =(None,12))
    AtrAmp_L = Label(AIIpage, text = "Atrial Amplitude (V)", font =(None,12))
    AtrPW_L = Label(AIIpage, text = "Atrial Pulse Width (ms)", font =(None,12))

    LowRL_V = Label(AIIpage, text = LowRL, font =(None,12))
    UpRL_V = Label(AIIpage, text = UpRL, font =(None,12))
    AtrAmp_V = Label(AIIpage, text = AtrAmp, font =(None,12))
    AtrPW_V = Label(AIIpage, text = AtrPW, font =(None,12))

    #Additional Labels
    AtrSens_L = Label(AIIpage, text = "Atrial Sensitivity (mV)", font =(None,12))
    ARP_L = Label(AIIpage, text = "Refractory Period (ms)", font =(None,12))
    PVARP_L = Label(AIIpage, text = "PVA Refractory Period (ms)", font =(None,12))
    RateSmo_L = Label(AIIpage, text = "Rate Smoothing", font =(None,12))
    Hyst_L = Label(AIIpage, text = "Hysteresis", font =(None,12))

    AtrSens_V = Label(AIIpage, text = AtrSens, font =(None,12))
    ARP_V = Label(AIIpage, text = ARP, font =(None,12))
    PVARP_V = Label(AIIpage, text = PVARP, font =(None,12))
    RateSmo_V = Label(AIIpage, text = RateSmo, font =(None,12))
    Hyst_V = Label(AIIpage, text = "Disabled", font =(None,12))

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
        
    def changeAtrAmp():
        try:
            AtrAmp = float(AtrAmp_E.get())
            AtrAmp_V.config(text = AtrAmp)
        except:
            AtrAmp_V.config(text = "Invalid Value")
        
    def changeAtrPW():
        try:
            AtrPW = float(AtrPW_E.get())
            AtrPW_V.config(text = AtrPW)
        except:
            AtrPW_V.config(text = "Invalid Value")

    #Additional Functions

    def changeAtrSens():
        try:
            AtrSens = float(AtrSens_E.get())
            AtrSens_V.config(text = AtrSens)
        except:
            AtrSens_V.config(text = "Invalid Value")

    def changeARP():
        try:
            ARP = int(ARP_E.get())
            ARP_V.config(text = ARP)
        except:
            ARP_V.config(text = "Invalid Value")

    def changePVARP():
        try:
            PVARP = int(PVARP_E.get())
            PVARP_V.config(text = PVARP)
        except:
            PVARP_V.config(text = "Invalid Value")
            
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
    LowRL_E = Entry(AIIpage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(AIIpage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    AtrAmp_E = Entry(AIIpage, width=20)
    AtrAmp_E.insert(0, "Enter New Value")

    AtrPW_E = Entry(AIIpage, width=20)
    AtrPW_E.insert(0, "Enter New Value")

    #Additional Entires
    AtrSens_E = Entry(AIIpage, width=20)
    AtrSens_E.insert(0, "Enter New Value")

    ARP_E = Entry(AIIpage, width=20)
    ARP_E.insert(0, "Enter New Value")

    PVARP_E = Entry(AIIpage, width=20)
    PVARP_E.insert(0, "Enter New Value")

    RateSmo_E = Entry(AIIpage, width=20)
    RateSmo_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(AIIpage, text="Update", command=changeLowRL)
    UpRL_B = Button(AIIpage, text="Update", command=changeUpRL)
    AtrAmp_B = Button(AIIpage, text="Update", command=changeAtrAmp)
    AtrPW_B = Button(AIIpage, text="Update", command=changeAtrPW)

    AtrSens_B = Button(AIIpage, text="Update", command=changeAtrSens)
    ARP_B = Button(AIIpage, text="Update", command=changeARP)
    PVARP_B = Button(AIIpage, text="Update", command=changePVARP)
    RateSmo_B = Button(AIIpage, text="Update", command=changeRateSmo)
    Hyst_B = Button(AIIpage, text="Toggle", command=changeHyst)

    # Organize objects
    AIIpageLabel.grid(row= 1, column= 1)

    LowRL_L.grid(row= 2, column= 0)
    LowRL_V.grid(row= 2, column= 1)
    LowRL_E.grid(row= 2, column= 2)
    LowRL_B.grid(row= 2, column= 3)

    UpRL_L.grid(row= 3, column= 0)
    UpRL_V.grid(row= 3, column= 1)
    UpRL_E.grid(row= 3, column= 2)
    UpRL_B.grid(row= 3, column= 3)

    AtrAmp_L.grid(row= 4, column= 0)
    AtrAmp_V.grid(row= 4, column= 1)
    AtrAmp_E.grid(row= 4, column= 2)
    AtrAmp_B.grid(row= 4, column= 3)

    AtrPW_L.grid(row= 5, column= 0)
    AtrPW_V.grid(row= 5, column= 1)
    AtrPW_E.grid(row= 5, column= 2)
    AtrPW_B.grid(row= 5, column= 3)

    #Additional objects

    AtrSens_L.grid(row= 6, column= 0)
    AtrSens_V.grid(row= 6, column= 1)
    AtrSens_E.grid(row= 6, column= 2)
    AtrSens_B.grid(row= 6, column= 3)

    ARP_L.grid(row= 7, column= 0)
    ARP_V.grid(row= 7, column= 1)
    ARP_E.grid(row= 7, column= 2)
    ARP_B.grid(row= 7, column= 3)

    PVARP_L.grid(row= 8, column= 0)
    PVARP_V.grid(row= 8, column= 1)
    PVARP_E.grid(row= 8, column= 2)
    PVARP_B.grid(row= 8, column= 3)

    RateSmo_L.grid(row= 9, column= 0)
    RateSmo_V.grid(row= 9, column= 1)
    RateSmo_E.grid(row= 9, column= 2)
    RateSmo_B.grid(row= 9, column= 3)
    #Hyst
    Hyst_L.grid(row= 10, column= 0)
    Hyst_V.grid(row= 10, column= 1)
    Hyst_B.grid(row= 10, column= 2)


    mainloop()