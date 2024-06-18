# ESP8266 3-Color LED Module Project

#### Project Overview
The ESP8266 3-Color LED Module project showcases how to control a tri-color LED (red, green, and blue) using an ESP8266 microcontroller. This project teaches basic GPIO pin manipulation and how to mix different colors by controlling each LED independently.

#### Components Needed
- **ESP8266 Microcontroller**
- **3-Color LED Module (Red, Green, Blue)**
- **Jumper Wires**
- **Breadboard (optional)**

#### Block Diagram
*Insert block diagram here*

#### Circuit Setup
1. **Connecting the 3-Color LED to ESP8266:**
   - **Red LED Anode (redPin):** Connect to GPIO pin D5 on the ESP8266.
   - **Green LED Anode (greenPin):** Connect to GPIO pin D6 on the ESP8266.
   - **Blue LED Anode (bluePin):** Connect to GPIO pin D7 on the ESP8266.
   - **Common Cathode:** Connect to GND.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE with ESP8266 board support installed.
   - Create a new sketch and paste the provided Arduino code.
   - Connect the ESP8266 to your computer, select the appropriate board and port from the Tools menu.
   - Upload the code to the ESP8266.

2. **Testing:**
   - After uploading the code, the LED will cycle through red, green, and blue colors, with each color displayed for 1 second.
   - After showing all three colors, the LEDs will turn off for 1 second before repeating the cycle.

#### Applications
- **Status Indicators:** Use LEDs as visual indicators for various states in projects.
- **Lighting Effects:** Create decorative lighting effects by mixing different colors.
- **Learning Platform:** Experiment with basic GPIO control and color mixing on the ESP8266.

#### Notes
- **GPIO Control:** The project uses `digitalWrite` to control the state of the GPIO pins connected to the LEDs.
- **Delays:** Delays create the color-changing effect. Adjust the delay times to change the speed of transitions.
- **Color Mixing:** By modifying the `setColor` function, you can create various color combinations.

---

#### Useful Links
🌐 [ProjectsLearner](https://projectslearner.com/learn/esp8266-3-color-led-module)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner