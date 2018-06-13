class Pot
{
public:
  Pot(int pin)
  {
    m_pin = pin;
  }

  /**
   * @brief Get the value of the potentiometer.
   * 
   * @return Potentiometer value
   */

  int get()
  {
    return analogRead(m_pin);
  }

private:
  int m_pin;
};