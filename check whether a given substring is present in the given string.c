#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500], ch[500];
    int i, j, n, m;

    gets(arr);
    gets(ch);

    int length1 = strlen(arr);
    int length2 = strlen(ch);

    for (m=0; m<length1; m++)
    {
        if (arr[m] == ' ' && arr[m] != '0')
        {
            n++;
        }
    }

    for (i=0 ; i<m; i++)
    {
        for (j=0; j<1; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
    }
    if (ch == length2)
    {
        printf("The substring is not exists in the string");
    }
    else
    {
        printf("The substring is not exists in the string");
    }

    return 0;
}
