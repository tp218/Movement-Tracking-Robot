//Variable that controls forward movement of the car, connected to pin 12
const int forwardPin = 12;
//Variable that controls backward movement of the car, connected to pin 13
const int backwardPin = 13;
//Variable that controls the turning of wheels left of the car, connected to pin 8
const int leftPin = 8;
//Variable that controls the turning of wheels left of the car, connected to pin 7
const int rightPin = 7;
//Variable that controls the speed of the wheels, connected to pin 9
const int speedWheel = 9;
//The delay time between movements (In milliseconds)
const int delayTime = 1000;
// The highest and lowest speed the wheels will be traveling at (Range: 0 to 256)
const int highSpeed = 200;
const int lowSpeed = 130;


void setup() {
  //Setting up all the pins as outputs
  pinMode(forwardPin, OUTPUT);
  pinMode(backwardPin, OUTPUT);
  pinMode(leftPin, OUTPUT);
  pinMode(rightPin, OUTPUT);
  pinMode(speedWheel, OUTPUT);

}

void loop() {
  //Example Movements to test the circut

  // stop
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
  digitalWrite(leftPin, LOW);
  digitalWrite(rightPin, LOW);
  
  // move forward-left
  analogWrite(speedWheel, highSpeed);
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, HIGH);
  digitalWrite(leftPin, HIGH);
  digitalWrite(rightPin, LOW);
  delay(delayTime);
  
  // stop
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
  digitalWrite(leftPin, LOW);
  digitalWrite(rightPin, LOW);
  delay(delayTime);

  // move backward-left
  digitalWrite(forwardPin, HIGH);
  digitalWrite(backwardPin, LOW);
  digitalWrite(leftPin, HIGH);
  digitalWrite(rightPin, LOW);
  delay(delayTime);

  // stop
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
  digitalWrite(leftPin, LOW);
  digitalWrite(rightPin, LOW);
  delay(delayTime);

  // move forward-right
  analogWrite(speedWheel, lowSpeed);
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, HIGH);
  digitalWrite(leftPin, LOW);
  digitalWrite(rightPin, HIGH);
  delay(delayTime);

  // stop
  digitalWrite(forwardPin, LOW);
  digitalWrite(backwardPin, LOW);
  digitalWrite(leftPin, LOW);
  digitalWrite(rightPin, LOW);
  delay(delayTime);

  // move backward-right
  digitalWrite(forwardPin, HIGH);
  digitalWrite(backwardPin, LOW);
  digitalWrite(leftPin, LOW);
  digitalWrite(rightPin, HIGH);
  delay(delayTime);


}
