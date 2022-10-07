
#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500], ch;
    int i, j, length, c=0;

    gets(arr);
    scanf("%c", &ch);

    length = strlen(arr);

    for (i=0; i<length; i++)
    {
        if (ch == arr[i])
            c++;


    }
    printf("the number of the index : %d\n", c);


    return 0;
}
