// definisikan pin dari button dan buzzer
#define buttonPin1 D2
#define buzzerPin D4
#define ledPin D5

// inisialisasi variabel untuk menyimpan status button
int buttonState1 = 0;
int buttonState2 = 0;

void setup() {
  // set pin dari button sebagai input
  pinMode(buttonPin1, INPUT);
  
  // set pin dari buzzer dan led sebagai output
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);


  Serial.println("Connected to WiFi");
  Serial.println(WiFi.localIP());
}

void loop() {
  // membaca status dari button
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);

  // jika salah satu button ditekan, buzzer dan led menyala
  if (buttonState1 == HIGH) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
}
