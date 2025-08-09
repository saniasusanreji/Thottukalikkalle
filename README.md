# Enne tottu kalikalle akalli tikalli sushichooo
Team Name: Zenflow

Team Members:
member1- sania susan regi,
member2-aiswarya mariya rose

Project Description
 enne tottu kaikalle akalli tikali sushichoo is a trash talking plant which 
The Problem (that doesn't exist)
 Plants can’t express their mood or complain when humans annoy them
The Solution (that nobody asked for)
 Give the plant a mood system with voice complaints so it can shout in Malayalam (or any language) when it’s touched too much or ignored for too long.

Technical Details 
Microcontroller: ESP32 (handles sensors, Wi-Fi, and communication)
Sensors: IR proximity sensor  (detects interaction)
Display: OLED screen (shows mood and emoji)
Audio Output: Laptop uses Python pyttsx3 to convert received text to speech
Control Logic: C++ code on ESP32 sends mood updates or gossip messages to MQTT broker
Defense: Relay + water pump triggers when plant is annoyed

Technologies/Components Used
Microcontroller: ESP32 (handles sensors, Wi-Fi, and communication)
Sensors: IR proximity sensor  (detects interaction)
Display: OLED screen (shows mood and emoji)
Audio Output: Laptop uses Python pyttsx3 to convert received text to speech
Control Logic: C++ code on ESP32 sends mood updates or gossip messages to MQTT broker
Defense: Relay + water pump triggers when plant is annoyed


For Software:
Languages used:C++ (Arduino) and Python
Frameworks used-Arduino IDE 
Libraries used-ESP32
pyttsx3 (Python text-to-speech)

Tools used
For Hardware:
main components
 ESP32 microcontroller
OLED display (I2C)
 IR proximity sensor
Relay module
Mini water pump (with red & black power wires)
Jumper wires
Breadboard or PCB
Power source (USB or external

List specifications
 
ESP32	240 MHz dual-core, 520 KB SRAM, built-in Wi-Fi
Python Version	3.8+ 
Text-to-Speech	pyttsx3 library (offline)
Power Supply	USB 5V for ESP32
Response Time	< 1 sec for short text

List tools required

Arduino IDE (to upload ESP32 code)
Python Installed (on laptop — python.org)
VS Code (for writing and running Python scripts)
USB Cable (to connect ESP32 to laptop)

Basic Libraries:
For Arduino: Adafruit_MPR121.h  
Wire.h
Adafruit_Sensor.h Adafruit_GFX.h
Adafruit_SSD1306.h
ArduinoSound.hESP32Servo.h
ArduinoSound.h
ESP32-audioI2S
ESP32Servo.h
RelayModule.h
For Python: pyttsx3 (install with pip install pyttsx3)


Implementation
For Software:
ESP32: Arduino IDE → install ESP32 board + WiFi, PubSubClient, OLED libraries → upload code for sensors, OLED, MQTT, pump.
Laptop: Install Python → pip install paho-mqtt pyttsx3 → run gossip script.
MQTT: Use same broker & topic for ESP32 and laptop.
Installation
 Arduino IDE: Add ESP32 board URL → install required libraries.
Python: Install from python.org → in terminal run pip install paho-mqtt pyttsx3.
MQTT Broker: Use free broker like test.mosquitto.org or install Mosquitto loc
Run
 ESP32: Upload Arduino gossip code via Arduino IDE.
Laptop: Open terminal → run python gossip.py.
Both must be connected to the same Wi-Fi and MQTT broker.
Project Documentation
For Software:

Screenshots (Add at least 3)

![1](https://github.com/user-attachments/assets/cde9d301-9164-4ca3-9e18-06652a1196c4)

![Workflow](Add your workflow/architecture diagram here) Add caption explaining your workflow

For Hardware:

![circuit](https://github.com/user-attachments/assets/c3be8741-9bee-4d1e-ae3f-86d952163312)


Build Photos
![1](https://github.com/user-attachments/assets/05f61f18-3576-4f34-81d5-f3c07a7ecd6d)


![1](https://github.com/user-attachments/assets/45fb2945-5b83-4491-8998-6e42584460c3)

![circuit](https://github.com/user-attachments/assets/83f2a13e-b506-48bc-b482-94d82b43ae39)


Project Demo
Video


https://github.com/user-attachments/assets/42e0e45d-d75e-4293-a22a-5d03dc31e5f9





 
