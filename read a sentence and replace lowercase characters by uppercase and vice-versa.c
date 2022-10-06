#include <stdio.h>
#include <string.h>

int main ()
{
    char arr[500];
    int i, j, n, length;

    gets(arr);

    length = strlen(arr);

    for (i=0; i<length; i++)
    {
        if (arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] = arr[i]-32;
        }
        else if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i] = arr[i]+32;
        }

    }
    printf("After Case changed the string  is: %s\n", arr);


    return 0;
}
