#include <stdio.h>
#include <stdlib.h>

register int w5 asm("w5");
register int w6 asm("w6");
register int w7 asm("w7");

char msg[] = "";

void print_msg() {
  printf("%s", msg);
}

int complex_function_1(int input) {
input^=502665222;input^=28917347;input+=2221625415;input+=2998087504;input+=795712434;input^=488332119;input^=1682147594;input^=355527433;input+=608352274;input+=2159320496;input^=459700348;input^=2693591858;input+=2268198216;input^=106376520;input^=2509925424;input^=4097967162;input+=2006316830;input+=2642142472;input^=171777478;input+=3763431505;input+=611816316;input^=2735111190;input^=2167172410;input+=2906029319;input+=4075923765;input+=1465865243;input+=4256152671;input^=137298873;input+=928982847;input^=1836640557;input^=726958020;input+=2687659156;input+=1502804466;input^=728179370;input^=3931933160;input^=2223556390;input+=1174779447;input^=2736826770;input+=868506057;input+=2241540370;input+=3960268959;input+=4159136345;input+=4243337297;input+=121674440;input+=1694341347;input+=1427084192;
  return input;
}

int complex_function_2(int input) {
input^=3630209074;input^=1042200291;input^=2868491484;input^=2214851695;input^=1763972767;input^=2169793329;input^=2285277199;input+=8365668;input+=1599632530;input^=2948132988;input^=2254894028;input+=3439891556;input+=579135179;input^=2215553308;input+=2491085468;input^=3489916232;input^=3256329168;input+=890692017;input^=201931470;input+=295327991;input+=1912849943;input^=4267960206;input^=3906835586;input+=4200683264;input+=3317122954;input+=1413900054;input^=1915026585;input^=3773160130;input+=1161049106;input^=1871647819;input^=3465235603;input^=3779281454;input^=182658558;input^=3759439287;input+=4255301214;input^=1181476716;input^=2390289131;input^=1115554188;input^=220922339;input+=3086743204;input^=1333377212;input^=3863826598;
  return input;
}

int complex_function_3(int input) {
input+=769985663;input^=1535478303;input^=2090456968;input^=2485784096;input+=3935268900;input^=3949921245;input^=3260190299;input+=3515967995;input^=3051692809;input+=1205512841;input+=58031369;input^=4207435984;input+=2902677808;input^=1005919548;input^=644507364;input+=727584163;input+=2175354791;input^=49038818;input+=1047865088;input^=3417363482;input^=1366876972;input+=3534501363;input+=3777003846;input+=2856064288;input^=2198180368;input^=742419009;input^=1351832802;input+=3585507326;input+=4165015951;input+=2784064869;input+=3142427212;input+=3427188342;input+=713297258;input+=1075535709;input+=2584964351;input^=3314881594;input^=3361531963;input+=125293542;input+=3690534606;
  return input;
}

void get_user_input() {
  int first, second, third;
  scanf("%x %x %x", &first, &second, &third);
  w5 = first;
  w6 = second;
  w7 = third;
}

int main(int argc, char* argv[]) {
  //print_msg();
  printf("Enter the password: ");
  get_user_input();
  int non_eax = w5;
  int non_w6 = w6;
  int non_w7 = w7;
  non_eax = complex_function_1(non_eax);
  non_w6 = complex_function_2(non_w6);
  non_w7 = complex_function_3(non_w7);

  if (non_eax || non_w6 || non_w7) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }

  return 0;
}