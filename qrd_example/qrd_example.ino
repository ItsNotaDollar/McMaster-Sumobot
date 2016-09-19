/********************************************************************/
/*                     QRD Calibration Example                      */
/********************************************************************/

const unsigned int QrdPin = A0;
const unsigned int QrdThreshold = 100;

// where the sensor value will be stored
unsigned int QrdValue;

void setup() {
  pinMode(QrdPin, INPUT);
  Serial.begin(9600);
  Serial.println("+-------------------------------------------+");
  Serial.println("|            QRD Sensor Readings            |");
  Serial.println("+-------------------------------------------+");
}

void loop() {
  QrdValue = analogRead(QrdPin);
  Serial.println("Qrd is reading a value of : " + QrdValue);
  if (QrdValue < QrdThreshold) {
    Serial.println("Qrd is reading white!!!");
    } else {
      Serial.println("Qrd is reading black!!!");
    }
  Serial.println("---------------------------------------------");
  delay(1000); // Wait one second before next loop iteration starts
}

