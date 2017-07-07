#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
        char str[256];
        char init[256];
        printf("Enter name\n");
        fgets(str, 100, stdin);
        printf("%s", str);
        printf("%c", toupper(str[0]));



        for (int i = 0; i < strlen(str); i++) {
          if (str[i] == ' ' && str[i+1] != '\0') {
            if (str[i+1] != ' ') {
              printf("%c", toupper(str[i+1]));
            }

          }
        }
      printf("\n");
}
