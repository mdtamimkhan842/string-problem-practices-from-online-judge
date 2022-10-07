#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i,length, j;

    gets(arr);
    length = strlen(arr);
    for (i=0; i<length; i++)
    {
        if (arr[i] >= 'A' && arr[i] <= 'Z')
        {
            arr[i]=arr[i]+32;
        }
    }

    printf("%s\n", arr);



    return 0;
}
