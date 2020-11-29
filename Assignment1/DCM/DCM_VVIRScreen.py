#VVIR Pacing
from tkinter import *
import DCM_WelcomeScreen
import threading
import sys
import time
from DCM_Check_Connection import checkConnection

def openVVIR():
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

    VentAmp_F = open("VentAmp.txt", "r")
    try:
        VentAmp = VentAmp_F.readline()
    except:
        VentAmp = 3.5 #Default value
    finally:
        VentAmp_F.close()
        
    VentPW_F = open("VentPW.txt", "r")
    try:
        VentPW = VentPW_F.readline()
    except:
        VentPW = 0.4 #Default value
    finally:
        VentPW_F.close()

    VentSens_F = open("VentSens.txt", "r")
    try:
        VentSens = VentSens_F.readline()
    except:
        VentSens = 2.5 #Default value
    finally:
        VentSens_F.close()

    VRP_F = open("VRP.txt", "r")
    try:
        VRP = VRP_F.readline()
    except:
        VRP = 320 #Default value
    finally:
        VRP_F.close()

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
    VVIRPage = Toplevel()
    VVIRPage.title("VVIR Pacing Mode")
    VVIRPage.geometry("800x450")

    # Create Labels
    AAIRPageLabel= Label(VVIRPage, text="VVIR Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(VVIRPage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(VVIRPage, text = "Upper Rate Limit (ppm)", font =(None,12))
    VentAmp_L = Label(VVIRPage, text = "Ventricular Amplitude (V)", font =(None,12))
    VentPW_L = Label(VVIRPage, text = "Ventricular Pulse Width (ms)", font =(None,12))
    maxSensorRate_L= Label(VVIRPage, text="Maximum Sensor Rate (ppm)", font=(None,12))
    reactTime_L= Label(VVIRPage, text="Reaction Time (s)", font=(None,12))
    respFactor_L= Label(VVIRPage, text="Responce Factor ", font=(None,12))
    recoveryTime_L= Label(VVIRPage, text="Recovery Time (min)", font=(None,12))

    LowRL_V = Label(VVIRPage, text = LowRL, font =(None,12))
    UpRL_V = Label(VVIRPage, text = UpRL, font =(None,12))
    VentAmp_V = Label(VVIRPage, text = VentAmp, font =(None,12))
    VentPW_V = Label(VVIRPage, text = VentPW, font =(None,12))
    maxSensorRate_V= Label(VVIRPage, text=maxSensorRate, font=(None,12))
    reactTime_V= Label(VVIRPage, text=reactTime, font=(None,12))
    respFactor_V= Label(VVIRPage, text=respFactor, font=(None,12))
    recoveryTime_V= Label(VVIRPage, text=recoveryTime, font=(None,12))

    #Additional Labels
    VentSens_L = Label(VVIRPage, text = "Ventricular Sensitivity (mV)", font =(None,12))
    VRP_L = Label(VVIRPage, text = "Refractory Period (ms)", font =(None,12))
    PVARP_L = Label(VVIRPage, text = "PVA Refractory Period (ms)", font =(None,12))
    RateSmo_L = Label(VVIRPage, text = "Rate Smoothing", font =(None,12))
    Hyst_L = Label(VVIRPage, text = "Hysteresis", font =(None,12))

    VentSens_V = Label(VVIRPage, text = VentSens, font =(None,12))
    VRP_V = Label(VVIRPage, text = VRP, font =(None,12))
    PVARP_V = Label(VVIRPage, text = PVARP, font =(None,12))
    RateSmo_V = Label(VVIRPage, text = RateSmo, font =(None,12))
    Hyst_V = Label(VVIRPage, text = "Disabled", font =(None,12))

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
        
    def changeVentAmp():
        try:
            #check variable range
            VentAmp = float(VentAmp_E.get())
            if (VentAmp < 0.5):
                VentAmp_V.config(text = "Value too low")
            elif (VentAmp > 7.0):
                VentAmp_V.config(text = "Value too high")
            else:
                VentAmp_V.config(text = VentAmp)
                #write to file
                VentAmp_F = open("VentAmp.txt", "w")
                VentAmp_F.write(VentAmp_E.get())
                VentAmp_F.close()
        except:
            VentAmp_V.config(text = "Invalid Value")
            
    def changeVentPW():
        try:
            #check variable range
            VentPW = float(VentPW_E.get())
            if (VentPW < 0.05):
                VentPW_V.config(text = "Value too low")
            elif (VentPW > 1.9):
                VentPW_V.config(text = "Value too high")
            else:
                VentPW_V.config(text = VentPW)
                #write to file
                VentPW_F = open("VentPW.txt", "w")
                VentPW_F.write(VentPW_E.get())
                VentPW_F.close()
        except:
            VentPW_V.config(text = "Invalid Value")

    #Additional Functions

    def changeVentSens():
        try:
            #check variable range
            VentSens = float(VentSens_E.get())
            if (VentSens < 1):
                VentSens_V.config(text = "Value too low")
            elif (VentSens > 10):
                VentSens_V.config(text = "Value too high")
            else:
                VentSens_V.config(text = VentSens)
                #write to file
                VentSens_F = open("VentSens.txt", "w")
                VentSens_F.write(VentSens_E.get())
                VentSens_F.close()
        except:
            VentSens_V.config(text = "Invalid Value")

    def changeVRP():
        try:
            #check variable range
            VRP = int(VRP_E.get())
            if (VRP < 150):
                VRP_V.config(text = "Value too low")
            elif (VRP > 500):
                VRP_V.config(text = "Value too high")
            else:
                VRP_V.config(text = VRP)
                #write to file
                VRP_F = open("VRP.txt", "w")
                VRP_F.write(VRP_E.get())
                VRP_F.close()
        except:
            VRP_V.config(text = "Invalid Value")

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
    LowRL_E = Entry(VVIRPage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(VVIRPage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    VentAmp_E = Entry(VVIRPage, width=20)
    VentAmp_E.insert(0, "Enter New Value")

    VentPW_E = Entry(VVIRPage, width=20)
    VentPW_E.insert(0, "Enter New Value")

    #Additional Entires
    VentSens_E = Entry(VVIRPage, width=20)
    VentSens_E.insert(0, "Enter New Value")

    VRP_E = Entry(VVIRPage, width=20)
    VRP_E.insert(0, "Enter New Value")

    PVARP_E = Entry(VVIRPage, width=20)
    PVARP_E.insert(0, "Enter New Value")

    RateSmo_E = Entry(VVIRPage, width=20)
    RateSmo_E.insert(0, "Enter New Value")

    maxSensorRate_E= Entry(VVIRPage, width=20)
    maxSensorRate_E.insert(0, "Enter New Value")

    reactTime_E= Entry(VVIRPage, width=20)
    reactTime_E.insert(0, "Enter New Value")

    respFactor_E= Entry(VVIRPage, width=20)
    respFactor_E.insert(0, "Enter New Value")

    recoveryTime_E= Entry(VVIRPage, width=20)
    recoveryTime_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(VVIRPage, text="Update", command=changeLowRL)
    UpRL_B = Button(VVIRPage, text="Update", command=changeUpRL)
    VentAmp_B = Button(VVIRPage, text="Update", command=changeVentAmp)
    VentPW_B = Button(VVIRPage, text="Update", command=changeVentPW)

    VentSens_B = Button(VVIRPage, text="Update", command=changeVentSens)
    VRP_B = Button(VVIRPage, text="Update", command=changeVRP)
    PVARP_B = Button(VVIRPage, text="Update", command=changePVARP)
    RateSmo_B = Button(VVIRPage, text="Update", command=changeRateSmo)
    Hyst_B = Button(VVIRPage, text="Toggle", command=changeHyst)
    maxSensorRate_B= Button(VVIRPage, text="Update", command=changemaxSensorRate)
    reactTime_B= Button(VVIRPage, text="Update", command=changereactTime)
    respFactor_B= Button(VVIRPage, text="Update", command=changerespFactor)
    recoveryTime_B= Button(VVIRPage, text="Update", command=changerecoveryTime)

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
                    statusLabel= Label(VVIRPage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()