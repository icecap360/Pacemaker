# Pacemaker 
A cardiac pacemaker is a real-time device used to monitor and stimulate the heart muscles of a patient.  For this project our teams of four designed and implemented embedded pacemaker software, driver software and a user interface. The pacemaker contains 8 available modes, 15 programmable parameters, and a 27 byte serial packet protocol to change pacemaker operation during live execution. 


![](GIFs/Blinking_Board.gif)


The pacemaker development station consisted of the FRDM-K64 microcontroller and the HeartView testsuite. The HeartView testsuite was the software to used to the visualize electrical stimulus's of the microcontroller, and send mimicked heart signals of the pateint.


![](GIFs/DOO.gif)

### Technologies used

* Simulink to develop the embbeded pacemaker software. Specifically simulink stateflows, the FRDM-K64 toolbox, subsystems, submodels and datstores. 
* Python for the user interface
* FRDM-K64 microcontroller
* HeartView testing suite
* 

### Rate Adaptivity

Similar to a real heart, physical motion can be detected by the accelerometer and the heart rate is increased appropiately. 

![](GIFs/Rate_Adaptivity.gif)

### Serial Communication
Serial Communication allows for the dynamic changing of pacemaker modes and programmable parameters. A UART 27 byte packet protocol was used to communicate between the UI and microcontroller. 

![](https://j.gifs.com/zvL2K7.gif)


### Response to Natural Heart Signals

We have implemented modes that can respond to natural heart paces from the patient. 
![](https://j.gifs.com/r8zQZw.gif)

### User Interface
The user interface contains multiple screens, login capability, and other features.
![](https://j.gifs.com/5QOq8Z.gif)
