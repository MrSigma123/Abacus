/* Program design:
  Enter n-based positional nymeral system
  // create colorful pattern for certain place value representation
  Two types of input:
    - enter the value
    - use wasd to maneuver the abacus and move the rings (stars) to
    change the value
*/
#include "abacus_func.h"
void menu(void); // define menu function im main.c or in separate file
void menu (void) {
  print_options();
}

int main(void) {
  menu();
  return 0;
}
