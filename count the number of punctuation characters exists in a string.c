#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500];
    int i, j, length, c=0;

    gets(arr);
    length = strlen(arr);

    for (i=0; arr[i] != '\0'; i++)
    {
        if (arr[i]== ',' || arr[i] == '.' || arr[i] == '!' || arr[i]== '?' || arr[i] == ';')
            c++;
        }

    printf("The punctuation characters exists in the string is : %d\n", c);


    return 0;
}
