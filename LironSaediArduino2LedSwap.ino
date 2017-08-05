int ledRed = 3;
int ledGreen = 6;
int fadeSpeed = 3;
int brightness =  0;
int button = 12;
bool pressed =false;
bool previousButtonState;
void setup()
{
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(button, INPUT_PULLUP);
//  digitalWrite(ledGreen, HIGH);
previousButtonState = false;
}

void loop()
{

  analogWrite(ledRed, brightness);
  brightness += fadeSpeed;
  delay(10);
  if (brightness >= 255 ||  brightness <= 0  )
  {
    fadeSpeed = -fadeSpeed;
  }
  if (digitalRead(button) == LOW && previousButtonState == true)
  {
   pressed = !pressed;
  }

  if (pressed == true)
  {
    analogWrite(ledGreen, brightness);
  }

  previousButtonState = digitalRead(button);

}
