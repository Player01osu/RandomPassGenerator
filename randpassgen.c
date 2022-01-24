#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Var caps only
char *randstring2(size_t length) {

  static char charset[] =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// All caps only
char *randstring4(size_t length) {

  static char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// No caps only
char *randstring8(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyz";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Numbers only
char *randstring16(size_t length) {

  static char charset[] = "0123456789";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Numbers + var caps
char *randstring18(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "0123456789";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Numbers + all caps
char *randstring20(size_t length) {

  static char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "0123456789";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Numbers + no caps
char *randstring24(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyz"
                          "0123456789";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Symbols only
char *randstring32(size_t length) {

  static char charset[] = ",.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Symbols + var caps
char *randstring34(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          ",.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Symbols + all caps
char *randstring36(size_t length) {

  static char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          ",.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Symbols + no caps
char *randstring40(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyz"
                          ",.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Numbers + symbols
char *randstring48(size_t length) {

  static char charset[] = "0123456789,.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// Var caps + numbers + symbols
char *randstring50(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "0123456789,.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// All caps + numbers + symbols
char *randstring52(size_t length) {

  static char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                          "0123456789,.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

// No caps + numbers + symbols
char *randstring56(size_t length) {

  static char charset[] = "abcdefghijklmnopqrstuvwxyz"
                          "0123456789,.-#!@$^><`~'?!%%*+-=_/)(&";
  char *randomString = NULL;

  if (length) {
    randomString = malloc(sizeof(char) * (length + 1));

    if (randomString) {
      for (int n = 0; n < length; n++) {
        int key = rand() % (int)(sizeof(charset) - 1);
        randomString[n] = charset[key];
      }

      randomString[length] = '\0';
    }
  }

  return randomString;
}

int main() {
  srand(time(NULL));
  system("clear");
  printf("Welcome to the epic random password generator \n");
  printf("\n============================================================= \n");
  printf(" !! Do not use to actually generate your passwords, lmao !!\n");
  printf("============================================================= \n");

  // assign random options choosen to power of 2
  int randOptPower1 = 2;
  int randOptPower2 = 0;
  int randOptPower3 = 0;
  int randOptPower4 = 16;
  int randOptPower5 = 32;

  // draw empty space or x
  char varCaps[] = "x ";
  char allCaps[] = "x ";
  char noCaps[] = "x ";
  char numbersO[] = "x ";
  char symbolsO[] = "x ";

  // 0 == enabled, 1 == disabled
  int varcToggle = 0;
  int allcToggle = 1;
  int nocToggle = 1;
  int numToggle = 0;
  int symToggle = 0;

  // randChoose determines 1. which step user is on, 2. whether to break loop
  int randChoose = 0;
  while (randChoose <= 3) {
    while (randChoose == 0) {
      int randOpt;
      printf("\nPlease choose randomization options: \n");
      printf("1) Variable caps [%c], 2) All caps [%c], 3) No caps [%c], 4) "
             "Numbers [%c], 5) Symbols [%c], 6) Next Option: ",
             varCaps[varcToggle], allCaps[allcToggle], noCaps[nocToggle],
             numbersO[numToggle], symbolsO[symToggle]);

      scanf("%d", &randOpt);

      // long ass if statement determine if option choosen was valid and toggle
      // option
      if (randOpt == 1) {
        varcToggle = !varcToggle;
        if (varcToggle == 1) {
          randOptPower1 = 0;
        } else {
          randOptPower1 = 2;
        }
        // printf("%d", varcToggle);
        allcToggle = 1;
        nocToggle = 1;
        randOptPower2 = 0;
        randOptPower3 = 0;
      } else if (randOpt == 2) {
        allcToggle = !allcToggle;
        if (allcToggle == 1) {
          randOptPower2 = 0;
        } else {
          randOptPower2 = 4;
        }
        varcToggle = 1;
        nocToggle = 1;
        randOptPower1 = 0;
        randOptPower3 = 0;
      } else if (randOpt == 3) {
        nocToggle = !nocToggle;
        if (nocToggle == 1) {
          randOptPower3 = 0;
        } else {
          randOptPower3 = 8;
        }
        varcToggle = 1;
        allcToggle = 1;
        randOptPower1 = 0;
        randOptPower2 = 0;
      } else if (randOpt == 4) {
        numToggle = !numToggle;
        if (numToggle == 1) {
          randOptPower4 = 0;
        } else {
          randOptPower4 = 16;
        }
      } else if (randOpt == 5) {
        symToggle = !symToggle;
        if (symToggle == 1) {
          randOptPower5 = 0;
        } else {
          randOptPower5 = 32;
        }
      } else if (randOpt == 6) {
        randChoose = 1;
      } else {
        printf("Please choose a valid option (1-6): \n");
      }
      if (varcToggle + allcToggle + nocToggle + numToggle + symToggle == 5) {
        printf("\n \nWarning: At least 1 option needs to be ticked! \n \n");
      }
    } // End while loop randChoose 0
    // user input pass length
    int lengOpt = 20;
    while (randChoose == 1) {
      printf("\nPlease give password length (min 8, max 40; default: 20; "
             "Choose 727 to go back): ");
      scanf("%d", &lengOpt);
      if (lengOpt >= 8 && lengOpt <= 40 && lengOpt != 727) {
        randChoose = 2;
      } else if (lengOpt == 727) {
        // randChoose == 0 satisfies condition to loop to first step
        randChoose = 0;
      }
    } // End while loop lengOpt
    // generate rand pass based on user input
    while (randChoose == 2) {
      int finalPassPower = (randOptPower1 + randOptPower2 + randOptPower3 +
                            randOptPower4 + randOptPower5);
      /* finalPassPower refers to the value given when adding all the
         randOptPower, and calling the respective function*/
      if (finalPassPower == 2) {
        system("clear");
        printf("%s", randstring2(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 4) {
        system("clear");
        printf("%s", randstring4(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 8) {
        system("clear");
        printf("%s", randstring8(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 16) {
        system("clear");
        printf("%s", randstring16(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 18) {
        system("clear");
        printf("%s", randstring18(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 20) {
        system("clear");
        printf("%s", randstring20(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 24) {
        system("clear");
        printf("%s", randstring24(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 32) {
        system("clear");
        printf("%s", randstring32(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 34) {
        system("clear");
        printf("%s", randstring34(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 36) {
        system("clear");
        printf("%s", randstring36(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 40) {
        system("clear");
        printf("%s", randstring40(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 48) {
        system("clear");
        printf("%s", randstring48(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 50) {
        system("clear");
        printf("%s", randstring50(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 52) {
        system("clear");
        printf("%s", randstring52(lengOpt));
        randChoose = 4;
      } else if (finalPassPower == 56) {
        system("clear");
        printf("%s", randstring56(lengOpt));
        randChoose = 4;
      } else {
        printf("you must have at least ONE option ticked");
        randChoose = 0;
      }
    }
  }
}
