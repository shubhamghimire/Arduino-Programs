#define _TASK_SLEEP_ON_IDLE_RUN
#include <TaskScheduler.h>

#define LEDPIN 13

Scheduler ts;

void WrapperCallback();
bool BlinkOnEnable();
void BlinkOnDisable();
void LEDOn();
void LEDOff();

Task tWrapper(20000, TASK_FOREVER, &WrapperCallback, &ts, true);
Task tBlink(7000, TASK_ONCE, NULL, &ts, false, &BlinkOnEnable, &BlinkOnDisable);
Task tLED(TASK_IMMEDIATE, TASK_FOREVER, NULL, &ts, false, NULL, &LEDOff);

void WrapperCallback(){
  Serial.println("In wrapperCallback");
  tBlink.restartDelayed(); //LED blinking is initiated every 20 seconds for 7 seconds
}

//Upon being called, tBlink will define the parameters
//and enable LED blinking task, which actually controls
//the hardware(LED in this example)

bool BlinkOnEnable(){
  Serial.println("In BLinkOnEnable");
  tLED.setInterval(500 + random(501));
  tLED.setCallback(&LEDOn);
  tLED.enable();

  return true;  //Task should be enabled
  
}

//tBlink does not really need a callback method
//since it just waits for 5 seconds for the first
//and only iteration to occur. Once the iteration
//takes place, tBlink is disabled by the scheduler,
//thus executing its OnDisable method below.

void BlinkOnDisable(){
  Serial.println("In BlinkOnDisable");
  tLED.disable();
}

void LEDOn(){
  Serial.println("In LEDOn");
  digitalWrite(LEDPIN, HIGH);
  tLED.setCallback(&LEDOff);
}

void LEDOff(){
  Serial.println("In LEDOff");
  digitalWrite(LEDPIN, LOW);
  tLED.setCallback(&LEDOn);
}

// Note that LEDOff method serves as OnDisable method
// to make sure the LED is turned off when the tBLink
// task finishes (or disabled ahead of time)

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  ts.execute();
}
