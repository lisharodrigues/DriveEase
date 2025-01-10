# DriveEase: Intelligent Car Control System

DriveEase is an intelligent car control system designed to monitor and control essential car functions through sensors and user inputs. It integrates ultrasonic sensors for distance measurement, buttons for controlling lights, air conditioning, and windows, and LED indicators to represent the status of the car's components. The system is designed to improve user experience and safety while also providing data for analysis.

## Features

- **Ultrasonic Sensor Integration:** Measures the distance between the car and objects ahead.
- **Control of Lights, AC, and Windows:** Toggle lights, air conditioning, and windows using buttons.
- **LED Indicators:** Display the status of the car's components (Lights, AC, Windows).
- **Real-Time Distance Measurement:** Display and log the distance between the car and obstacles in real time.
  
## Hardware Requirements

- **Arduino Board (e.g., Arduino Uno)**
- **Ultrasonic Sensor (HC-SR04)**
- **LEDs (for controlling lights, AC, windows)**
- **Push Buttons (for controlling lights, AC, windows)**
- **Resistors (10k ohm for buttons and LEDs)**
- **Jumper Wires**

## Software Requirements

- **Arduino IDE** (for uploading the code to the Arduino)
- **MATLAB** (for any additional data analysis and simulation, optional)
- **Git** (for version control)

## Installation

### 1. Clone the repository
First, clone the repository to your local machine:
git clone https://github.com/yourusername/DriveEase.git

## 2. Connect the hardware
- Connect the **ultrasonic sensor** to the Arduino.
- Connect the **push buttons** to control the car's lights, AC, and windows.
- Connect the **LEDs** to indicate the status of the car's components.

## 3. Upload the Code
1. Open the **Arduino IDE**, go to **File > Open**, and select the `DriveEase.ino` file from the project folder.
2. Select the appropriate **Arduino board** and **port** from the **Tools** menu.
3. Upload the code to the **Arduino**.

## 4. Open Serial Monitor
After uploading the code, open the **Serial Monitor** in the Arduino IDE to view the distance readings from the ultrasonic sensor.

## Usage
Once the system is powered on, you can use the following features:

### Buttons:
- **Light Button (Button 1):** Turn the car’s lights on or off.
- **AC Button (Button 2):** Turn the car’s air conditioning on or off.
- **Window Button (Button 3):** Control the windows (open or close).

### LED Indicators:
- **LED Light:** Indicates whether the lights are on or off.
- **LED AC:** Indicates whether the air conditioning is on or off.
- **LED Window:** Indicates whether the windows are open or closed.

### Ultrasonic Sensor:
- Displays the real-time distance of the object ahead in the **Serial Monitor**.

### Example Usage:
- Press the **light button** to toggle the car's lights.
- Press the **AC button** to toggle the air conditioning.
- Press the **window button** to toggle the windows.

The **LED indicators** will turn on or off depending on the status of the corresponding car component (lights, AC, windows).

## Code Explanation
- **TRIG_PIN & ECHO_PIN:** Used to interface with the ultrasonic sensor for distance measurement.
- **BUTTON_LIGHT, BUTTON_AC, BUTTON_WINDOW:** Define the pins connected to the buttons for controlling lights, AC, and windows.
- **LED_LIGHT, LED_AC, LED_WINDOW:** Define the pins connected to the LEDs that indicate the status of the car components.
- **setup():** Initializes the pins and sets up the serial communication.
- **loop():** Continuously checks the button states and updates the LEDs. It also measures the distance using the ultrasonic sensor and logs it to the serial monitor.

## Contributions
Feel free to contribute to the project! If you want to add features, fix bugs, or suggest improvements, open an issue or submit a pull request.
