#include <stdio.h>

int main() {
    printf("     Sun   Mon  Tue   Wed  Thu   Fri   Sat\n  -------------------------------------------------------------------\n                                           1");
    int i;
    for (i = 2; i <= 31; i++)
    {
      if(i<10)
      {
          printf("       %d", i);
          if (i % 7 == 3)
              printf("\n");
      }

      else
      {
          printf(" %6d", i);
          if (i % 7 == 3)
              printf("\n");
      }

        }


        return 0;
    }

