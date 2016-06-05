/*
  TurnSignal1 - First crack at a Turn Signal controller.

  This version uses 2 buttons or a SPDT switch with the common pin grounded.
   * Pins 2,3:  Active-low outputs to the relay module inputs.  Basically, 
     grounding those relay inputs activates the relays.
   * Pins 4-5:  Active-low inputs from the buttons or switches.

  As written, the Arduino is just acting like a relay, because the buttons
     could be connected directly to the relay to accomplish the same thing.
     The program structure is looking forward toward future designs.
 */

#define  LIGHT1 2
#define  LIGHT2 3
#define BUTTON1 4
#define BUTTON2 5


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LIGHT1, OUTPUT); digitalWrite(LIGHT1, HIGH);
  pinMode(LIGHT2, OUTPUT); digitalWrite(LIGHT2, HIGH);

  pinMode(BUTTON1, INPUT_PULLUP);
  pinMode(BUTTON2, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {

  if (digitalRead(BUTTON1) == LOW) {
    digitalWrite(LIGHT1, LOW);
  } else {
    digitalWrite(LIGHT1, HIGH);
  }

  if (digitalRead(BUTTON2) == LOW) {
    digitalWrite(LIGHT2, LOW);
  } else {
    digitalWrite(LIGHT2, HIGH);
  }

}
