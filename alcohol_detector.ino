
      int ALCOHOL_sensor = 3;// MQ-6 SENSOR  
      int ALCOHOL_detected;
      int buzzer = 7;  
      void setup()  
       { 
         pinMode(buzzer, OUTPUT);
         Serial.begin(9600);  
         pinMode(ALCOHOL_sensor, INPUT);  
       }  
       void loop()  
       {  
         ALCOHOL_detected = digitalRead(ALCOHOL_sensor);  
          Serial.println(ALCOHOL_detected);  
         if (ALCOHOL_detected == 1)  
         {  
           Serial.println("ALCOHOL detected..."); 
           digitalWrite(buzzer, HIGH); 
         }  
         else  
         {  
           Serial.println("No ALCOHOL detected ");  
         }  
       } 

// Connection: 
// VCC - 5V 
// GND - GND (beside analog)
// Digital pin -> 3
