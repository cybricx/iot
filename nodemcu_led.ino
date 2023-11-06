const int led = D1; 
void setup() {
  pinMode(led, OUTPUT)
}

void loop() {
 digitalWrite(led, HIGH); 
 delay(500); 
 digitalWrite(led, HIGH); 
 delay(500); 
}

// Connection: 
// Led  cathode to right side port on breadbord beside nodemcu 
// resistor on cathode side vertical, with one pin going to other poriton 
// jumper wire from below port of  resistor and led cathode to D1 port of nodemcu 
// jumper wire from anode of resistor to GND port of nodemcu 