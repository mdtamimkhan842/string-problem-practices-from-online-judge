#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, length, temp;

    gets(arr);

    length = strlen(arr);

    for (i=0; arr[i] != '\0'; i++)//w3resource.com
    {
        if (!(arr[i] >= 'a' && arr[i] <= 'z') && !(arr[i] >= 'A' && arr[i] <= 'Z') && !(arr[i] == '\0'))
        {
            for (j=i; arr[j] != '\0'; j++)
            {
                arr[j] = arr[j + 1];

            }
        }
    }
        printf("%s\n", arr);

        return 0;
    }
