#define _XOPEN_SOURCE
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <stdlib.h>

int gen(char *password_tryouts, char *character_set, char *argv1, char *salt, int initial, int n, int len);
int main(int argc, char *argv[])
  {
        //Checking runtime input
        if (argc!=2)
          {
                printf("Please Type: crack <key>\n");
                return 1;
          }

        //Initialization
        char *character_set="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        int len=strlen(character_set);
        char *password_tryouts=calloc(5,sizeof(char));
        int max_length = 4;
        char *salt =calloc(2,sizeof(char));
        strncpy(salt, argv[1], 2);
        int found;

        for (int n = 0; n < max_length; n++)
          {
                found=gen(password_tryouts, character_set, argv[1], salt, 0, n, len);
          }

        if (found ==1)
          {
            printf("Not Found\n");
          }
        return 0;
  }


int gen(char *password_tryouts, char *character_set, char *argv1, char *salt, int initial, int n, int len)
  {
        for (int i = 0; i < len; i++)
          {
                password_tryouts[initial]=character_set[i];
                if (initial<n)
                  {
                        gen(password_tryouts, character_set, argv1, salt, initial+1, n, len);
                  }
                else
                  {
                        if(strcmp(crypt(password_tryouts, salt), argv1)==0)
                          {
                                printf("%s\n", password_tryouts);
                                exit(0);
                          }
                  }
          }
        return 1;
    }
