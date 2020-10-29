#AOO Pacing
from tkinter import *

# Variables needed
#LowRL
#UpRL
#AtrialAmp
#AtrialPulseWidth

# Button Functions
def changeLowRL():
    if (1==1): #LowRL_E.get() ...):
        print("PASS")
        #change value in database
        return
    else:
        print("Enter valid number")
        return

def changeUpRL():
    if (1==1): #LowRL_E.get() ...):
        print("PASS")
        #change value in database
        return
    else:
        print("Enter valid number")
        return
    
def changeAtrialAmp():
    if (1==1): #LowRL_E.get() ...):
        print("PASS")
        #change value in database
        return
    else:
        print("Enter valid number")
        return
    
def changeAtrialPW():
    if (1==1): #LowRL_E.get() ...):
        print("PASS")
        #change value in database
        return
    else:
        print("Enter valid number")
        return

# Create AOO Page
AOOpage = Tk()
AOOpage.title("AOO Pacing Mode")
AOOpage.geometry("500x500")

# Create Labels
AOOpageLabel= Label(AOOpage, text="AOO Pacing Mode", font=(None,20,'underline'))

LowRL_L = Label(AOOpage, text = "Lower Rate Limit", font =(None,12))
UpRL_L = Label(AOOpage, text = "Upper Rate Limit", font =(None,12))
AtrialAmp_L = Label(AOOpage, text = "Atrial Amplitude", font =(None,12))
AtrialPW_L = Label(AOOpage, text = "Atrial Pulse Width", font =(None,12))

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
UpRL_B = Button(AOOpage, text="Update", command=changeLowRL)
AtrialAmp_B = Button(AOOpage, text="Update", command=changeLowRL)
AtrialPW_B = Button(AOOpage, text="Update", command=changeLowRL)

# Organize objects
AOOpageLabel.grid(row= 1, column= 1)

LowRL_L.grid(row= 2, column= 0)
LowRL_E.grid(row= 2, column= 1)
LowRL_B.grid(row= 2, column= 2)

UpRL_L.grid(row= 3, column= 0)
UpRL_E.grid(row= 3, column= 1)
UpRL_B.grid(row= 3, column= 2)

AtrialAmp_L.grid(row= 4, column= 0)
AtrialAmp_E.grid(row= 4, column= 1)
AtrialAmp_B.grid(row= 4, column= 2)

AtrialPW_L.grid(row= 5, column= 0)
AtrialPW_E.grid(row= 5, column= 1)
AtrialPW_B.grid(row= 5, column= 2)

mainloop()

