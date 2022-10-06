#include <stdio.h>
#include <string.h>
int main ()
{
    char arr1[500], arr2[500], k, length2, length1, i, j;


    gets(arr1);
    gets(arr2);

    for (i=0; i<length1-1; i++)
    {
        if (arr1[i] == ' ')
            i++;
    }

    for (j=0; j<length2-1; j++,i++)
    {
        arr1[i] = arr2[j];
    }

     k = strlen(arr1);
    for (i=0; i<k; i++)
    {
        printf("%c", arr1[i]);
    }
    // printf("\n");

    return 0;
}
