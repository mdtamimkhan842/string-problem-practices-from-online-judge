//answer wrong , i will try next day for the right answer


#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500], ch[50];
    int i, j, length, c=0;

    gets(arr);
    gets(ch);

    length = strlen(arr);

    for (i=0, j=0; i<length; i++, j++)
    {
        if (arr[i] == 'i')
        {

            c++;
        }
    }

    printf("the number of the index : %d\n", c);


    return 0;
}
