#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n>8 || n<1);

    //for each row
    for (int i = 0; i < n; i++)
    {
        // for the space
        for (int k=0;k<n-i;k++)
        {
            printf(" ");
        }
        //for each column
        for (int j = 0 ; j <=i; j++)
        {
            printf("#");
        }
//for middle space
        printf("  ");
//for right pyramid
        for (int l = 0 ; l <=i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}
