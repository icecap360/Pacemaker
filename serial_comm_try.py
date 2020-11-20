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
	test_code = [10]
	params = [1,2,3,4,5,6,7,8,9,10]
	dat = test_code+params
	dat = serial.to_bytes(dat)
	bytes_written = device.write(dat)

with serial.Serial(port=port_name, baudrate=baudrate) as device:
	bytes_read = device.read(len(params))
	#bytes_read2 = device.read(bytes_written) 
	#we must read twice, if you read just once you get the old result, 
	#I tried adding some delay as well, but 
	
print('Data to write')
for d in dat:
	print(d, end=' ')
print()
print('According to the simulink' 
	' parameters you set, we wrote', bytes_written,'bytes')
print('These are the bytes we read')
for b in bytes_read:
	print(b, end=' ')
