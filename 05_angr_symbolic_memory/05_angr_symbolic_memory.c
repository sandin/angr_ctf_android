#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define USERDEF "PPBVDNMJABAQHZQQHVQWECCSFPJYYVDO"

char padding0[ 66412160 ];
char user_input[32+1];
char padding1[ 52567112 ];

char msg[] = "";

void print_msg() {
  printf("%s", msg);
}

int complex_function(int value, int i) {
#define LAMBDA 9
  if (!('A' <= value && value <= 'Z')) {
    printf("Try again.\n");
    exit(1);
  }
  return ((value - 'A' + (LAMBDA * i)) % ('Z' - 'A' + 1)) + 'A';
}

int main(int argc, char* argv[]) {
  memset(user_input, 0, sizeof(user_input));

  //print_msg();
  printf("Enter the password: ");
  scanf("%8s %8s %8s %8s", user_input, &user_input[8], &user_input[16], &user_input[24]);

  for (int i=0; i<32; ++i) {
    user_input[i] = (char) complex_function(user_input[i], i);
  }

  if (strncmp(user_input, USERDEF, 32)) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }
}