#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
        //Checking runtime input
        if (argc!=2)
        {
                printf("Pleae Type: caeser <key>\n");
                goto END;
        }

        //Initialization
        char *ptext=malloc(sizeof(char) + 256);
        char *ctext=malloc(sizeof(char) + 256);
        int k =atoi(argv[1]);

        //Scanning user input
        printf("plaintext: ");
        scanf("%[^\n]s", ptext);

        //Encryption
        for (int i = 0; i <= strlen(ptext); i++) {
                if (isalpha(ptext[i])) {
                  if (isalpha((char)(ptext[i]+k))) {
                    ctext[i]=(char)(ptext[i]+k);
                  }
                  else  {
                    ctext[i]=(char)(ptext[i]+k-26);
                  }
                }
                else{
                        ctext[i]=ptext[i];
                }
        }

        //Printing encrypted text
        printf("ciphertext: %s\n",ctext);


END:    return 0;
}
