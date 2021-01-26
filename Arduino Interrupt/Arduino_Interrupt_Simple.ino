//First upload this code to your Arduino UNO and the LED ligts up. Then take one male to male jumper and attach the one end of jumper 
//to the digital pin 2 and another end to the GND. When the pin is attached at both end, the interrupt is fired which causes the arduino
//to wake up and lights the pin.

#include <avr/sleep.h>
#define interruptPin 2

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  digitalWrite(LED_BUILTIN, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  Going_To_Sleep();

}

void Going_To_Sleep(){
  sleep_enable();
  attachInterrupt(0, wakeUp, LOW);
  set_sleep_mode(SLEEP_MODE_PWR_DOWN);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
  sleep_cpu();
  Serial.println("Just woke up!");
  digitalWrite(LED_BUILTIN, HIGH);
}

void wakeUp(){
  Serial.println("Interrupt Fired");
  sleep_disable();
  detachInterrupt(0);
}
