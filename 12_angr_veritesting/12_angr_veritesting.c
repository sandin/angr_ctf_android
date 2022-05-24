#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char msg[] = "";

void print_msg() {
  printf("%s", msg);
}

int complex_function(int value, int i) {
#define LAMBDA 3
  if (!('A' <= value && value <= 'Z')) {
    printf("Try again.\n");
    exit(1);
  }
  return ((value - 'A' + (LAMBDA * i)) % ('Z' - 'A' + 1)) + 'A';
}

int main(int argc, char* argv[]) {
  char buffer[33];

  //print_msg();

  memset(buffer, 0, 33);

  printf("Enter the password: ");
  scanf("%32s", buffer);

  int counter0 = 0;
  int counter1 = 0;
  for (int i=0; i<32; ++i) {
    if (buffer[i] == complex_function('P', i + 244) ) {
      counter0++;
    }
  }

  if (counter0 == 32 && buffer[33] == 0x0) {
    printf("Good Job.\n");
  } else {
    printf("Try again.\n");
  }

  return 0;
}