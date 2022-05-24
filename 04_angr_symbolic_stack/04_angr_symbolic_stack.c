#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define USERDEF0 2054059509
#define USERDEF1 502665222

char msg[] = "";

void print_msg() {
  printf("%s", msg);
}

uint32_t complex_function0(uint32_t value) {
  value ^= 3679452347;value ^= 28917347;value ^= 2214915741;value ^= 2998087504;value ^= 371976298;value ^= 2475383994;value ^= 2929308420;value ^= 2125189146;value ^= 1781520103;value ^= 3108217883;value ^= 357293214;value ^= 3200481192;value ^= 2159320496;value ^= 1448908251;value ^= 1204599553;value ^= 2693591858;value ^= 3682683421;value ^= 1563265163;value ^= 106376520;value ^= 3048852569;value ^= 2509925424;value ^= 1993942672;value ^= 3646937385;value ^= 1040922905;value ^= 632926616;value ^= 2642142472;value ^= 3767846650;value ^= 1026224004;value ^= 3763431505;value ^= 3371374;value ^= 1236838471;value ^= 1185612586;
  return value;
}

uint32_t complex_function1(uint32_t value) {
  value ^= 2167172410;value ^= 4025631417;value ^= 2906029319;value ^= 2787524621;value ^= 3101757471;value ^= 607215427;value ^= 1105792900;value ^= 2234789985;value ^= 2710224182;value ^= 2898015264;value ^= 3144079660;value ^= 4020875520;value ^= 3127849992;value ^= 2457717745;value ^= 396459405;value ^= 928982847;value ^= 3152087579;value ^= 1323734898;value ^= 2002864975;value ^= 2687659156;value ^= 2518705635;value ^= 1502804466;value ^= 2639180078;value ^= 728179370;value ^= 2492407956;value ^= 3931933160;value ^= 499502851;value ^= 954947516;value ^= 2736826770;value ^= 2610909380;value ^= 868506057;value ^= 2956908083;
  return value;
}

void handle_user() {
  uint32_t user_int0;
  uint32_t user_int1;
  scanf("%u %u", &user_int0, &user_int1);
  user_int0 = complex_function0(user_int0);
  user_int1 = complex_function1(user_int1);
  if ((user_int0 ^ USERDEF0) || (user_int1 ^ USERDEF1)) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }
}

int main(int argc, char* argv[]) {
  //print_msg();
  printf("Enter the password: ");
  handle_user();
}