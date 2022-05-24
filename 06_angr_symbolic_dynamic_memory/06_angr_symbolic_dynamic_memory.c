#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define USERDEF0 "PPBVDNMJ"
#define USERDEF1 "ABAQHZQQ"

char padding2[30835242];
char* buffer0;
char* buffer1;
char* buffer2;
char* buffer3;

char msg[] = "";

void print_msg() {
  printf("%s", msg);
}

int complex_function(int value, int i) {
#define LAMBDA 13
  if (!('A' <= value && value <= 'Z')) {
    printf("Try again.\n");
    exit(1);
  }
  return ((value - 'A' + (LAMBDA * i)) % ('Z' - 'A' + 1)) + 'A';
}

int main(int argc, char* argv[]) {
  buffer0 = malloc(9);
  buffer1 = malloc(9);

  memset(buffer0, 0, 9);
  memset(buffer1, 0, 9);

  //print_msg();
  printf("Enter the password: ");
  scanf("%8s %8s", buffer0, buffer1);

  for (int i=0; i<8; ++i) {
    buffer0[i] = complex_function(buffer0[i], i);
    buffer1[i] = complex_function(buffer1[i], i+32);
  }

  if (strncmp(buffer0, USERDEF0, 8)
   || strncmp(buffer1, USERDEF1, 8)) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }

  free(buffer0);
  free(buffer1);
}