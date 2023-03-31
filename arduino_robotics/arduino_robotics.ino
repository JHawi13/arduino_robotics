//name variables refer to the names of the ports on the driver
// motor a
int ena = 13;
int in1 = 12;
int in2 = 14;
//motor b
int enb = 25;
int in3 = 27;
int in4 = 26;
void setup() {
  // put your setup code here, to ru once:
  // set your GPIO(PINS)
 Serial.begin(115200); //used to set thee speed of communication of the controller(circuit board) in bits.
 PinMode(ena,OUTPUT);
 PinMode(enb,OUTPUT);
 PinMode(in1,OUTPUT);
 PinMode(in2,OUTPUT);
 PinMode(in3,OUTPUT);
 PinMode(in4,OUTPUT);

 ledcAttachPin(ena,0);
 ledcAttachPin(enb,0);
 ledcSetup(0,1000,8);
} 
void forward(int a){
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalwrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena,a);
analogWrite(enb,a);
};
void reverse(int a){
digitalWrite(in1,LOW);
digitalWrite(in2,HIGH);
digitalwrite(in3,LOW);
digitalWrite(in4,HIGH);
analogWrite(ena,a);
analogWrite(enb,a);
};
void left(int a){
digitalWrite(in1,HIGH);
digitalWrite(in2,LOW);
digitalwrite(in3,HIGH);
digitalWrite(in4,LOW);
analogWrite(ena,a);
analogWrite(enb,a);
};

void loop() {
 forward(250); 
 delay(5000);
 reverse(250);
 delay(5000); 
}