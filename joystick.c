/*
    Project name : Joystick
    Modified Date: 08-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-uno-joystick
*/

#define VRX_PIN  A0 // Arduino pin connected to VRX pin
#define VRY_PIN  A1 // Arduino pin connected to VRY pin

#define LEFT_THRESHOLD  400
#define RIGHT_THRESHOLD 800
#define UP_THRESHOLD    400
#define DOWN_THRESHOLD  800

void setup() 
{
  Serial.begin(9600);
}

void loop()
 {
  // Read analog X and Y values
  int xValue = analogRead(VRX_PIN);
  int yValue = analogRead(VRY_PIN);

  // Check left/right commands
  if (xValue < LEFT_THRESHOLD)
    Serial.println("COMMAND LEFT");
  else if (xValue > RIGHT_THRESHOLD)
    Serial.println("COMMAND RIGHT");

  // Check up/down commands
  if (yValue < UP_THRESHOLD)
    Serial.println("COMMAND UP");
  else if (yValue > DOWN_THRESHOLD)
    Serial.println("COMMAND DOWN");
  
  delay(100); // Add a small delay to avoid rapid serial output
}
