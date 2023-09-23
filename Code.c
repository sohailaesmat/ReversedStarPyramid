#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t = 0, s = 9;
    for (int i = 5; i > 0 ; i--)
    {
        for (int j = 0; j < t; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1 ; j++)
        {
            if(i==0)
            {
               printf("*");
            }
            else
            {
               for (int k = s ; k > 0; k--)
                {
                   printf("*");  
                }
                s -= 2;
                break;
            }
        }
        printf("\n");
        t++;
    }
    

    return (0);
}
