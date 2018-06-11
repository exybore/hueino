class Led
{
public:
  Led()
  {
  }
  Led(int redPin, int greenPin, int bluePin, bool commonAnode = false)
  {
    m_red_pin = redPin;
    m_green_pin = greenPin;
    m_blue_pin = bluePin;
    m_anode = commonAnode;
  }
  ~Led() {}

  /**
   * @brief Setup the pins in output mode
   * 
   */

  void setup()
  {
    pinMode(m_red_pin, OUTPUT);
    pinMode(m_green_pin, OUTPUT);
    pinMode(m_blue_pin, OUTPUT);
  }

  /*
   * @brief Display a specific color
   * 
   * @param red [0 .. 255] Display some red
   * @param green [0 .. 255] Display some green
   * @param blue [0 .. 255] Display some blue
   * 
   */
  void displayColor(int red, int green, int blue)
  {
    if (m_anode)
    {
      analogWrite(m_red_pin, ~red);
      analogWrite(m_green_pin, ~green);
      analogWrite(m_blue_pin, ~blue);
    }
    else
    {
      analogWrite(m_red_pin, red);
      analogWrite(m_green_pin, green);
      analogWrite(m_blue_pin, blue);
    }
  }
  /*
   * @brief Change the mode of the LED
   * 
   * @param commonAnode <true|false> The LED mode
   * 
   */
  void commonAnode(bool commonAnode = false)
  {
    m_anode = commonAnode;
  }

private:
  int m_red_pin;
  int m_green_pin;
  int m_blue_pin;
  bool m_anode;
};