int red = 2;
int waterPump = 9;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(waterPump, OUTPUT);
  
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

  if (value < 150) {
    Serial.println("Low water : " + String(value));
    digitalWrite (red,HIGH);
    digitalWrite (waterPump,HIGH);
    // pump water for 10 seconds
    delay(10000);
    }

  Serial.println("Read of: " + String(value));

  digitalWrite (red,LOW);
  digitalWrite (waterPump,LOW);
  Serial.println("waiting 3 sec for next reading");
  delay(3000);
}