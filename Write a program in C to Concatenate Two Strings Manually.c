#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500], arr2[500];
    char  max[0] = 0, min[0] = 0;
    int i,j, length, c=0;
    gets(arr);


    length = strlen(arr);


    for (i=0; i<length; i++)
    {
        if (arr[i] == ' ' && arr[i] != '0')
        {
            c++;
        }
    }
    for (i=0; i<c; i++)
    {

        if (max[i] > max[0])
        {
            max[0] = max[i];

        }
        if (max[i] < min[0])
        {
            min[0] = max[i];
        }

    }

    printf("The largest word is: %s\n", max[0]);
    printf("The Smallest word is: %s\n", min[0]);


    return 0;
}
