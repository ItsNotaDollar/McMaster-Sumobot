#**McMaster Sumobot - Junior Competition Resources**
Welcome to the homepage of all the McMaster Sumobot sample code for Junior competitors! You'll be able to find examples for basic motor movement, sensor reading, and some past competitors code!!!

###Basics of arduino code
To give a quick outline of how arduino code works, it is split into 2 main parts.
- Set up
- The loop

####The Set Up
The `setup()` function allows you to do "one time" set up before entering the loop. This is where you want to set up your pins as inputs or outputs, do any sensor calibration, set up serial monitoring, and where you need to put your wait statement (as per competition rules). Here is a basic outline of what your setup() should look like:
```
void setup() {
  // pinMode declarations
  pinMode(A0, INPUT); // Analog input
  pinMode(4, OUTPUT); // Digital output
  
  // Anything else you might like to do here
  
  // Set up a serial port to monitor whats going on
  Serial.begin(9600);
  
  // wait 5 seconds
  delay(5000); // Waits for 5000ms and then continues
{
```

###The Loop
The `loop()` function is where all of your logic should take place. This where you can read sensor data, change direction, etc. This function will loop indefinitely until the power in the arduino is turned off.

Here is a simple example of a basic state-machine in an `loop()`

```
void loop() {
  QrdValue = analogRead(QrdPin);
  if (QrdValue > QRD_THRESHOLD) {
    // White line detected!!!!
    moveBackwards();
  } else {
    // Not at the edge
    moveForwards();
  }
}
```

Take a look at sample code in the `Examples` folder! There are basic state-machines, QRD calibration examples, and motor testing code all included with the project!