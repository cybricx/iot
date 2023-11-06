#include <DHT.h>

#define DHTPIN 2     // Digital pin connected to the DHT sensor (DHT11 or DHT22)
#define DHTTYPE DHT11   // Replace DHT11 with DHT22 if you are using the DHT22 module

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600); // Initialize serial communication for debugging (optional)
  dht.begin();
}

void loop() {
  delay(2000); // Wait for 2 seconds between readings
  
  float temperature = dht.readTemperature(); // Read the temperature in Celsius
  float humidity = dht.readHumidity(); // Read the humidity in percentage
  
  // Display the temperature and humidity on the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.print(" °C, Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
}

// Connection 
// For DHT11 module:

// Connect the module’s VCC (Voltage) pin to the 5V pin on the Arduino.
// Connect the module’s GND (Ground) pin to the GND pin on the Arduino.
// Connect the module’s OUT (Output) pin to a digital pin on the Arduino (e.g., D2).

// For DHT22 module:

// Connect the module’s VCC (Voltage) pin to the 5V pin on the Arduino.
// Connect the module’s GND (Ground) pin to the GND pin on the Arduino.
// Connect the module’s OUT (Output) pin to a digital pin on the Arduino (e.g., D2).
// Place a 10k ohm resistor between the VCC pin on the module and the OUT pin on the module.

