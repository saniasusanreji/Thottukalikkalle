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
The project uses an ESP32-WROOM-32 microcontroller to detect human proximity with a TCRT5000 IR sensor. When a hand is detected repeatedly within a set range, the system changes the plant's "mood" displayed on a 0.96-inch OLED screen, plays corresponding audio responses from an SD card audio module, and, upon high irritation levels, activates a relay-controlled water pump for auto-defense mode.
Key functionalities:
IR Proximity Detection – Senses hand presence within 4 cm.
Mood Tracking – Count-based mood changes (happy → irritated → angry).
Audio Feedback – Plays random complaint MP3 files at higher counts.
OLED Display – Shows mood emojis in real time.
Water Pump Activation – Triggered when maximum irritation count is reached.
Timed Reset – Mood and count reset automatically after 1 minute.

Technologies/Components Used
ESP32-WROOM-32 – Main microcontroller handling all logic and control.
TCRT5000 IR Sensor – Proximity detection within ~4 cm.
0.96" OLED Display (SSD1306) – Visual mood indicators using emojis.
MicroSD Card Module + DFPlayer Mini – MP3 audio playback for plant responses.
Relay Module – Controls water pump activation.
Mini Water Pump – Auto-defense mode spray when irritation level maxes out.
Arduino IDE – Code development and flashing to ESP32.
C++ / Arduino Core – Programming language for system logic.
Languages used:C++ (Arduino) and Python
Frameworks used-Arduino IDE 
Libraries used-ESP32
pyttsx3 (Python text-to-speech)

Tools used
ESP32 microcontroller
OLED display (I2C)
IR proximity sensor
Relay module
Mini water pump (with red & black power wires)
Jumper wires
Breadboard or PCB
Power source (USB)
Arduino IDE 
Git & GitHub 
VS Code 

List specifications
1. ESP32-WROOM-32
Microcontroller: Tensilica Xtensa LX6 dual-core (up to 240 MHz)
Flash Memory: 4 MB
SRAM: 520 KB
Wi-Fi: 802.11 b/g/n
Bluetooth: v4.2 BR/EDR and BLE
GPIO Pins: 34 (ADC, DAC, PWM capable)
Operating Voltage: 3.0 V–3.6 V
USB Interface: Micro USB for programming and power
Power Consumption: ~160 mA active
2. TCRT5000 IR Sensor Module
Detection Range: 2 mm – 15 mm (adjustable)
Operating Voltage: 3.3 V–5 V
Output Type: Digital & Analog
Wavelength: 950 nm IR LED
Response Time: < 1 ms
Applications: Proximity, line tracking, object detection
3. TTP223 Capacitive Touch Sensor
Operating Voltage: 2.0 V–5.5 V
Output: Digital high (touch detected), low (no touch)
Sensitivity: Adjustable via external capacitor
Response Time: ~60 ms
Touch Surface: PCB pad
4. OLED Display (SSD1306)
Resolution: 128×64 pixels
Display Type: Monochrome OLED
Interface: I²C (SDA, SCL)
Operating Voltage: 3.3 V–5 V
Power Consumption: < 20 mA (typical)
Viewing Angle: >160°
5. Relay Module (Single Channel)
Trigger Voltage: 3.3 V (compatible with ESP32)
Load Voltage: AC 250 V / DC 30 V max
Load Current: Up to 10 A
Isolation: Optocoupler for MCU protection
Indicator LED: Shows relay status
6. DFPlayer Mini MP3 Module
Supported Formats: MP3, WAV
Storage: MicroSD card (up to 32 GB)
Operating Voltage: 3.2 V–5 V
Audio Output: DAC, Speaker (8Ω 3W)
Control Method: Serial UART
7. Mini Water Pump
Operating Voltage: DC 3–6 V
Flow Rate: 80–120 L/h
Current: 130–220 mA
Lift Height: Up to 1.1 m
Pump Type: Submersible
8. Li-ion Battery
Type: 18650 Rechargeable Cell
Nominal Voltage: 3.7 V
Capacity: 2000–3000 mAh
Protection Circuit: Recommended for overcharge/discharge protection
9. Tools
Arduino IDE – Code development and uploading
Git & GitHub – Version control and collaboration
Serial Monitor – Debugging output
MicroSD Formatter – Preparing audio storage
VS Code (optional) – Advanced editing and Git integration
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
The project is implemented by integrating hardware components (ESP32 microcontroller, IR sensor, relay module, OLED display, and audio module) with Arduino IDE programming to create an interactive system.
Sensing – The IR sensor detects the proximity of a hand within a set range (e.g., 4 cm).
Logic Processing – The ESP32 receives this sensor input, processes it, and keeps a count of detections. Based on the count, it changes the system’s “mood,” triggers sound files, and controls other actions.
Display Feedback – The OLED display visually shows mood changes using emojis or text, giving real-time feedback to the user.
Audio Feedback – The DFPlayer Mini or MP3 module plays different pre-recorded audio files depending on the detection count.
Action Trigger – At a high count threshold, the relay module is activated to run the water pump, adding a playful “defense” mechanism to the system.
Reset Mechanism – After a set time (e.g., 1 minute), the mood and detection count automatically reset to the default state.
This combination of sensor detection, programmed logic, and interactive feedback makes the system responsive, entertaining, and easy to understand.

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





 
