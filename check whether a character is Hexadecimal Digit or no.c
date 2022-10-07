#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[50];
    int n, i, j;

    //gets(arr);
    scanf("%d", &n);

    for (i=0; i<=9; i++)
    {
 if (n == i )
    {
        printf("The entered character is a hexadecimal digit");
    }
    else
    {
        printf("The entered character is not a hexadecimal digit");
    }
    }

    return 0;
}
