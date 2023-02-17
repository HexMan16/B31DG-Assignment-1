// B31DG Assignment 1
// GEORGE PAUL

// define delays

#define a 1100
#define b 100
#define d 6000
#define reg 50

// button and LED i/o constants 

const int buttonPin1 = 2; 
const int buttonPin2 = 4;
const int ledPin1_SigA = 13;   
const int ledPin2_SigB = 12;

// variables will change:
int c = 10;
int buttonState1 = 0;  // variable for reading the pushbutton status
int buttonState2 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin1_SigA, OUTPUT);
  pinMode(ledPin2_SigB, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

// switch 1 low - enable sig a and b
  
  if (buttonState2 == HIGH){
    c = c-3;
    SigAB();
   }
  
  
  // switch 2 high - enable mode 1 signal
  
  else if(buttonState1 == LOW && buttonState2 == LOW){
  c = 10;
    SigAB();
  } 
} serf

void SigAB(){
  
digitalWrite(ledPin2_SigB, HIGH);
delay(reg);
digitalWrite(ledPin2_SigB, LOW);
  
  for(int i = 0; i<c; i++){
  digitalWrite(ledPin1_SigA, HIGH);
  delay(a+reg*i);
  digitalWrite(ledPin1_SigA, LOW);
  delay(b);
  }
  
 delay(d);
  

// added correct pin definitions
}
