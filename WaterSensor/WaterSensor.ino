int red = 2;
int green = 3;
int blue = 4;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  Serial.begin(9600);
  while (! Serial); 
  Serial.println("Wait untilSerial is ready");
  pinMode(LED_BUILTIN,LOW);
  delay(1000);
  pinMode(LED_BUILTIN,HIGH);
  delay(1000);
  pinMode(LED_BUILTIN,LOW);
  }

void loop() {
  // read the input on analog pin 0:
  int value = analogRead(A0);

  if (value > 300) {
    Serial.println("Very heavy Rain Value of: " + String(value));
    digitalWrite (red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,HIGH);
    }
  else if ((value >200) && (value <= 300)) {
    Serial.println("AVERAGE Rain Value of: " + String(value));
    digitalWrite (green,LOW);
    digitalWrite (red,HIGH);
    digitalWrite(blue,HIGH);
    }
  else{
    Serial.println("Dry Weather Value of: " + String(value));
    digitalWrite (blue,LOW);
    digitalWrite (red,HIGH);
    digitalWrite (green,HIGH);
  }
  delay(1000);
  digitalWrite (blue,HIGH);
  digitalWrite (red,HIGH);
  digitalWrite (green,HIGH);
  Serial.println("waiting 3 sec for next reading");
  delay(3000);
}