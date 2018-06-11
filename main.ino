#include "lib/compose.h"

Pot pot(0);
Btn btn(13);
Led led(7, 6, 5);

void setup()
{
  led.setup();
  btn.setup();
}
void loop()
{
}