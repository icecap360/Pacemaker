import serial
import time
from serial.tools import list_ports
import itertools
port = None
baudrate = 115200
for p in list_ports.comports():
	if 'JLink' in p.__str__():
		port = p
		break
port_name = port.device
with serial.Serial(port=port_name, baudrate=baudrate) as device:
	test_code = [10]
	#params_uint8 = [1,2,3,4,5,6,7,8,9,10]
	#params_uint16 = list(itertools.chain(*[[9,8],[7,6],[5,4],[3,2]]))
	#dat = test_code+params_uint8+params_uint16
	dat = test_code+[i for i in range(18)]
	dat = serial.to_bytes(dat)
	bytes_written = device.write(dat)
	device.write(serial.to_bytes([55]))
print('Data to write')
for d in dat:
	print(d, end=' ')
print()
print('According to the simulink parameters you set, we wrote', bytes_written,'bytes')

"""
with serial.Serial(port=port_name, baudrate=baudrate) as device:
	bytes_read = device.read(2)
	#bytes_read2 = device.read(bytes_written) 
	#we must read twice, if you read just once you get the old result, 
	#I tried adding some delay as well, but 
print('These are the bytes we read (the test_code is not read)')
for b in bytes_read:
	print(b, end=' ')
"""