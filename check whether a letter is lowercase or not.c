#include <stdio.h>
#include <string.h>
int main ()
{
    char ch;
    int i, j, n;


    scanf("%c", &ch);


    if (islower(ch))
    {
        printf("The entered letter is a lowercase letter");
    }
    else
    {
        printf("The entered letter is not a lowercase letter");
    }




    return 0;
}
