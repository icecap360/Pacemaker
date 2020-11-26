#VOOR Pacing
from tkinter import *
import DCM_WelcomeScreen
import threading
import sys
import time
from DCM_Check_Connection import checkConnection

def openVOOR():
    # Initialize variables
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

    maxSensorRate_F = open("maxSensorRate.txt", "r")
    try:
        maxSensorRate = maxSensorRate_F.readline()
    except:
        maxSensorRate = 120 #Default value
    finally:
        maxSensorRate_F.close()

    actThreshold_F = open("actThreshold.txt", "r")
    try:
        actThreshold = actThreshold_F.readline()
    except:
        actThreshold = "Med" #Default value
    finally:
        actThreshold_F.close()

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
    
    # Create AOO Page
    VOORPage = Toplevel()
    VOORPage.title("VOOR Pacing Mode")
    VOORPage.geometry("800x400")

    # Create Labels
    VOORPageLabel= Label(VOORPage, text="VOOR Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(VOORPage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(VOORPage, text = "Upper Rate Limit (ppm)", font =(None,12))
    VentAmp_L = Label(VOORPage, text = "Ventricular Amplitude (V)", font =(None,12))
    VentPW_L = Label(VOORPage, text = "Ventricular Pulse Width (ms)", font =(None,12))
    maxSensorRate_L= Label(VOORPage, text="Maximum Sensor Rate (ppm)", font=(None,12))
    actThreshold_L= Label(VOORPage, text="Activity Threshold", font=(None,12))
    reactTime_L= Label(VOORPage, text="Reaction Time (s)", font=(None,12))
    respFactor_L= Label(VOORPage, text="Responce Factor ", font=(None,12))
    recoveryTime_L= Label(VOORPage, text="Recovery Time (min)", font=(None,12))

    LowRL_V = Label(VOORPage, text = LowRL, font =(None,12))
    UpRL_V = Label(VOORPage, text = UpRL, font =(None,12))
    VentAmp_V = Label(VOORPage, text = VentAmp, font =(None,12))
    VentPW_V = Label(VOORPage, text = VentPW, font =(None,12))
    maxSensorRate_V= Label(VOORPage, text=maxSensorRate, font=(None,12))
    actThreshold_V= Label(VOORPage, text=actThreshold, font=(None,12))
    reactTime_V= Label(VOORPage, text=reactTime, font=(None,12))
    respFactor_V= Label(VOORPage, text=respFactor, font=(None,12))
    recoveryTime_V= Label(VOORPage, text=recoveryTime, font=(None,12))

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
    
    def changeactThreshold():
        try:
            #check variable range
            actThreshold = actThreshold_E.get()
            if (actThreshold in ("V-Low", "Low", "Med-Low", "Med", "Med-High", "High", "V-High")):
                actThreshold_V.config(text = actThreshold)
                #write to file
                actThreshold_F = open("actThreshold.txt", "w")
                actThreshold_F.write(actThreshold_E.get())
                actThreshold_F.close()
        except:
            AtrialPW_V.config(text = "Invalid Value")
    
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
    LowRL_E = Entry(VOORPage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(VOORPage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    VentAmp_E = Entry(VOORPage, width=20)
    VentAmp_E.insert(0, "Enter New Value")

    VentPW_E = Entry(VOORPage, width=20)
    VentPW_E.insert(0, "Enter New Value")

    maxSensorRate_E= Entry(VOORPage, width=20)
    maxSensorRate_E.insert(0, "Enter New Value")

    actThreshold_E= Entry(VOORPage, width=20)
    actThreshold_E.insert(0, "Enter New Value")

    reactTime_E= Entry(VOORPage, width=20)
    reactTime_E.insert(0, "Enter New Value")

    respFactor_E= Entry(VOORPage, width=20)
    respFactor_E.insert(0, "Enter New Value")

    recoveryTime_E= Entry(VOORPage, width=20)
    recoveryTime_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(VOORPage, text="Update", command=changeLowRL)
    UpRL_B = Button(VOORPage, text="Update", command=changeUpRL)
    VentAmp_B = Button(VOORPage, text="Update", command=changeVentAmp)
    VentPW_B = Button(VOORPage, text="Update", command=changeVentPW)
    maxSensorRate_B= Button(VOORPage, text="Update", command=changemaxSensorRate)
    actThreshold_B= Button(VOORPage, text="Update", command=changeactThreshold)
    reactTime_B= Button(VOORPage, text="Update", command=changereactTime)
    respFactor_B= Button(VOORPage, text="Update", command=changerespFactor)
    recoveryTime_B= Button(VOORPage, text="Update", command=changerecoveryTime)


    # Organize objects
    VOORPageLabel.grid(row= 1, column= 1)

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

    maxSensorRate_L.grid(row= 6, column= 0)
    maxSensorRate_V.grid(row= 6, column= 1)
    maxSensorRate_E.grid(row= 6, column= 2)
    maxSensorRate_B.grid(row= 6, column= 3)

    actThreshold_L.grid(row= 7, column= 0)
    actThreshold_V.grid(row= 7, column= 1)
    actThreshold_E.grid(row= 7, column= 2)
    actThreshold_B.grid(row= 7, column= 3)

    reactTime_L.grid(row= 8, column= 0)
    reactTime_V.grid(row= 8, column= 1)
    reactTime_E.grid(row= 8, column= 2)
    reactTime_B.grid(row= 8, column= 3)

    respFactor_L.grid(row= 9, column= 0)
    respFactor_V.grid(row= 9, column= 1)
    respFactor_E.grid(row= 9, column= 2)
    respFactor_B.grid(row= 9, column= 3)

    recoveryTime_L.grid(row= 10, column= 0)
    recoveryTime_V.grid(row= 10, column= 1)
    recoveryTime_E.grid(row= 10, column= 2)
    recoveryTime_B.grid(row= 10, column= 3)

    #Statues Bar
 
    def statusCreate():
            while(True):
                try:
                    user=open("currentUser.txt","r")
                    connectionStatus=checkConnection()
                    statusLabel= Label(VOORPage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()