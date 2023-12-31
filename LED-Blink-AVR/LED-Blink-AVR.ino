#include <avr/io.h>
#include <util/delay.h>

int main(void) {
  DDRB |= (1 << DDB5);  //Make PB5 as output.


  while (1) {
    PORTB |= (1 << PORTB5);
    _delay_ms(100);

    PORTB &= ~(1 << PORTB5);
    _delay_ms(100);
  }

  return 0;
}