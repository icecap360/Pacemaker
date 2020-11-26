import serial
import time
from serial.tools import list_ports
import struct
port = None
baudrate = 115200
for p in list_ports.comports():
	if 'JLink' in p.__str__():
		port = p
		break
port_name = port.device
print('here')
test_code, set_code, echo_code = 10,20,30

def echo_params():
	### ECHO_PARAMS
	with serial.Serial(port=port_name, baudrate=baudrate) as device:
		params = [1,0,0,3.5,10,4.0,3.5,10,4.0,0,500,50,200,200,200]
		params = struct.pack("<"+"BBB"+"fBf"*2+"B"+"H"*5, *params)
		dat = serial.to_bytes([test_code, echo_code]) + params
		bytes_written = device.write(dat)
		print('done writing ECHO_PARAMS')

def set_params():
	### SET_PARAMS
	with serial.Serial(port=port_name, baudrate=baudrate) as device:	
		params = [1,0,0,80,10,80,80,10,80,0,500,50,200,200,200]
		#params = struct.pack("<"+"BBB"+"fBf"*2+"B"+"H"*5, *params)
		params = struct.pack("<"+"B"*10+"H"*5, *params)
		dat = serial.to_bytes([test_code, set_code]) + params
		bytes_written = device.write(dat)
		print('SET_PARAMS complete, written ', bytes_written, 'bytes')
	for i in dat:
		print(i, end=' ')
def read_params(n):
	with serial.Serial(port=port_name, baudrate=baudrate) as device:
		print('beginning read')
		bytes_read = device.read(n)
		print('bytes_read')
		for byt in bytes_read:
			print(byt)

set_params()
#echo_params()
#read_params(1)

###PROBLEMS

#Program gets stuck at device.read()

#Warning: Edit-time syntax highlighting disabled for performance on State SET_PARAMS. Character count 1085 exceeds 1000.
#Consider using a MATLAB Function.

#Sometimes to actually get the serial port to read the new data we must read twice, if you read just once you get the old result, 
#I tried adding some delay as well, but unfortunately that did not work 
	



