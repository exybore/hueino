class Core
{
public:
  Core(Led led, Pot pot, Btn btn)
  {
    m_led = led;
    m_pot = pot;
    m_btn = btn;
    m_mode = 0;
  }

  int ledIntensity()
  {
    return (m_pot.get() * 255) / 1023;
  }

  void getMode()
  {
    switch (m_mode)
    {
    case 0:
      m_led.commonAnode(false);
      m_led.displayColor(ledIntensity(), 0, 0);
      break;
    case 1:
      m_led.commonAnode(false);
      m_led.displayColor(0, ledIntensity(), 0);
      break;
    case 2:
      m_led.commonAnode(false);
      m_led.displayColor(0, 0, ledIntensity());
      break;
    case 3:
      m_led.commonAnode(true);
      m_led.displayColor(ledIntensity(), 0, 0);
      break;
    case 4:
      m_led.commonAnode(true);
      m_led.displayColor(0, ledIntensity(), 0);
      break;
    case 5:
      m_led.commonAnode(true);
      m_led.displayColor(0, 0, ledIntensity());
      break;
    case 6:
      m_led.commonAnode(true);
      m_led.displayColor(0, 0, 0);
      break;
    }
  }

  void switchMode()
  {
    ++m_mode;
    if (m_mode == 7)
    {
      m_mode = 0;
    }
    this->getMode();
  }

private:
  int m_mode;
  Led m_led;
  Pot m_pot;
  Btn m_btn;
};