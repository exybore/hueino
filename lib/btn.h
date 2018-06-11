class Btn
{

public:
  Btn()
  {
    m_pin = 1;
  }
  Btn(int pin)
  {
    m_pin = pin;
  }
  ~Btn() {}

  /**
   * @brief Setup the pin in input mode
   * 
   */

  void setup()
  {
    pinMode(m_pin, INPUT);
  }

  /**
   * @brief Check if the button is pressed
   * 
   * @return true - The button is pressed
   * @return false - The button is'nt pressed
   */

  bool isPressed()
  {
    if (digitalRead(m_pin) == HIGH)
    {
      return true;
    }
    if (digitalRead(m_pin) == LOW)
    {
      return false;
    }
  }

private:
  int m_pin;
};