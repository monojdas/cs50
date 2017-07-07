#include <stdio.h>
int main(void)
{
  //Intialization
        long long int n;
        printf("Card number\n");
        scanf("%lli", &n);
        int count,a[50],sum,ftwo;
        count=0;
        sum=0;
  //Counting digits of Card Number
        while (n!=0) {
                a[count]=n%10;
                n=n/10;
                count++;
        }
  //Calculaton of first two digits of card number
        ftwo=a[count-1]*10+a[count-2];
  //Calculating chksum
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
                }
        }
    //Checking chksum
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
                                goto END;
                        }
                        else {
                                goto NEXT;
                        }
                case 51:
                case 52:
                case 53:
                case 54:
                case 55:
                        if (count==16) {
                                printf("Master Card\n");
                                goto END;
                        }
                        else {
                                goto NEXT;
                        }
                default:
                        goto NEXT;
                }
        }
NEXT:   if (a[count-1]==4)
        {
                switch(count)
                {
                case 16:
                case 14-1:
                        printf("Visa\n");
                        goto END;
                default:
                        printf("Not Valid\n");
                        goto END;
                        break;
                }


        }
        else
        {
                printf("Not Valid\n");
        }
END:    return 0;
}
