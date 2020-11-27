#DOO Pacing
from tkinter import *
import DCM_WelcomeScreen
import threading
import sys
import time
from DCM_Check_Connection import checkConnection

def openDOO():
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

    # Create AOO Page
    DOOPage = Toplevel()
    DOOPage.title("DOO Pacing Mode")
    DOOPage.geometry("800x400")

    # Create Labels
    DOOPageLabel= Label(DOOPage, text="DOO Pacing Mode", font=(None,20,'underline'))

    LowRL_L = Label(DOOPage, text = "Lower Rate Limit (ppm)", font =(None,12))
    UpRL_L = Label(DOOPage, text = "Upper Rate Limit (ppm)", font =(None,12))
    AtrialAmp_L = Label(DOOPage, text = "Atrial Amplitude (V)", font =(None,12))
    AtrialPW_L = Label(DOOPage, text = "Atrial Pulse Width (ms)", font =(None,12))
    VentAmp_L = Label(DOOPage, text = "Ventricular Amplitude (V)", font =(None,12))
    VentPW_L = Label(DOOPage, text = "Ventricular Pulse Width (ms)", font =(None,12))

    LowRL_V = Label(DOOPage, text = LowRL, font =(None,12))
    UpRL_V = Label(DOOPage, text = UpRL, font =(None,12))
    AtrialAmp_V = Label(DOOPage, text = AtrialAmp, font =(None,12))
    AtrialPW_V = Label(DOOPage, text = AtrialPW, font =(None,12))
    VentAmp_V = Label(DOOPage, text = VentAmp, font =(None,12))
    VentPW_V = Label(DOOPage, text = VentPW, font =(None,12))

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

    # Create Entries
    LowRL_E = Entry(DOOPage, width=20)
    LowRL_E.insert(0, "Enter New Value")

    UpRL_E = Entry(DOOPage, width=20)
    UpRL_E.insert(0, "Enter New Value")

    AtrialAmp_E = Entry(DOOPage, width=20)
    AtrialAmp_E.insert(0, "Enter New Value")

    AtrialPW_E = Entry(DOOPage, width=20)
    AtrialPW_E.insert(0, "Enter New Value")

    VentAmp_E = Entry(DOOPage, width=20)
    VentAmp_E.insert(0, "Enter New Value")

    VentPW_E = Entry(DOOPage, width=20)
    VentPW_E.insert(0, "Enter New Value")

    # Create Buttons
    LowRL_B = Button(DOOPage, text="Update", command=changeLowRL)
    UpRL_B = Button(DOOPage, text="Update", command=changeUpRL)
    AtrialAmp_B = Button(DOOPage, text="Update", command=changeAtrAmp)
    AtrialPW_B = Button(DOOPage, text="Update", command=changeAtrPW)
    VentAmp_B = Button(DOOPage, text="Update", command=changeVentAmp)
    VentPW_B = Button(DOOPage, text="Update", command=changeVentPW)

    # Organize objects
    DOOPageLabel.grid(row= 1, column= 1)

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

    VentAmp_L.grid(row= 6, column= 0)
    VentAmp_V.grid(row= 6, column= 1)
    VentAmp_E.grid(row= 6, column= 2)
    VentAmp_B.grid(row= 6, column= 3)

    VentPW_L.grid(row= 7, column= 0)
    VentPW_V.grid(row= 7, column= 1)
    VentPW_E.grid(row= 7, column= 2)
    VentPW_B.grid(row= 7, column= 3)


    #Statues Bar
 
    def statusCreate():
            while(True):
                try:
                    user=open("currentUser.txt","r")
                    connectionStatus=checkConnection()
                    statusLabel= Label(DOOPage, text="User: "+ user.read() +"            Connection Status: "+connectionStatus+"                ")
                    statusLabel.place(relx=0.0, rely=1.0, anchor="sw")
                    time.sleep(5000)
                except TclError:
                    sys.exit()


    statusBar = threading.Thread(target=statusCreate, args=())
    statusBar.setDaemon(True)
    statusBar.start()

    mainloop()