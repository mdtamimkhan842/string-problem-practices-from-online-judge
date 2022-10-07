#include <stdio.h>
int main ()
{
    char arr[500];
    int i, c=0;
    gets(arr);

    for (i=0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '.' || arr[i] == '?' || arr[i] == '!' )
            break;
    }
    printf("%s\n", arr);

    return 0;
}
