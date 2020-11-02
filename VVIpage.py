#VVI Pacing
from tkinter import *

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

RateSmo_F = open("RateSmo.txt", "r")
try:
    RateSmo = RateSmo_F.readline()
except:
    RateSmo = 320 #Default value
finally:
    RateSmo_F.close()

Hyst_F = open("Hyst.txt", "r")
try:
    Hyst = int(Hyst_F.readline())
except:
    Hyst = 0 #Default value
finally:
    Hyst_F.close()

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
if (Hyst == 1):
    Hyst_V = Label(VIIpage, text = "Enabled", font =(None,12))
else:
    Hyst_V = Label(VIIpage, text = "Disabled", font =(None,12))

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


mainloop()
