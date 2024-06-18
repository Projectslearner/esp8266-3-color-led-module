/*
    Project name : ESP8266 3-color LED module
    Modified Date: 18-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-3-color-led-module
*/

const int redPin = D5;    // GPIO pin connected to the red LED anode
const int greenPin = D6;  // GPIO pin connected to the green LED anode
const int bluePin = D7;   // GPIO pin connected to the blue LED anode

void setup() {
  pinMode(redPin, OUTPUT);    // Set red LED pin as OUTPUT
  pinMode(greenPin, OUTPUT);  // Set green LED pin as OUTPUT
  pinMode(bluePin, OUTPUT);   // Set blue LED pin as OUTPUT
}

void loop() {
  // Turn on red LED, turn off green and blue LEDs
  setColor(true, false, false);
  delay(1000); // Wait for 1 second

  // Turn on green LED, turn off red and blue LEDs
  setColor(false, true, false);
  delay(1000); // Wait for 1 second

  // Turn on blue LED, turn off red and green LEDs
  setColor(false, false, true);
  delay(1000); // Wait for 1 second

  // Turn off all LEDs
  setColor(false, false, false);
  delay(1000); // Wait for 1 second
}

void setColor(bool red, bool green, bool blue) {
  digitalWrite(redPin, red ? HIGH : LOW);
  digitalWrite(greenPin, green ? HIGH : LOW);
  digitalWrite(bluePin, blue ? HIGH : LOW);
}
