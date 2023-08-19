int led_builtIn = 13; 
volatile int cindex = 0;  // Declare cindex as volatile

int buttonPin = 2; 
String name = "Abhinav";  // Declaring the string name
bool isBlinking = false;

void setup() {
  pinMode(led_builtIn, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(buttonPin), start, FALLING);
  Serial.begin(9600); 
}

void start()
{
  isBlinking = true;
  cindex = 0; 
}

void loop() {
   if (isBlinking) {  
    BlinkName();
    isBlinking = false;
  }

}

void BlinkName()
{
  for (cindex; cindex < name.length(); cindex++) {
      BlinkCharacters(name[cindex]);
      delay(1000);
    }
}

void BlinkDot() {
  digitalWrite(led_builtIn, HIGH);
  delay(300);
  digitalWrite(led_builtIn, LOW);
  delay(300);

}

void BlinkDash() {
  digitalWrite(led_builtIn, HIGH);
  delay(900);
  digitalWrite(led_builtIn, LOW);
  delay(300);
}

void BlinkCharacters(char give) {
  if (give == 'a') {
    BlinkDot();
    BlinkDash();
  }
  if (give == 'b') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (give == 'c') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (give == 'd') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
  if (give == 'e') {
    BlinkDot();
  }
  if (give == 'f') {
    BlinkDot();
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (give == 'g') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
  }
  if (give == 'h') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (give == 'i') {
    BlinkDot();
    BlinkDot();
  }
  if (give == 'j') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
    BlinkDash();
  }
  if (give == 'k') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
  }
  if (give == 'l') {
    BlinkDot();
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
  if (give == 'm') {
    BlinkDash();
    BlinkDash();
  }
  if (give == 'n') {
    BlinkDash();
    BlinkDot();
  }
  if (give == 'o') {
    BlinkDash();
    BlinkDash();
    BlinkDash();
  }
  if (give == 'p') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
    BlinkDot();
  }
  if (give == 'q') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
    BlinkDash();
  }
  if (give == 'r') {
    BlinkDot();
    BlinkDash();
    BlinkDot();
  }
  if (give == 's') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
  }
  if (give == 't') {
    BlinkDash();
  }
  if (give == 'u') {
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (give == 'v') {
    BlinkDot();
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (give == 'w') {
    BlinkDot();
    BlinkDash();
    BlinkDash();
  }
  if (give == 'x') {
    BlinkDash();
    BlinkDot();
    BlinkDot();
    BlinkDash();
  }
  if (give == 'y') {
    BlinkDash();
    BlinkDot();
    BlinkDash();
    BlinkDash();
  }
  if (give == 'z') {
    BlinkDash();
    BlinkDash();
    BlinkDot();
    BlinkDot();
  }
}