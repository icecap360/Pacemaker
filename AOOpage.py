#AOO Pacing
from tkinter import *

# Variables needed
LowRL = 60
UpRL = 120
AtrialAmp = 3.5
AtrialPW = 0.4

# Create AOO Page
AOOpage = Tk()
AOOpage.title("AOO Pacing Mode")
AOOpage.geometry("800x400")

# Create Labels
AOOpageLabel= Label(AOOpage, text="AOO Pacing Mode", font=(None,20,'underline'))

LowRL_L = Label(AOOpage, text = "Lower Rate Limit (ppm)", font =(None,12))
UpRL_L = Label(AOOpage, text = "Upper Rate Limit (ppm)", font =(None,12))
AtrialAmp_L = Label(AOOpage, text = "Atrial Amplitude (V)", font =(None,12))
AtrialPW_L = Label(AOOpage, text = "Atrial Pulse Width (ms)", font =(None,12))

LowRL_V = Label(AOOpage, text = LowRL, font =(None,12))
UpRL_V = Label(AOOpage, text = UpRL, font =(None,12))
AtrialAmp_V = Label(AOOpage, text = AtrialAmp, font =(None,12))
AtrialPW_V = Label(AOOpage, text = AtrialPW, font =(None,12))


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
    
def changeAtrialAmp():
    try:
        AtrialAmp = float(AtrialAmp_E.get())
        AtrialAmp_V.config(text = AtrialAmp)
    except:
        AtrialAmp_V.config(text = "Invalid Value")
    
def changeAtrialPW():
    try:
        AtrialPW = float(AtrialPW_E.get())
        AtrialPW_V.config(text = AtrialPW)
    except:
        AtrialPW_V.config(text = "Invalid Value")


# Create Entries
LowRL_E = Entry(AOOpage, width=20)
LowRL_E.insert(0, "Enter New Value")

UpRL_E = Entry(AOOpage, width=20)
UpRL_E.insert(0, "Enter New Value")

AtrialAmp_E = Entry(AOOpage, width=20)
AtrialAmp_E.insert(0, "Enter New Value")

AtrialPW_E = Entry(AOOpage, width=20)
AtrialPW_E.insert(0, "Enter New Value")

# Create Buttons
LowRL_B = Button(AOOpage, text="Update", command=changeLowRL)
UpRL_B = Button(AOOpage, text="Update", command=changeUpRL)
AtrialAmp_B = Button(AOOpage, text="Update", command=changeAtrialAmp)
AtrialPW_B = Button(AOOpage, text="Update", command=changeAtrialPW)

# Organize objects
AOOpageLabel.grid(row= 1, column= 1)

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

mainloop()

