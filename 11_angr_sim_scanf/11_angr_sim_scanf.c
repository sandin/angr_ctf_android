#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

#define USERDEF0 "PPBVDNMJ"
#define LEN_USERDEF 8

char msg[] = "";

char padding0[882];
char buffer1[5];
char padding1[4603];
char buffer0[5];
char padding2[174];

void print_msg() {
  printf("%s", msg);
}

int complex_function(int value, int i) {
#define LAMBDA 29
  if (!('A' <= value && value <= 'Z')) {
    printf("Try again.\n");
    exit(1);
  }
  return ((value - 'A' + (LAMBDA * i)) % ('Z' - 'A' + 1)) + 'A';
}

int main(int argc, char* argv[]) {
  char password[20];
  int keep_going = 1;
  unsigned int x = 0xDEADBEEF;

  //print_msg();

  memset(password, 0, 20);
  strncpy(&password[0], USERDEF0, LEN_USERDEF);

  /* complex function on password */
  for (int j=0; j<8; ++j) {
    password[j] = complex_function(password[j], j);
  }

  printf("Enter the password: ");

  if ((!(x ^ 612911694 ^ 4196791457))) {if ((!(x ^ 2475383994 ^ 1294393941))) {if (!(!(x ^ 3646341789 ^ 133921906))) {if ((!(x ^ 2125189146 ^ 2684776181))) {if (!(!(x ^ 3619396725 ^ 152445594))) {if ((!(x ^ 3108217883 ^ 1743657716))) {if ((!(x ^ 3678940694 ^ 98930937))) {if ((!(x ^ 3200481192 ^ 1617873223))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2486121799 ^ 1250069416))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 3147156589 ^ 1698198146))) {if ((!(x ^ 3765607088 ^ 1054811231))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 1204599553 ^ 2573272558))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 3682683421 ^ 86832370))) {if (!(!(x ^ 1483934278 ^ 2262742185))) {if (!(!(x ^ 3048852569 ^ 1796502198))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 394404677 ^ 3375340970))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 3646937385 ^ 133326790))) {if ((!(x ^ 2871659274 ^ 1971828197))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 632926616 ^ 4212395895))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if ((!(x ^ 3767846650 ^ 1043953685))) {if ((!(x ^ 1251256567 ^ 2486769176))) {if ((!(x ^ 1236838471 ^ 2534741672))) {if (!(!(x ^ 3538883174 ^ 205696137))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3101757471 ^ 1716301552))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 3441184038 ^ 330429385))) {if (!(!(x ^ 1105792900 ^ 2672079211))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2710224182 ^ 2133263321))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 3144079660 ^ 1707829187))) {if ((!(x ^ 3127849992 ^ 1690471143))) {if ((!(x ^ 396459405 ^ 3373056866))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3713723999 ^ 66539696))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 1323734898 ^ 2420844957))) {if (!(!(x ^ 896567050 ^ 3957144037))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2639180078 ^ 1138954177))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}} else {if ((!(x ^ 2943918933 ^ 1909792186))) {if ((!(x ^ 3240882972 ^ 528895475))) {if (!(!(x ^ 954947516 ^ 3863406931))) {if (!(!(x ^ 2610909380 ^ 1160965675))) {if ((!(x ^ 2910397137 ^ 1943313470))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 280652123 ^ 3457669044))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 411429449 ^ 3324531878))) {if ((!(x ^ 2364583671 ^ 1381830680))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2176211071 ^ 1595664016))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 796403819 ^ 4057306756))) {if (!(!(x ^ 3317489380 ^ 454123531))) {if ((!(x ^ 948385711 ^ 3861547328))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2137050025 ^ 2714596678))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 2032351517 ^ 2811135986))) {if ((!(x ^ 2766205438 ^ 2051886865))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 4064537456 ^ 753816991))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if (!(!(x ^ 320984987 ^ 3448531316))) {if ((!(x ^ 2219445386 ^ 1525133925))) {if ((!(x ^ 3939322878 ^ 878769425))) {if ((!(x ^ 3544093146 ^ 227749685))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2830400584 ^ 1981399719))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 355049129 ^ 3414433862))) {if (!(!(x ^ 3079571151 ^ 1763915808))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 1013814334 ^ 3804244689))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 1922311522 ^ 2889456525))) {if ((!(x ^ 208314189 ^ 3536265634))) {if (!(!(x ^ 2385737394 ^ 1352583261))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 4278561254 ^ 564664073))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 4293069055 ^ 558806544))) {if ((!(x ^ 3407017390 ^ 364858177))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 994245659 ^ 3857662708))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}}} else {if (!(!(x ^ 3894070742 ^ 917992249))) {if ((!(x ^ 1999001446 ^ 2844518793))) {if (!(!(x ^ 1213616996 ^ 2533092747))) {if ((!(x ^ 662861281 ^ 4180658958))) {if ((!(x ^ 4186119295 ^ 657367696))) {if (!(!(x ^ 2679985263 ^ 1091627648))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 740015261 ^ 4072014450))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1987495313 ^ 2832956286))) {if ((!(x ^ 3818620277 ^ 1026964378))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2968063832 ^ 1849995703))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 3719002746 ^ 50775189))) {if (!(!(x ^ 3795460791 ^ 1016568920))) {if ((!(x ^ 4002266478 ^ 807404417))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 3862705653 ^ 949062426))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 4034609891 ^ 785841164))) {if ((!(x ^ 3645191277 ^ 132680322))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2945231306 ^ 1897994021))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if ((!(x ^ 356039014 ^ 3415541641))) {if ((!(x ^ 2173593956 ^ 1596184459))) {if ((!(x ^ 1829440757 ^ 3014046234))) {if ((!(x ^ 3162208851 ^ 1658242236))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 1280337898 ^ 2466109701))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 996339668 ^ 3855569211))) {if ((!(x ^ 1348569180 ^ 2395748019))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 4062640855 ^ 747324472))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 485301407 ^ 3259015792))) {if ((!(x ^ 2414238026 ^ 1363928997))) {if ((!(x ^ 1991261228 ^ 2820506307))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2648281777 ^ 1131687006))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1549017604 ^ 2197396715))) {if (!(!(x ^ 2645116343 ^ 1124399960))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 671527473 ^ 4138405086))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}} else {if ((!(x ^ 3223085108 ^ 514973403))) {if (!(!(x ^ 700055116 ^ 4145299619))) {if (!(!(x ^ 1748047018 ^ 3063720517))) {if ((!(x ^ 1228795581 ^ 2542817362))) {if ((!(x ^ 3588049228 ^ 191952803))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2176882188 ^ 1600989411))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 1654351096 ^ 3157711383))) {if ((!(x ^ 1291715821 ^ 2454960642))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3132424459 ^ 1679343588))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 2430283098 ^ 1316393909))) {if (!(!(x ^ 3919680868 ^ 923544459))) {if ((!(x ^ 1712562454 ^ 3099467769))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3774517897 ^ 1045900390))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 3739478146 ^ 5133933))) {if (!(!(x ^ 3007173230 ^ 1838181505))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 1028592075 ^ 3823284004))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if (!(!(x ^ 1857064754 ^ 2954703325))) {if ((!(x ^ 1590097014 ^ 2154515097))) {if ((!(x ^ 906488782 ^ 3903477025))) {if ((!(x ^ 131584233 ^ 3648679430))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 4156474381 ^ 689142498))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 1821218945 ^ 2988451438))) {if ((!(x ^ 3832631970 ^ 987556941))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 681280414 ^ 4130749809))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 3962538336 ^ 847394703))) {if (!(!(x ^ 4103012010 ^ 706953285))) {if ((!(x ^ 4233644674 ^ 586544237))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 1269445258 ^ 2500299877))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 1395861952 ^ 2375980847))) {if ((!(x ^ 2111267787 ^ 2742738212))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 3032654051 ^ 1785667084))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}}}} else {if (!(!(x ^ 477766869 ^ 3268909626))) {if ((!(x ^ 2027323203 ^ 2793128364))) {if ((!(x ^ 3109919413 ^ 1743791194))) {if (!(!(x ^ 2761033003 ^ 2050997188))) {if (!(!(x ^ 532285626 ^ 3239556693))) {if ((!(x ^ 3497284035 ^ 249163564))) {if (!(!(x ^ 635003760 ^ 4218740127))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 757925510 ^ 4085299305))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 4212151521 ^ 633203214))) {if ((!(x ^ 1362845924 ^ 2409029131))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3504574775 ^ 240005080))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 357952245 ^ 3422049306))) {if ((!(x ^ 3500893461 ^ 235330554))) {if (!(!(x ^ 4169641701 ^ 640290826))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 1876159917 ^ 2977846082))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 3699971716 ^ 35956843))) {if ((!(x ^ 3575809630 ^ 193935537))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2808538605 ^ 2043370242))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if ((!(x ^ 2015994499 ^ 2793675884))) {if ((!(x ^ 1858334721 ^ 2960019182))) {if (!(!(x ^ 763863902 ^ 4079623601))) {if (!(!(x ^ 390708823 ^ 3387162808))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 4168919358 ^ 651237329))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1783672764 ^ 3036483923))) {if ((!(x ^ 1773890298 ^ 3071726613))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 231551531 ^ 3546320068))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 1382321187 ^ 2361995980))) {if ((!(x ^ 282168517 ^ 3464245802))) {if ((!(x ^ 2192729813 ^ 1545590842))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2191082580 ^ 1546975931))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 2139923248 ^ 2703302111))) {if ((!(x ^ 966434066 ^ 3879150589))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2199969733 ^ 1569546538))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}} else {if ((!(x ^ 4024702916 ^ 826911019))) {if (!(!(x ^ 1374103733 ^ 2404030042))) {if (!(!(x ^ 1054554011 ^ 3765864820))) {if ((!(x ^ 2121214007 ^ 2697107160))) {if (!(!(x ^ 639190625 ^ 4172609678))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 184319362 ^ 3562128237))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 3124227478 ^ 1687835513))) {if (!(!(x ^ 2268467113 ^ 1503375686))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 487072014 ^ 3282411489))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 1778763958 ^ 3030939225))) {if ((!(x ^ 2107025267 ^ 2738559388))) {if ((!(x ^ 3798927200 ^ 1019394447))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 1084567742 ^ 2651360849))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1760057322 ^ 3058034949))) {if ((!(x ^ 103462017 ^ 3632728686))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 1206993726 ^ 2573008337))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if ((!(x ^ 2847647765 ^ 1997936378))) {if (!(!(x ^ 3270906917 ^ 475769546))) {if (!(!(x ^ 2757576343 ^ 2062612600))) {if ((!(x ^ 3532864716 ^ 205423139))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2640864746 ^ 1137040133))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if (!(!(x ^ 1222082786 ^ 2524593677))) {if ((!(x ^ 1900494818 ^ 2951381261))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3637563965 ^ 108883154))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 2443909393 ^ 1325836286))) {if ((!(x ^ 2726744510 ^ 2083221329))) {if (!(!(x ^ 453138230 ^ 3316640217))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2257953791 ^ 1480072464))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 4293822674 ^ 558052925))) {if (!(!(x ^ 1590421899 ^ 2154190692))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2815420479 ^ 2036487888))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}}} else {if ((!(x ^ 3291433788 ^ 444790227))) {if (!(!(x ^ 803844713 ^ 4047768710))) {if ((!(x ^ 1756928816 ^ 3054839263))) {if ((!(x ^ 3809624728 ^ 1035992183))) {if (!(!(x ^ 3858611785 ^ 995098790))) {if (!(!(x ^ 3045369110 ^ 1797856249))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 2990973964 ^ 1827347171))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1550454880 ^ 2194124431))) {if ((!(x ^ 904453056 ^ 3947193647))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2866613836 ^ 1953542307))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 1650647943 ^ 3167706472))) {if (!(!(x ^ 1663123137 ^ 3180101678))) {if (!(!(x ^ 257577917 ^ 3522686290))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 894075202 ^ 3957800877))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1606312284 ^ 2165563315))) {if (!(!(x ^ 97247375 ^ 3680919136))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 4051859925 ^ 791660346))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if ((!(x ^ 2144253929 ^ 2707622150))) {if ((!(x ^ 1587801344 ^ 2148422639))) {if (!(!(x ^ 3932490641 ^ 885568894))) {if ((!(x ^ 1453976862 ^ 2281985009))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 4033461616 ^ 784597919))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 3171424803 ^ 1671800012))) {if (!(!(x ^ 2768229908 ^ 2052221179))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 1397403145 ^ 2380730598))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 4165523994 ^ 652567797))) {if (!(!(x ^ 147510756 ^ 3597101835))) {if (!(!(x ^ 3580285034 ^ 197881477))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3205504095 ^ 1639817904))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 236821857 ^ 3501204366))) {if ((!(x ^ 418719923 ^ 3327694428))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3165247282 ^ 1644456413))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}} else {if ((!(x ^ 129082341 ^ 3642498314))) {if (!(!(x ^ 2457635435 ^ 1288778884))) {if ((!(x ^ 3271971916 ^ 497805987))) {if (!(!(x ^ 2403033717 ^ 1368841370))) {if ((!(x ^ 487490145 ^ 3282254990))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 1556218482 ^ 2188360861))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 214793477 ^ 3529556970))) {if (!(!(x ^ 4280535274 ^ 562984453))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3710538648 ^ 59239799))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if (!(!(x ^ 89276695 ^ 3690987512))) {if (!(!(x ^ 1093417876 ^ 2676065659))) {if ((!(x ^ 1811327638 ^ 3042645113))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2715282221 ^ 2138723778))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 1214383092 ^ 2530196763))) {if (!(!(x ^ 631948370 ^ 4211571389))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2724579588 ^ 2093512683))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}} else {if ((!(x ^ 3997949848 ^ 820404599))) {if ((!(x ^ 1993693182 ^ 2826496273))) {if (!(!(x ^ 383049487 ^ 3363398112))) {if ((!(x ^ 1457676431 ^ 2286935648))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 3758027854 ^ 22235809))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 2205671616 ^ 1574592047))) {if ((!(x ^ 3861082223 ^ 948883072))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2811061906 ^ 2032195709))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}} else {if ((!(x ^ 2865915604 ^ 1954535483))) {if (!(!(x ^ 3385675164 ^ 392229747))) {if ((!(x ^ 1154745088 ^ 2591669743))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if (!(!(x ^ 2554070585 ^ 1183955158))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}} else {if ((!(x ^ 4064090557 ^ 747677522))) {if (!(!(x ^ 1622284959 ^ 3189744752))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }} else {if ((!(x ^ 3093924708 ^ 1724134795))) {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  } else {
    scanf("%u %u", (uint32_t*) buffer0, (uint32_t*) buffer1);
    keep_going = keep_going && !strncmp(buffer0, &password[0], 4) && !strncmp(buffer1, &password[4], 4);
  }}}}}}}}

  if (!keep_going) {
    printf("Try again.\n");
  } else {
    printf("Good Job.\n");
  }
}