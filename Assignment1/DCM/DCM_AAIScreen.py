#AII Pacing
from tkinter import *
import DCM_WelcomeScreen

def openAAI():
    # Variables needed
    LowRL_F = open("LowRL.txt", "r")
    try:
        LowRL = LowRL_F.readline()
    except:
        LowRL = 60 #Default value
    finally:
        LowRL_F.close()
        
    UpRL_F = open("UpRL.txt", "r")
    try:
        UpRL = UpRL_F.readline()
    except:
        UpRL = 120 #Default value
    finally:
        UpRL_F.close()

    AtrAmp_F = open("AtrialAmp.txt", "r")
    try:
        AtrAmp = AtrAmp_F.readline()
    except:
        AtrAmp = 3.5 #Default value
    finally:
        AtrAmp_F.close()
        
    AtrPW_F = open("AtrialPW.txt", "r")
    try:
        AtrPW = AtrPW_F.readline()
    except:
        AtrPW = 0.4 #Default value
    finally:
        AtrPW_F.close()

    AtrSens_F = open("AtrSens.txt", "r")
    try:
        AtrSens = AtrSens_F.readline()
    except:
        AtrSens = 2.5 #Default value
    finally:
        AtrSens_F.close()

    ARP_F = open("ARP.txt", "r")
    try:
        ARP = ARP_F.readline()
    except:
        ARP = 250 #Default value
    finally:
        ARP_F.close()

    PVARP_F = open("PVARP.txt", "r")
    try:
        PVARP = PVARP_F.readline()
    except:
        PVARP = 250 #Default value
    finally:
        PVARP_F.close()
        
    RateSmo_F = open("RateSmo.txt", "r")
    try:
        RateSmo = RateSmo_F.readline()
    except:
        RateSmo = 3 #Default value
    finally:
        RateSmo_F.close()

    Hyst_F = open("Hyst.txt", "r")
    try:
        Hyst = int(Hyst_F.readline())
    except:
        Hyst = 0 #Default value
    finally:
        Hyst_F.close()

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
            #check variable range
            LowRL = int(LowRL_E.get())
            if (LowRL < 30):
                LowRL_V.config(text = "Value too low")
            elif (LowRL > 175):
                LowRL_V.config(text = "Value too high")
            else:
                LowRL_V.config(text = LowRL)
                #write to file
                LowRL_F = open("LowRL.txt", "w")
                LowRL_F.write(LowRL_E.get())
                LowRL_F.close()
        except:
            LowRL_V.config(text = "Invalid Value")

    def changeUpRL():
        try:
            #check variable range
            UpRL = int(UpRL_E.get())
            if (UpRL < 50):
                UpRL_V.config(text = "Value too low")
            elif (UpRL > 175):
                UpRL_V.config(text = "Value too high")
            else:
                UpRL_V.config(text = UpRL)
                #write to file
                UpRL_F = open("UpRL.txt", "w")
                UpRL_F.write(UpRL_E.get())
                UpRL_F.close()
        except:
            UpRL_V.config(text = "Invalid Value")
        
    def changeAtrAmp():
        try:
            #check variable range
            AtrAmp = float(AtrAmp_E.get())
            if (AtrAmp < 0.5):
                AtrAmp_V.config(text = "Value too low")
            elif (AtrAmp > 7.0):
                AtrAmp_V.config(text = "Value too high")
            else:
                AtrAmp_V.config(text = AtrAmp)
                #write to file
                AtrAmp_F = open("AtrialAmp.txt", "w")
                AtrAmp_F.write(AtrAmp_E.get())
                AtrAmp_F.close()
        except:
            AtrialAmp_V.config(text = "Invalid Value")
        
    def changeAtrPW():
        try:
            #check variable range
            AtrPW = float(AtrPW_E.get())
            if (AtrPW < 0.05):
                AtrPW_V.config(text = "Value too low")
            elif (AtrPW > 1.9):
                AtrPW_V.config(text = "Value too high")
            else:
                AtrPW_V.config(text = AtrPW)
                #write to file
                AtrPW_F = open("AtrialPW.txt", "w")
                AtrPW_F.write(AtrPW_E.get())
                AtrPW_F.close()
        except:
            AtrPW_V.config(text = "Invalid Value")

    #Additional Functions

    def changeAtrSens():
        try:
            #check variable range
            AtrSens = float(AtrSens_E.get())
            if (AtrSens < 0.25):
                AtrSens_V.config(text = "Value too low")
            elif (AtrSens > 0.75):
                AtrSens_V.config(text = "Value too high")
            else:
                AtrSens_V.config(text = AtrSens)
                #write to file
                AtrSens_F = open("AtrSens.txt", "w")
                AtrSens_F.write(AtrSens_E.get())
                AtrSens_F.close()
        except:
            AtrSens_V.config(text = "Invalid Value")

    def changeARP():
        try:
            #check variable range
            ARP = int(ARP_E.get())
            if (ARP < 150):
                ARP_V.config(text = "Value too low")
            elif (ARP > 500):
                ARP_V.config(text = "Value too high")
            else:
                ARP_V.config(text = ARP)
                #write to file
                ARP_F = open("ARP.txt", "w")
                ARP_F.write(ARP_E.get())
                ARP_F.close()
        except:
            ARP_V.config(text = "Invalid Value")

    def changePVARP():
        try:
            #check variable range
            PVARP = int(PVARP_E.get())
            if (PVARP < 150):
                PVARP_V.config(text = "Value too low")
            elif (PVARP > 500):
                PVARP_V.config(text = "Value too high")
            else:
                PVARP_V.config(text = PVARP)
                #write to file
                PVARP_F = open("PVARP.txt", "w")
                PVARP_F.write(PVARP_E.get())
                PVARP_F.close()
        except:
            PVARP_V.config(text = "Invalid Value")
            
    def changeRateSmo():
        try:
            #check variable range
            RateSmo = int(RateSmo_E.get())
            if (RateSmo < 0):
                RateSmo_V.config(text = "Value too low")
            elif (RateSmo > 21):
                RateSmo_V.config(text = "Value too high")
            else:
                RateSmo_V.config(text = RateSmo)
                #write to file
                RateSmo_F = open("RateSmo.txt", "w")
                RateSmo_F.write(RateSmo_E.get())
                RateSmo_F.close()
        except:
            RateSmo_V.config(text = "Invalid Value")

    def changeHyst():
        global Hyst
        if (Hyst):
            Hyst = 0
            Hyst_V.config(text="Disabled")
            Hyst_F = open("Hyst.txt", "w")
            Hyst_F.write("0")
            Hyst_F.close()
        else:
            Hyst = 1
            Hyst_V.config(text="Enabled")
            Hyst_F = open("Hyst.txt", "w")
            Hyst_F.write("1")
            Hyst_F.close()


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