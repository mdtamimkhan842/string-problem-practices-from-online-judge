//my brain has no clear at this time, because at as moment my brain abnormal
#include <stdio.h>
#include <string.h>
int main ()
{
    char arr[500], ch[500][500];
    int i, j=0, k=0, max, min, m=0, n=0;


    gets(arr);//It is a string with smallest and largest word.


    for (i=0; arr[i] != '\0'; i++)
    {
        if (arr[i] == ' ' && arr[i] != '0')//9
        {
            if (ch[j][k] = '\0')
            {
                k++;

                j=0;
            }
            else
            {
                ch[j][k] = arr[i];
                j++;
            }
        }
    }
    ch[j][k] = '\0';
    max = strlen(ch[0]);
    min = strlen(ch[0]);

    for (i=0; i<=k; i++)
    {
        if (max<strlen(ch[i]))
        {
            m=i;
        }
        if (min>strlen(ch[i]))
        {
            n=i;
        }
    }


    printf("The largest word is : %s\n", ch[m]);
    printf("The smallest word is : %s\n", ch[n]);


    return 0;
}
