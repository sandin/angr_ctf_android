#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <signal.h>

#define USERDEF "DNMJABAQ"

char msg[] = "";
char unimportant_buffer[16];
char password_buffer[16];
uint32_t key;

void print_msg() {
  printf("%s", msg);
}

struct overflow_me {
  char buffer[16];
  char* to_copy_to;
};

int main(int argc, char* argv[]) {
  struct overflow_me locals;
  locals.to_copy_to = unimportant_buffer;

  memset(locals.buffer, 0, 16);
  strncpy(password_buffer, "PASSWORD", 12);

  //print_msg();

  printf("Enter the password: ");
  scanf("%u %20s", &key, locals.buffer);

  switch (key) {case 14876388: strncpy(locals.to_copy_to, locals.buffer, 16); break;case 54051568: strncpy(unimportant_buffer, locals.buffer, 16); break;default: strncpy(unimportant_buffer, locals.buffer, 16); break; }

  if (strncmp(password_buffer, USERDEF, 8)) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }

  return 0;
}