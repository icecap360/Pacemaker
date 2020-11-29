#AAIR Pacing
from tkinter import *
import DCM_WelcomeScreen
import threading
import sys
import time
from DCM_Check_Connection import checkConnection

def openAAIR():
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

    maxSensorRate_F = open("maxSensorRate.txt", "r")
    try:
        maxSensorRate = maxSensorRate_F.readline()
    except:
        maxSensorRate = 120 #Default value
    finally:
        maxSensorRate_F.close()

    reactTime_F = open("reactTime.txt", "r")
    try:
        reactTime = reactTime_F.readline()
    except:
        reactTime = 30 #Default value
    finally:
        reactTime_F.close()

    respFactor_F = open("respFactor.txt", "r")
    try:
        respFactor = respFactor_F.readline()
    except:
        respFactor = 8 #Default value
    finally:
        respFactor_F.close()

    recoveryTime_F = open("recoveryTime.txt", "r")
    try:
        recoveryTime = recoveryTime_F.readline()
    except:
        recoveryTime = 5 #Default value
    finally:
        recoveryTime_F.close()

    # Create AAI Page
    AAIRPage = Toplevel()
    AAIRPage.title("AAIR Pacing Mode")
    AAIRPage.geometry("800x450")

    # Create Labels
    AAIRPageLabel= Label(AAIRPage, text="AAIR Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(AAIRPage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(AAIRPage, text = "Upper Rate Limit (ppm)", font =(None,12))
    AtrAmp_L = Label(AAIRPage, text = "Atrial Amplitude (V)", font =(None,12))
    AtrPW_L = Label(AAIRPage, text = "Atrial Pulse Width (ms)", font =(None,12))
    maxSensorRate_L= Label(AAIRPage, text="Maximum Sensor Rate (ppm)", font=(None,12))
    reactTime_L= Label(AAIRPage, text="Reaction Time (s)", font=(None,12))
    respFactor_L= Label(AAIRPage, text="Responce Factor ", font=(None,12))
    recoveryTime_L= Label(AAIRPage, text="Recovery Time (min)", font=(None,12))

    LowRL_V = Label(AAIRPage, text = LowRL, font =(None,12))
    UpRL_V = Label(AAIRPage, text = UpRL, font =(None,12))
    AtrAmp_V = Label(AAIRPage, text = AtrAmp, font =(None,12))
    AtrPW_V = Label(AAIRPage, text = AtrPW, font =(None,12))
    maxSensorRate_V= Label(AAIRPage, text=maxSensorRate, font=(None,12))
    reactTime_V= Label(AAIRPage, text=reactTime, font=(None,12))
    respFactor_V= Label(AAIRPage, text=respFactor, font=(None,12))
    recoveryTime_V= Label(AAIRPage, text=recoveryTime, font=(None,12))

    #Additional Labels
    AtrSens_L = Label(AAIRPage, text = "Atrial Sensitivity (mV)", font =(None,12))
    ARP_L = Label(AAIRPage, text = "Refractory Period (ms)", font =(None,12))
    PVARP_L = Label(AAIRPage, text = "PVA Refractory Period (ms)", font =(None,12))
    RateSmo_L = Label(AAIRPage, text = "Rate Smoothing", font =(None,12))
    Hyst_L = Label(AAIRPage, text = "Hysteresis", font =(None,12))

    AtrSens_V = Label(AAIRPage, text = AtrSens, font =(None,12))
    ARP_V = Label(AAIRPage, text = ARP, font =(None,12))
    PVARP_V = Label(AAIRPage, text = PVARP, font =(None,12))
    RateSmo_V = Label(AAIRPage, text = RateSmo, font =(None,12))
    Hyst_V = Label(AAIRPage, text = "Disabled", font =(None,12))

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
        
    def changemaxSensorRate():
        try:
            #check variable range
            maxSensorRate = int(maxSensorRate_E.get())
            if (maxSensorRate < 50):
                maxSensorRate_V.config(text = "Value too low")
            elif (maxSensorRate> 175):
                maxSensorRate_V.config(text = "Value too high")
            else:
                maxSensorRate_V.config(text = maxSensorRate)
                #write to file
                maxSensorRate_F = open("maxSensorRate.txt", "w")
                maxSensorRate_F.write(maxSensorRate_E.get())
                maxSensorRate_F.close()
        except:
            maxSensorRate_V.config(text = "Invalid Value")
    
    def changereactTime():
        try:
            #check variable range
            reactTime = int(reactTime_E.get())
            if (reactTime < 10):
                reactTime_V.config(text = "Value too low")
            elif (reactTime > 50):
                reactTime_V.config(text = "Value too high")
            else:
                reactTime_V.config(text = reactTime)
                #write to file
                reactTime_F = open("reactTime.txt", "w")
                reactTime_F.write(reactTime_E.get())
                reactTime_F.close()
        except:
            reactTime_V.config(text = "Invalid Value")

    def changerespFactor():
        try:
            #check variable range
            respFactor = int(respFactor_E.get())
            if (respFactor < 1):
                respFactor_V.config(text = "Value too low")
            elif (respFactor > 16):
                respFactor_V.config(text = "Value too high")
            else:
                respFactor_V.config(text = respFactor)
                #write to file
                respFactor_F = open("respFactor.txt", "w")
                respFactor_F.write(respFactor_E.get())
                respFactor_F.close()
        except:
            respFactor_V.config(text = "Invalid Value")
    
    def changerecoveryTime():
        try:
            #check variable range
            recoveryTime = int(recoveryTime_E.get())
            if (recoveryTime < 2):
                recoveryTime_V.config(text = "Value too low")
            elif (recoveryTime > 16):
                recoveryTime_V.config(text = "Value too high")
            else:
                recoveryTime_V.config(text = recoveryTime)
                #write to file
                recoveryTime_F = open("recoveryTime.txt", "w")
                recoveryTime_F.write(recoveryTime_E.get())
                recoveryTime_F.close()
        except:
            recoveryTime_V.config(text = "Invalid Value")


    # Create Entries
    LowRL_E = Entry(AAIRPage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(AAIRPage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    AtrAmp_E = Entry(AAIRPage, width=20)
    AtrAmp_E.insert(0, "Enter New Value")

    AtrPW_E = Entry(AAIRPage, width=20)
    AtrPW_E.insert(0, "Enter New Value")

    #Additional Entires
    AtrSens_E = Entry(AAIRPage, width=20)
    AtrSens_E.insert(0, "Enter New Value")

    ARP_E = Entry(AAIRPage, width=20)
    ARP_E.insert(0, "Enter New Value")

    PVARP_E = Entry(AAIRPage, width=20)
    PVARP_E.insert(0, "Enter New Value")

    RateSmo_E = Entry(AAIRPage, width=20)
    RateSmo_E.insert(0, "Enter New Value")

    maxSensorRate_E= Entry(AAIRPage, width=20)
    maxSensorRate_E.insert(0, "Enter New Value")

    reactTime_E= Entry(AAIRPage, width=20)
    reactTime_E.insert(0, "Enter New Value")

    respFactor_E= Entry(AAIRPage, width=20)
    respFactor_E.insert(0, "Enter New Value")

    recoveryTime_E= Entry(AAIRPage, width=20)
    recoveryTime_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(AAIRPage, text="Update", command=changeLowRL)
    UpRL_B = Button(AAIRPage, text="Update", command=changeUpRL)
    AtrAmp_B = Button(AAIRPage, text="Update", command=changeAtrAmp)
    AtrPW_B = Button(AAIRPage, text="Update", command=changeAtrPW)

    AtrSens_B = Button(AAIRPage, text="Update", command=changeAtrSens)
    ARP_B = Button(AAIRPage, text="Update", command=changeARP)
    PVARP_B = Button(AAIRPage, text="Update", command=changePVARP)
    RateSmo_B = Button(AAIRPage, text="Update", command=changeRateSmo)
    Hyst_B = Button(AAIRPage, text="Toggle", command=changeHyst)
    maxSensorRate_B= Button(AAIRPage, text="Update", command=changemaxSensorRate)
    reactTime_B= Button(AAIRPage, text="Update", command=changereactTime)
    respFactor_B= Button(AAIRPage, text="Update", command=changerespFactor)
    recoveryTime_B= Button(AAIRPage, text="Update", command=changerecoveryTime)

    # Organize objects
    AAIRPageLabel.grid(row= 1, column= 1)

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

    maxSensorRate_L.grid(row= 11, column= 0)
    maxSensorRate_V.grid(row= 11, column= 1)
    maxSensorRate_E.grid(row= 11, column= 2)
    maxSensorRate_B.grid(row= 11, column= 3)

    reactTime_L.grid(row= 13, column= 0)
    reactTime_V.grid(row= 13, column= 1)
    reactTime_E.grid(row= 13, column= 2)
    reactTime_B.grid(row= 13, column= 3)

    respFactor_L.grid(row= 14, column= 0)
    respFactor_V.grid(row= 14, column= 1)
    respFactor_E.grid(row= 14, column= 2)
    respFactor_B.grid(row= 14, column= 3)

    recoveryTime_L.grid(row= 14, column= 0)
    recoveryTime_V.grid(row= 14, column= 1)
    recoveryTime_E.grid(row= 14, column= 2)
    recoveryTime_B.grid(row= 14, column= 3)

    #Statues Bar
 
    def statusCreate():
            while(True):
                try:
                    user=open("currentUser.txt","r")
                    connectionStatus=checkConnection()
                    statusLabel= Label(AAIRPage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()