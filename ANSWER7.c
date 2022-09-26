#include<stdio.h>
int main()
{
    int i,al=0,d=0,s=0;
    char a[40];
    printf("enter a string:\n");
    gets(a);
    for(i=0;a[i];i++)
    {
        if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
        al++;
        else if((a[i]>='0')&&(a[i]<='9'))
        d++;
        else
        s++;
    }
    printf("no. of alphabets:%d\n no. of digits:%d\n no. of special character: %d",al,d,s);
    return 0;
}