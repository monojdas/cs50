#include <stdio.h>

int get_positive_int();

int main(void)
{
        int n, b;
        printf("Height: ");
        n=get_positive_int();
        for (int i = 0; i < n; i++)
        {
                for (int j = 0; j < n-i-1; j++)
                {
                        printf(" ");
                }
                for (int k = 0; k < 2 + i; k++)
                {
                        printf("#");
                }
                printf(" ");
                for (int l = 0; l < 2 + i; l++)
                {
                        printf("#");
                }
                printf("\n");
        }

}


int get_positive_int(void)
{
        int n;
        scanf("%d",  &n);
        while (n<=0)
        {
                printf("Retry\n");
                printf("Height: ");
                scanf("%d", &n);
        }
        return n;
}
