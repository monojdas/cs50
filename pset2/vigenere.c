#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
        //Checking runtime input
        if (argc!=2)
        {
                printf("Please Type: caeser <key>\n");
                goto END;
        }

        for (int i = 0; i < strlen(argv[1]); i++) {
        if (isalpha(argv[1][i])) {

        }
        else{
          printf("check <key> type\n");
          goto END;
        }
        }

        int key[256];
        for (int j = 0; j < strlen(argv[1]); j++) {
          if (isupper(argv[1][j])) {
            key[j]=argv[1][j]-64-1;
          }
          else{
            key[j]=argv[1][j]-96-1;
          }
        }

        printf("decip_key: ");
        for (int l = 0; l < strlen(argv[1]); l++) {
          printf("%d ", key[l]);
        }
        printf("\n");
        //Initialization
        char *ptext=malloc(sizeof(char) + 256);
        char *ctext=malloc(sizeof(char) + 256);

        //Scanning user input
        printf("plaintext: ");
        scanf("%[^\n]s", ptext);

        int m;
        m=0;

        //Encryption
        for (int k = 0; k <= strlen(ptext); k++) {
                if (isalpha(ptext[k])) {
                  if (isalpha((char)(ptext[k]+key[m]))) {
                    ctext[k]=(char)(ptext[k]+key[m]);
                    printf("%c %d %c\n",ptext[k] ,key[m], ctext[k]);
                    m=m+1;
                    if (m>=strlen(argv[1])) {
                      m=0;
                    }
                    printf("m: %d\n", m);
                  }
                  else  {
                    ctext[k]=(char)(ptext[k]+key[m]-26);
                    printf("%c %d %c\n",ptext[k] , key[m, ctext[k]]);
                    m=m+1;
                    if (m>=strlen(argv[1])) {
                      m=0;
                    }
                    printf("m: %d\n", m);
                  }
                }
                else{
                        ctext[k]=ptext[k];
                }
        }

        //Printing encrypted text
        printf("ciphertext: %s\n",ctext);


END:    return 0;
}
