#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USERDEF "PPBVDNMJ"
#define LEN_USERDEF 8

char msg[] =
  "";

void print_msg() {
  printf("%s", msg);
}

int complex_function(int value, int i) {
#define LAMBDA 37
  if (!('A' <= value && value <= 'Z')) {
    printf("Try again.\n");
    exit(1);
  }
  return ((value - 'A' + (LAMBDA * i)) % ('Z' - 'A' + 1)) + 'A';
}
int main(int argc, char* argv[]) {
  char buffer[20];
  char password[20];

  //print_msg();

  for (int i=0; i < 20; ++i) {
    password[i] = 0;
  }

  strncpy(password, USERDEF, LEN_USERDEF);

  printf("Enter the password: ");
  scanf("%8s", buffer);

  for (int i=0; i<8; ++i) {
    buffer[i] = complex_function(buffer[i], i);
  }

  if (strcmp(buffer, password)) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }
}