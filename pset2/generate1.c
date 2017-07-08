#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int gen0(char *password_tryouts, char *character_set, int initial, int n, int len);
int main(void)
{

  char *character_set="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
  //char * character_set="01";
  int len=strlen(character_set);

  char *password_tryouts=calloc(5,sizeof(char));
  int max_length = 4;
  int count=0;

  int length=max_length;
//for (size_t cur = 0; cur < length; cur++) {
for (int n = 0; n < max_length; n++) {
  printf("length: %d\n", n);
  gen0(password_tryouts, character_set, 0, n, len);
}

//}
  //for (size_t i = 0; i < len; i++) {
    //password_tryouts[0]=character_set[i];
    //for (size_t j = 0; j < len; j++) {
      //password_tryouts[1]=character_set[j];
      //for (size_t k = 0; k < len; k++) {
        //password_tryouts[2]=character_set[k];
        //for (size_t l1 = 0; l1 < len; l1 ++) {
          //password_tryouts[3]=character_set[l1];
          //printf("%s\n", password_tryouts);
        //}
      //}
    //}
  //}


  return 0;
}



int gen0(char *password_tryouts, char *character_set, int initial, int n, int len){

  for (int i = 0; i < len; i++) {
    password_tryouts[initial]=character_set[i];
    if (initial<n) {
      gen0(password_tryouts, character_set, initial+1, n, len);
    }
    else{
      printf("%s\n", password_tryouts);
    }
  }

}
