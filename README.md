# Hardware-Hackathon-EA2

Explanation of our project from hardware hackathon.

For the 2026 hardware Hackathon, my partner and I were tasked to build a device that fit the theme 'Seamless Living'. My partner and I came up with a idea of a device that check if a person leave a stove on, if so they will be alerted. Ideally we thought of two phases we could to build the device. First phase was to create the device that check if a stove is unsupervised and on. The second phase was to build another device that a person will carry thatll recieve signal from the first device that will notify them a stove was left on. 

My role in this project was to design the first device and configure the Zynq Blackboard FPGA to determine which hardware components were needed and which communication protocols should be used to interface with the ESP32 microcontroller and the two sensors (design_1_wrapper.xsa file). I also had to solder pins on the sensors and determine what component we needed to build this project. 

Overall, my partner and I werent able to finish our project in time due to mismatch on communication protocol and bugging errors recieve from the ARM side of the Zynq blackboard. If I could redo this project again, I would  read the reference manual of each hardware component ahead of time and obtain a microcontroller earlier on. I needed two microcontroller that has ESP32 wireless communication to build the two device but only one was left to obtain, so we had use a blackboard as one of our microcontroller but we faced a lot of issue with it. 
