#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

char msg[] = "";

void print_msg() {
  printf("%s", msg);
}

void print_good() {
  printf("Good Job.\n");
  exit(0);
}

void read_input() {
  char padding0[7];
  char buffer[8];
  char padding1[27];

  scanf("%s", buffer);
}

int main(int argc, char* argv[]) {
  uint32_t key = 0;

  //print_msg();

  printf("Enter the password: ");
  read_input();

  printf("Try again.\n");
  return 0;
}