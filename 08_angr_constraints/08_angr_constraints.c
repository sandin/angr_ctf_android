#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define USERDEF "PPBVDNMJABAQHZQQ"

char msg[] = "";

char buffer[17];
char password[16];

void print_msg() {
  printf("%s", msg);
}

int complex_function(int value, int i) {
#define LAMBDA 53
  if (!('A' <= value && value <= 'Z')) {
    printf("Try again.\n");
    exit(1);
  }
  return ((value - 'A' + (LAMBDA * i)) % ('Z' - 'A' + 1)) + 'A';
}

int check_equals_PPBVDNMJABAQHZQQ(char* to_check, size_t length) {
  uint32_t num_correct = 0;
  for (int i=0; i<length; ++i) {
    if (to_check[i] == password[i]) {
      num_correct += 1;
    }
  }
  return num_correct == length;
}

int main(int argc, char* argv[]) {
  //print_msg();

  memcpy(password, USERDEF, 16);
  memset(buffer, 0, 17);

  printf("Enter the password: ");
  scanf("%16s", buffer);

  for (int i=0; i<16; ++i) {
    buffer[i] = complex_function(buffer[i], -i+15);
  }

  if (!check_equals_PPBVDNMJABAQHZQQ(buffer, 16)) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }
}