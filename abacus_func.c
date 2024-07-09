#include <stdio.h>
#include <stdlib.h>
#include "abacus_func.h"

void print_options(void) {
  system("clear");
  printf("\n\n\n\n\n\t\t\tWelcome to ABACUS!\n\n\n");
  printf("    This program is designed to emulate experience of using abacus.\n");
  printf("       It's not all, this particular program allows you to use\n");
  printf("             different numerical systems. Check it out!\n\n\n");
  printf("Choose one of the options described below by entering the corresponding digit: \n");
  printf("                      (confirm with ENTER)\n\n");
  printf("                      1. Use the ABACUS!!\n");
  printf("                      2. About the program\n");
  printf("                      3. Exit the program\n");
}

void abacus_mode(void) {

}

void about(void) {
  printf("v0.0.1");
  printf("Program based on traditional ABACUS design.\n");
  printf("Adding functionality of choosing different numeral\n");
  printf("system base allows for better understanding of positional\n");
  printf("number systems.\n");
  printf("\nThe idea of creating this program came to my mind after coming across\n");
  printf("very simple abacus with 10 rows of 10 units, so it's the traditional\n");
  printf("model to teach kids at school how to perform basic arithmetic.\n");
  printf("The program main purpose is to get familiar with various numeral\n");
  printf("systems and to get better fluency while performing mathematical operations\n");
  printf("according to particular system\n");
}
