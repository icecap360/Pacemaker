#VOO Pacing
from tkinter import *

# Variables needed
LowRL = 60
UpRL = 120
VentAmp = 2.5
VentPW = 0.6

# Create AOO Page
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
