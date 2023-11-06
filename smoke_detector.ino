#define MQ2pin 0
#define Threshold 80
int buzzer = 7;

float sensorValue;  //variable to store sensor value

void setup() {
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600); // sets the serial port to 9600
  Serial.println("MQ2 warming up!");
  delay(20000); // allow the MQ2 to warm up
}

void loop() {
  sensorValue = analogRead(MQ2pin); // read analog input pin 0
 
  Serial.print(sensorValue);

  if(sensorValue > Threshold)
  {
    digitalWrite(buzzer, HIGH);
  }
 
  Serial.println("");
  delay(2000); // wait 2s for next reading
}

// Connection: 
// Analog Smoke -> A0 
// GND TO GND (beside the Analog pins)
// VCC to 3V
// Connect Supply wire (positive) of the buzzer to the Digital Pin of the Arduino. (7)
// Connect Ground wire (negative) of the buzzer to Ground Pin on the Arduino, through a 100-ohm resistor.
