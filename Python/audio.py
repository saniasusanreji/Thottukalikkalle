import serial
import time
import random
import pygame

# Set correct COM port from Arduino IDE
ser = serial.Serial('COM5', 9600, timeout=1)
time.sleep(2)  # Allow time for serial to connect

# Initialize pygame mixer
pygame.mixer.init()

# Irritated mood audios
irritated_audios = [
    "irritated.mp3",
    "irritated1.mp3",
    "irritated2.mp3",
    "irritated3.mp3"
]

print("Listening for mood triggers from ESP32...")

while True:
    if ser.in_waiting > 0:
        try:
            line = ser.readline().decode('utf-8', errors='ignore').strip()
            print(f"Received: {line}")
            if line == "play":
                audio = random.choice(irritated_audios)
                print(f"Playing: {audio}")
                pygame.mixer.music.load(audio)
                pygame.mixer.music.play()
            elif line == "ninn":
                print("Playing: ninn.mp3")
                pygame.mixer.music.load("ninn.mp3")
                pygame.mixer.music.play()
        except Exception as e:
            print("Error:", e)
