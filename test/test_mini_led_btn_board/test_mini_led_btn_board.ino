/******************************************************************
 * Sketch to test the Mini Led Btn v1 board
 * Can be used with any Arduino board
 *
 * Connections (Arduino --> Board):
 * D13  --> OUT
 * D2   --> IN
 * 5V/3.3V --> VCC
 * GND  --> GND
 ******************************************************************/

const int ledPin = 13;       // The LED is connected to digital pin 13
const int buttonPin = 2;     // The button is connected to digital pin 2

int buttonState = 0;         

void setup() {
  // Configure the LED pin as an output
  pinMode(ledPin, OUTPUT);   
  
  // Configure the button pin as an input
  // External pull-down resistor is used, so we do NOT use INPUT_PULLUP
  pinMode(buttonPin, INPUT); 
}

void loop() {
  // Read the current state of the button (HIGH if pressed, LOW if not)
  buttonState = digitalRead(buttonPin);

  // If the button is pressed
  if (buttonState == HIGH) { 
    // Turn the LED on
    digitalWrite(ledPin, HIGH);  
  } else {                    
    // Otherwise, turn the LED off
    digitalWrite(ledPin, LOW);   
  }

  // Small delay to reduce button bouncing effects
  // This acts as a simple software debounce
  delay(50); 
}