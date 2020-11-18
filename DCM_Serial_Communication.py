import serial
import time
from serial.tools import list_ports
port = None
baudrate = 115200
for p in list_ports.comports():
	if 'JLink' in p.__str__():
		port = p
		break
port_name = port.device
with serial.Serial(port=port_name, baudrate=baudrate) as device:
	dat = [1,62,1,1,1,1,1,1,1,1]
	bytes_written = device.write(dat)
	time.sleep(2)
	bytes_read = device.read(2)
	bytes_read = device.read(2) 
	#we must read twice, if you read just once you get the old result, 
	#I tried adding some delay as well, but 
	
	device.close()
print('bytes_read', bytes_read)
print(dat)
print('bytes_written', bytes_written)