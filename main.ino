#include "lib/led.h"
#include "lib/btn.h"
#include "lib/pot.h"
#include "lib/core.h"

Pot pot(0);
Btn btn(13);
Led led(3, 5, 6);
Core core(led, pot, btn);

void setup()
{
  led.setup();
  btn.setup();
}
void loop()
{
  if (btn.isPressed())
  {
    core.switchMode();
  }
  delay(100);
}
