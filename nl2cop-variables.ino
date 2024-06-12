#include <Keyboard.h>

const int power = 1;
const int dis1 = 2;
const int dis2 = 3;
const int restraints = 4;
const int gates = 5;
const int estop = 6;
const int reset = 7;
const int floors= 8;
const int DisLed = 9;
const int eStopLed = 10;
const int ResetLed = 11;
const int FloorsLed = 12;
const long DispatchDelay = 15000; //Time needed for trains to move in and out of station
const long DispatchFD = 45000; //Time needed for trains to dispatch from the station to the first drop
const long DispatchMCBR = 90000; //Time needed for trains to dispatch and reach mid course brake run
const long DebounceDelay = 150;
bool resOpen = false;
bool gatesOpen = false;
bool trainParked = true;
bool canDispatch = true;
bool canMoveGatesRestraints = true;
bool canLowerFloors = true;
unsigned long DispatchStartTime = 0;
unsigned long currentMillis;
int eStopState; //track whether E-stop is pressed

void setup() {
  pinMode(power, INPUT_PULLUP);
  pinMode(dis1, INPUT_PULLUP);
  pinMode(dis2, INPUT_PULLUP);
  pinMode(DisLed, OUTPUT);
  pinMode(restraints, INPUT_PULLUP);
  pinMode(gates, INPUT_PULLUP);
  pinMode(estop, INPUT_PULLUP);
  pinMode(eStopLed, OUTPUT);
  pinMode(reset, INPUT_PULLUP);
  pinMode(ResetLed, OUTPUT);
  pinMode(floors, INPUT_PULLUP);
  pinMode(FloorsLed, OUTPUT);
//  pinMode();
  pinMode(LED_BUILTIN, OUTPUT);
  eStopState = digitalRead(estop);
  digitalWrite(eStopLed, eStopState); //set initial state of E-Stop

  Keyboard.begin();
}

void loop() {
}
