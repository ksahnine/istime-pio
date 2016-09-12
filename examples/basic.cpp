#include <Arduino.h>
#include <IsTime.h>

const static int interval = 30000; // 30 seconds interval
long unsigned previous_millis;

void setup() {
  // put your setup code here, to run once:

}

void loop() {

  if (IsTime(previous_millis, interval)) { 
    // do something
  }

}
