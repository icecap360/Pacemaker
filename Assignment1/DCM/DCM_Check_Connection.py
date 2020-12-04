from tkinter import *
from tkinter import messagebox
import serial
import time
from serial.tools import list_ports

def checkConnection():
        port=None
        for p in list_ports.comports():
            if 'Link' in p.__str__():
                port = p
                break

        if (port == None):
            messagebox.showerror("Error","Connection to Pacemaker Lost")
            return "Unconnected"
        else:
            return "Connected"