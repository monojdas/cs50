#include <stdio.h>
#include <math.h>


int main(void)
{
        float amt;
        int cent, count;
        int a[3]={25,10,5};
        do
        {
                printf("How much ");
                scanf("%f", &amt);
        } while (amt < 0);

        cent = (int)round(amt*100.00);
        count = 0;
        for (int i = 0; i < 3; i++)
        {
                count = count + cent/a[i];
                cent = cent%a[i];
        }

        count = count + cent;
        printf("%d\n",count );
}
