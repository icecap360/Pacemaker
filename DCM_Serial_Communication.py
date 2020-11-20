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
print('here')

with serial.Serial(port=port_name, baudrate=baudrate) as device:
	
	### SET_PARAMS
	dat = [10,20,1,1,1, 0,60, 0,60, 25,25,25, 0,33, 25,25,25,0,33, 25, 0,33]
	dat = serial.to_bytes(dat)
	bytes_written = device.write(dat)
	print('done writing SET_PARAMS, written a total number of ', bytes_written, 'bytes')
	
	### ECHO_PARAMS
	dat = [10,30,1,1,1, 0,60, 0,60, 25,25,25, 0,33, 25,25,25,0,33, 25, 0,33]
	dat = serial.to_bytes(dat)
	bytes_written = device.write(dat)
	print('done writing ECHO_PARAMS')
	bytes_read = device.read(20)
	serial.send_break(0.25)

	print('bytes_read')
	for byt in bytes_read:
		print(byt)

	###PROBLEMS

	#Program gets stuck at device.read()

	#Warning: Edit-time syntax highlighting disabled for performance on State SET_PARAMS. Character count 1085 exceeds 1000.
	#Consider using a MATLAB Function.

	#Sometimes to actually get the serial port to read the new data we must read twice, if you read just once you get the old result, 
	#I tried adding some delay as well, but unfortunately that did not work 
	
	device.close()
print('bytes_written', bytes_written)
