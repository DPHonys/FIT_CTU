// Arduino ESPLORA

#include <Esplora.h>

#define DOT 200             // dot duration
#define DASH 800            // dash duration
#define NO_LIGHT 200        // no light duration
#define BRIGHT_GREEN 50     // intensity of green LED

#define PAUSE 500           // pause duration between letters

// Morse code to display
// ARD : .- .-. -..

void reset() {
  Esplora.writeRed(50);
  delay(300);
  Esplora.writeRed(0);
  delay(100);
}

void pause(int duration) {
  Esplora.writeGreen(0);
  delay(duration);
}

void flash(int duration) {
  Esplora.writeGreen(BRIGHT_GREEN);
  delay(duration);
  pause(NO_LIGHT);
}

void setup() {}

void loop() {
  // A
  flash(DOT);
  flash(DASH);
  pause(PAUSE);
  
  // R
  flash(DOT);
  flash(DASH);
  flash(DOT);
  pause(PAUSE);

  // D
  flash(DASH);
  flash(DOT);
  flash(DOT);
  pause(PAUSE);

  reset();
}
