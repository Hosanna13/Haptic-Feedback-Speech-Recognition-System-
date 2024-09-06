// Define the pins
const int sensorPin = 52; // Sensor is connected to digital pin 0
const int motorPin = 13; // Motor is connected to digital pin 


void setup() {
  // Initialize the sensor pin as input
  pinMode(sensorPin, INPUT);

  // Initialize the motor pin as output
  pinMode(motorPin, OUTPUT);

  // Start serial communication
  Serial.begin(115200);

   digitalWrite(motorPin, 0);
}

void loop() {
  // Read the value of the sensor pin
  int sensorValue = digitalRead(sensorPin);
  // Print Sesnor Valule 
  Serial.println(sensorValue); 
  //delay(1000);

  // If SENSOR hears loud sound, vibrate motor
  if ( sensorValue == HIGH) {
    digitalWrite(motorPin, 1); // Turn on the motor
    //Serial.println("Sound detected"); // Print "Sound detected"
  }
  
  else if (sensorValue == LOW){
   // Serial.println("No Sound");
    digitalWrite(motorPin, 0);
  }
}
