Motion Detection Alarm —
Embedded Systems Task
1
Mini project for Maincrafts Technology's
Embedded Systems & IoT Device Design task.
Overview
An embedded system built around an Arduino
Uno that uses a PIR motion sensor to detect
movement and trigger an LED + buzzer alarm.
Simulated on 
Wokwi.
What is an Embedded System?
A dedicated combination of hardware and
software built to perform one specific function
reliably (unlike a general-purpose computer).
Used in smart homes, automotive ECUs,
healthcare devices, and industrial automation.
Components
Component
Role
Arduino Uno
PIR Motion
Sensor
Microcontroller — reads
sensor, controls outputs
Detects movement, outputs
HIGH when triggered
LED
Buzzer
Visual alarm indicator
Audible alarm
Circuit Connections
PIR OUT 
→
 Pin 2
LED (+) 
→
 Pin 13 (via 220Ω resistor)
Buzzer (+) 
→
 Pin 8
PIR & LED/Buzzer GND 
→
 Arduino GND
Working Principle
The PIR sensor continuously monitors infrared
changes in its field of view. When motion is
detected, its output pin goes HIGH. The
Arduino reads this signal and switches on the
LED and buzzer together, logging the event
over Serial. When no motion is present, both
outputs stay off.
Code
See 
code.ino 
.
Real-World Applications
Home/office intrusion alarms
Industrial restricted-zone safety (parallels
PLC input-process-output logic)
Motion-based automatic lighting
Energy-saving occupancy detection
Tools Used
Arduino IDE / Wokwi Simulator
Language: C++ (Arduino)
Author
Aditya Chaudhary — Diploma in Electrical
Engineering, Government Polytechnic
Moradabad
