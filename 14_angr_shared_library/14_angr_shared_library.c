#include <stdio.h>
#include <string.h>

#ifndef __14_ANGR_SHARED_LIBRARY
#define __14_ANGR_SHARED_LIBRARY

extern void print_msg(void);
extern int validate(char*, int);

#endif

int main(int argc, char* argv[]) {
  char buffer[16];
  memset(buffer, 0, 16);
  //print_msg();
  printf("Enter the password: ");
  scanf("%8s", buffer);
  if (validate(buffer, 8)) {
    printf("Good Job.\n");
  } else {
    printf("Try again.\n");
  }
  return 0;
}
