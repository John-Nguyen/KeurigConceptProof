void setup() {
  Serial.begin(9600);
  while (!Serial); // wait for serial port to connect. Needed for Leonardo only
  Serial.println("Serial ready");
//  Serial1.begin(9600);
  Serial.println("Serial 1 ready");
}

void loop() {
  if (Serial.available()) {
    String str = Serial.readStringUntil('\n');
    Serial.println("");
    Serial.println("You sent: " + str);
  }
/*   Serial1.println(str);
  }
  if (Serial1.available()) {
    char chr = Serial1.read();
    if(chr != 0) Serial.print(chr);
  }*/
}
