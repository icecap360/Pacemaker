#AOOR Pacing
from tkinter import *
import DCM_WelcomeScreen
import threading
import sys
import time
from DCM_Check_Connection import checkConnection

def openAOOR():
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

    AtrialAmp_F = open("AtrialAmp.txt", "r")
    try:
        AtrialAmp = AtrialAmp_F.readline()
    except:
        AtrialAmp = 3.5 #Default value
    finally:
        AtrialAmp_F.close()
        
    AtrialPW_F = open("AtrialPW.txt", "r")
    try:
        AtrialPW = AtrialPW_F.readline()
    except:
        AtrialPW = 0.4 #Default value
    finally:
        AtrialPW_F.close()

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
    AOORPage = Toplevel()
    AOORPage.title("AOOR Pacing Mode")
    AOORPage.geometry("800x400")

    # Create Labels
    AOORPageLabel= Label(AOORPage, text="AOOR Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(AOORPage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(AOORPage, text = "Upper Rate Limit (ppm)", font =(None,12))
    AtrialAmp_L = Label(AOORPage, text = "Atrial Amplitude (V)", font =(None,12))
    AtrialPW_L = Label(AOORPage, text = "Atrial Pulse Width (ms)", font =(None,12))
    maxSensorRate_L= Label(AOORPage, text="Maximum Sensor Rate (ppm)", font=(None,12))
    actThreshold_L= Label(AOORPage, text="Activity Threshold", font=(None,12))
    reactTime_L= Label(AOORPage, text="Reaction Time (s)", font=(None,12))
    respFactor_L= Label(AOORPage, text="Responce Factor ", font=(None,12))
    recoveryTime_L= Label(AOORPage, text="Recovery Time (min)", font=(None,12))

    LowRL_V = Label(AOORPage, text = LowRL, font =(None,12))
    UpRL_V = Label(AOORPage, text = UpRL, font =(None,12))
    AtrialAmp_V = Label(AOORPage, text = AtrialAmp, font =(None,12))
    AtrialPW_V = Label(AOORPage, text = AtrialPW, font =(None,12))
    maxSensorRate_V= Label(AOORPage, text=maxSensorRate, font=(None,12))
    actThreshold_V= Label(AOORPage, text=actThreshold, font=(None,12))
    reactTime_V= Label(AOORPage, text=reactTime, font=(None,12))
    respFactor_V= Label(AOORPage, text=respFactor, font=(None,12))
    recoveryTime_V= Label(AOORPage, text=recoveryTime, font=(None,12))

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
            AtrialAmp = float(AtrialAmp_E.get())
            if (AtrialAmp < 0.5):
                AtrialAmp_V.config(text = "Value too low")
            elif (AtrialAmp > 7.0):
                AtrialAmp_V.config(text = "Value too high")
            else:
                AtrialAmp_V.config(text = AtrialAmp)
                #write to file
                AtrialAmp_F = open("AtrialAmp.txt", "w")
                AtrialAmp_F.write(AtrialAmp_E.get())
                AtrialAmp_F.close()
        except:
            AtrialAmp_V.config(text = "Invalid Value")
        
    def changeAtrPW():
        try:
            #check variable range
            AtrialPW = float(AtrialPW_E.get())
            if (AtrialPW < 0.05):
                AtrialPW_V.config(text = "Value too low")
            elif (AtrialPW > 1.9):
                AtrialPW_V.config(text = "Value too high")
            else:
                AtrialPW_V.config(text = AtrialPW)
                #write to file
                AtrialPW_F = open("AtrialPW.txt", "w")
                AtrialPW_F.write(AtrialPW_E.get())
                AtrialPW_F.close()
        except:
            AtrialPW_V.config(text = "Invalid Value")
    
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
    LowRL_E = Entry(AOORPage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(AOORPage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    AtrialAmp_E = Entry(AOORPage, width=20)
    AtrialAmp_E.insert(0, "Enter New Value")

    AtrialPW_E = Entry(AOORPage, width=20)
    AtrialPW_E.insert(0, "Enter New Value")

    maxSensorRate_E= Entry(AOORPage, width=20)
    maxSensorRate_E.insert(0, "Enter New Value")

    actThreshold_E= Entry(AOORPage, width=20)
    actThreshold_E.insert(0, "Enter New Value")

    reactTime_E= Entry(AOORPage, width=20)
    reactTime_E.insert(0, "Enter New Value")

    respFactor_E= Entry(AOORPage, width=20)
    respFactor_E.insert(0, "Enter New Value")

    recoveryTime_E= Entry(AOORPage, width=20)
    recoveryTime_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(AOORPage, text="Update", command=changeLowRL)
    UpRL_B = Button(AOORPage, text="Update", command=changeUpRL)
    AtrialAmp_B = Button(AOORPage, text="Update", command=changeAtrAmp)
    AtrialPW_B = Button(AOORPage, text="Update", command=changeAtrPW)
    maxSensorRate_B= Button(AOORPage, text="Update", command=changemaxSensorRate)
    actThreshold_B= Button(AOORPage, text="Update", command=changeactThreshold)
    reactTime_B= Button(AOORPage, text="Update", command=changereactTime)
    respFactor_B= Button(AOORPage, text="Update", command=changerespFactor)
    recoveryTime_B= Button(AOORPage, text="Update", command=changerecoveryTime)


    # Organize objects
    AOORPageLabel.grid(row= 1, column= 1)

    LowRL_L.grid(row= 2, column= 0)
    LowRL_V.grid(row= 2, column= 1)
    LowRL_E.grid(row= 2, column= 2)
    LowRL_B.grid(row= 2, column= 3)

    UpRL_L.grid(row= 3, column= 0)
    UpRL_V.grid(row= 3, column= 1)
    UpRL_E.grid(row= 3, column= 2)
    UpRL_B.grid(row= 3, column= 3)

    AtrialAmp_L.grid(row= 4, column= 0)
    AtrialAmp_V.grid(row= 4, column= 1)
    AtrialAmp_E.grid(row= 4, column= 2)
    AtrialAmp_B.grid(row= 4, column= 3)

    AtrialPW_L.grid(row= 5, column= 0)
    AtrialPW_V.grid(row= 5, column= 1)
    AtrialPW_E.grid(row= 5, column= 2)
    AtrialPW_B.grid(row= 5, column= 3)

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
                    statusLabel= Label(AOORPage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()