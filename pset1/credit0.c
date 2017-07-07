#include <stdio.h>
int main(void)
{
  long long int n;
  printf("Card number\n");
  scanf("%lli", &n);
  printf("%lli\n", n);
  int count,a[50],sum,ftwo;
  count=0;

  while (n!=0) {
    a[count]=n%10;
    n=n/10;
    count++;
  }
  printf("count= %d\n",count);
  for (int j = count-1; j >= 0 ; j--) {
    printf("%d",a[j]);
  }
  printf("\n");
  ftwo=a[count-1]*10+a[count-2];
  printf("ftwo= %d\n",ftwo);
  sum=0;
  for (int k = 0; k < count; k++) {
    if (k%2==0) {
      sum=sum+a[k];
    }
    else {
      if (a[k]*2<10) {
        sum=sum+a[k]*2;
      }
      else{
        sum=sum+(a[k]*2)/10+(a[k]*2)%10;
      }
      printf("%d\n",sum);
    }
  }
  printf("%d\n",sum);

  if (sum%10!=0) {
    printf("Not Valid\n");
    goto END;
    }
  else {
      switch (ftwo) {
        case 34:
        case 37:
          if (count==15) {
            printf("Amex\n");
          }
          else {
            goto NEXT;
          }
          break;
        case 51:
        case 52:
        case 53:
        case 54:
          if (count==15) {
            printf("Master Card\n");
          }
          else {
            goto NEXT;
          }
          break;
        default:
          goto NEXT;
      }
    }
NEXT: if (a[count-1]==4) {
  if (count==16 || count==14-1) {
  printf("Visa\n");
}
}
else{
  printf("Not Valid\n");
}
END: return 0;
}
