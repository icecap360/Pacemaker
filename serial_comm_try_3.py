import serial
import time
from serial.tools import list_ports
import struct
port = None
baudrate = 115200
num_bytes_sent = 27
for p in list_ports.comports():
	if 'Link' in p.__str__():
		port = p
		break
port_name = port.device
print('port selected as'+port_name)
test_code, set_code, echo_code = 10,20,30

def set_params():
	### SET_PARAMS
	with serial.Serial(port=port_name, baudrate=baudrate) as device:	
		params = [1,1,2,80,10,60,80,10,60,0,500,100,200,200,200, 1,1,1,1,1]
		#params = struct.pack("<"+"BBB"+"fBf"*2+"B"+"H"*5, *params)
		params = struct.pack("<"+"B"*10+"H"*5+"B"*5, *params)
		dat = serial.to_bytes([test_code, set_code]) + params
		bytes_written = device.write(dat)
		print("set written: ")
	for i in dat:
		print(i, end=' ')
	print()
	print('SET_PARAMS complete, written ', bytes_written, 'bytes')


def echo_params(n):
	### ECHO_PARAMS
	with serial.Serial(port=port_name, baudrate=baudrate) as device:
		params = [n]+[0 for i in range(num_bytes_sent-3)]
		params = struct.pack("<"+"B"*len(params), *params)
		dat = serial.to_bytes([test_code, echo_code]) + params
		print("echo written: ")
		for i in dat:
			print(i, end = ' ')
		print()
		bytes_written = device.write(dat)
		print('done writing ECHO_PARAMS', bytes_written)

def read_params(len_read):
	#the serial port can send anywhere from 2 to 5 bytes, it is the reponsibility of the 
	#implementers to not only read the correct number of bytes but also unpack the bytes correctly
	with serial.Serial(port=port_name, baudrate=baudrate) as device:
		bytes_read = device.read(len_read)
		#bytes_read = struct.unpack("<Bf",bytes_read)
		bytes_read=struct.unpack("<BB",bytes_read)
		data= []
		for byt in bytes_read:
			data.append(byt)
		return data

set_params()

echo_params(4)
fails=0
for i in range(0,999):
	data = read_params(2)
	if (data[0] != 4):
		fails+=1
print(fails)
###PROBLEMS

#Program gets stuck at device.read()

#Warning: Edit-time syntax highlighting disabled for performance on State SET_PARAMS. Character count 1085 exceeds 1000.
#Consider using a MATLAB Function.

#Sometimes to actually get the serial port to read the new data we must read twice, if you read just once you get the old result, 
#I tried adding some delay as well, but unfortunately that did not work 
	



