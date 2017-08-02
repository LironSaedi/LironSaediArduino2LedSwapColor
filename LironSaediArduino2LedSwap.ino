int ledRed = 3;
int ledGreen = 6;
int fadeSpeed = 1;
int brightness =  0;
int button= 11;                         
void setup() 
{
 pinMode(ledRed,OUTPUT);
 pinMode(ledGreen,OUTPUT);
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
  //constantly add fadeSpeed to brightness
  //if you reach 255 or 0, make fadeSpeed the negative version of itself

}
