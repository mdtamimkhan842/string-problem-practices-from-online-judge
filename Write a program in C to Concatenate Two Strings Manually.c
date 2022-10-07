#include <stdio.h>

int main ()
{
    char arr[500], arr2[500];

    int i,j;
    gets(arr);
    gets(arr2);


    for (i=0; arr[i] != '\0'; i++)
    {

    }
    for (j=0; arr2[j] != '\0'; j++, i++)
    {
        arr[i] = arr2[j];
    }
    arr[i] = '\0';

   printf("%s \n", arr);

    return 0;
}
