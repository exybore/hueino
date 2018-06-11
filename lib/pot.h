class Pot
{
public:
  Pot()
  {
    m_pin = 0;
  }
  Pot(int pin)
  {
    m_pin = pin;
  }
  ~Pot()
  {
  }

  /**
   * @brief Setup connexion with Serial Monitor
   * 
   */

  void serial()
  {
    Serial.begin(9600);
  }

  /**
   * @brief Listen to the output of the potentiometer using Serial Monitor
   * 
   */

  void listen()
  {
    Serial.println(analogRead(m_pin));
  }

  /**
   * @brief Get the value of the potentiometer
   * 
   */

  int get()
  {
    return analogRead(m_pin);
  }

private:
  int m_pin;
};