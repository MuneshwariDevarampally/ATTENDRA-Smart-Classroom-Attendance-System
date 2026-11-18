const int motor1A=A0;
const int motor1B=A1;
const int motor2A=A3;
const int motor2B=A2;

const int irSensorPin2 =2;
const int irSensorPin3 =3;
const int irSensorPin4 =4;
const int irSensorPin5 =5;


// Ultrasonic sensor pins
const int trigPin = 8;
const int echoPin = 9;

// Buzzer pin
const int buzzerPin = 11;

const int obstacleDistance = 20;

bool buzzerPlayed = false;
// Ultrasonic distance measurement
long getDistance() {

  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH, 30000);

  if (duration == 0) {
    return 999;
  }

  long distance = duration * 0.034 / 2;

  return distance;
}

void stop(){
  Serial.println("stop");
  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,LOW);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,LOW);
  delay(100);
}
void forward(){
  Serial.println("forward");
  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,HIGH);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,LOW);
  delay(100);
}
void backward(){
  Serial.println("backward");
  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,LOW);
  digitalWrite(motor2A,LOW);
  digitalWrite(motor2B,HIGH);
  delay(100);
}
void right(){
  Serial.println("right");
  digitalWrite(motor1A,LOW);
  digitalWrite(motor1B,HIGH);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,HIGH);
  delay(500);
}
void left(){
  Serial.println("left"); 
  digitalWrite(motor1A,HIGH);
  digitalWrite(motor1B,HIGH);
  digitalWrite(motor2A,HIGH);
  digitalWrite(motor2B,LOW);
  delay(500);
}
void alert(long distance){
Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");


  // Obstacle detection
  if (distance <= obstacleDistance) {
    Serial.println("Obstacle detected!");
    stop();
delay(500);
    // Wait until obstacle is removed
    while (getDistance() <= obstacleDistance) {
      stop();
        if (buzzerPlayed == false) {
      digitalWrite(buzzerPin, HIGH);
      delay(500);
      digitalWrite(buzzerPin, LOW);
      delay(200);
        }
      delay(100);
    }

    Serial.println("Obstacle cleared!");

    // Reset buzzer for next obstacle
    buzzerPlayed = false;
  }

}
void setup() { 
  Serial.begin(9600);
  pinMode(motor1A,OUTPUT);
  pinMode(motor1B,OUTPUT);
  pinMode(motor2A,OUTPUT);
  pinMode(motor2B,OUTPUT);
  pinMode(irSensorPin2, INPUT);
  pinMode(irSensorPin3, INPUT);
  pinMode(irSensorPin4, INPUT);
  pinMode(irSensorPin5, INPUT); //set IR sensors as i/ps
    // Ultrasonic sensor setup
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
stop();
  // Buzzer setup
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW);

}

void loop()
{
 long distance = getDistance();
 alert(distance);
  int s1 = digitalRead(irSensorPin2);
  int s2 = digitalRead(irSensorPin3);
  int s3 = digitalRead(irSensorPin4);
  int s4 = digitalRead(irSensorPin5);

  if (s1 == LOW && s2 == HIGH && s3 == HIGH && s4 == LOW)
  {
    forward();
    stop();
  }
  else if (s1 == HIGH && s2 == HIGH && s3 == HIGH && s4 == LOW)
  {
    //right();
    stop();
    delay(5000);
    delay(5000);
    
   forward();
   delay(50);
    stop();

  }
  else if (s1 == LOW && s2 == HIGH && s3 == HIGH && s4 == HIGH)
  {
    //left();
    stop();
    delay(5000);
    delay(5000);
    
    forward();
    delay(50);
    stop();

  }

  else if (s1 == HIGH && s2 == HIGH && s3 == HIGH && s4 == HIGH)
  {
    stop();
  }
  else{
    stop();
  }
    delay(500);
}
