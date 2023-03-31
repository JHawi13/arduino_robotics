int num7=7;
int array=[4,5,7];
std::cout<<"yeah";
void setup() {
  // put your setup code here, to ru once:
  // set your GPIO(PINS)
 Serial.begin(115200); //used to set thee speed of communication of the controller(circuit board) in bits.
 PinMode(3,OUTPUT); //used to set a pin as either input or output . The first parameter is the pin number and the second is the pin type as either input or output
 bool on=HIGH;
 bool off=LOW;
}
#define  led_pin 3 //first comes the name to be assigned to the pin and second comes the number of the pin to be assigned
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led_pin,on);
  delay(2000); //used to delay for a certain period which means the output of the previous code will remain a constant the parameter value is in milliseconds
  digitalWrite(led_pin,off);
  delay(2000);
}
