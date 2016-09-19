#**McMaster Sumobot - QRD Example**
This project contains some sample could that is useful for calibrating the QRD sensors supplied with the Junior Starter Package.

###The Code
When you are using the code, make sure that you adjust the `QrdPin` to the pin in which you are plugging your sensor to. Each QRD sensor should be calibrated to find where the `QrdThreshold` value is. The QRD sensors read a value from 0 to 255, you'll need to find which is the best value to decide when it is detecting white, or black.

The serial monitor will allow you to see the values being ready ever second. Use this to decide what value you want for your full implementation.
```
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
```