#VOO Pacing
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

# Create VOO Page
VOOpage = Tk()
VOOpage.title("VOO Pacing Mode")
VOOpage.geometry("800x400")

# Create Labels
VOOpageLabel= Label(VOOpage, text="VOO Pacing Mode", font=(None,20,'underline'))

LowRL_L = Label(VOOpage, text = "Lower Rate Limit (ppm)", font =(None,12))
UpRL_L = Label(VOOpage, text = "Upper Rate Limit (ppm)", font =(None,12))
VentAmp_L = Label(VOOpage, text = "Ventricular Amplitude (V)", font =(None,12))
VentPW_L = Label(VOOpage, text = "Ventricular Pulse Width (ms)", font =(None,12))

LowRL_V = Label(VOOpage, text = LowRL, font =(None,12))
UpRL_V = Label(VOOpage, text = UpRL, font =(None,12))
VentAmp_V = Label(VOOpage, text = VentAmp, font =(None,12))
VentPW_V = Label(VOOpage, text = VentPW, font =(None,12))


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

# Create Entries
LowRL_E = Entry(VOOpage, width=20)
LowRL_E.insert(0, "Enter New Value")

UpRL_E = Entry(VOOpage, width=20)
UpRL_E.insert(0, "Enter New Value")

VentAmp_E = Entry(VOOpage, width=20)
VentAmp_E.insert(0, "Enter New Value")

VentPW_E = Entry(VOOpage, width=20)
VentPW_E.insert(0, "Enter New Value")

# Create Buttons
LowRL_B = Button(VOOpage, text="Update", command=changeLowRL)
UpRL_B = Button(VOOpage, text="Update", command=changeUpRL)
VentAmp_B = Button(VOOpage, text="Update", command=changeVentAmp)
VentPW_B = Button(VOOpage, text="Update", command=changeVentPW)

# Organize objects
VOOpageLabel.grid(row= 1, column= 1)

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

mainloop()
