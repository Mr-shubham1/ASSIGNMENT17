#include<stdio.h>
int main()
{
    int l,i;
    char a[40],t;
    printf("enter a string:\n");
    gets(a);
    for(l=0;a[l];l++);
    for(i=0;i<l/2;i++)
    {
       t=a[i];
       a[i]=a[l-i-1];
       a[l-i-1]=t;
    }
    printf("reverse of string is:\n");
    puts(a);
    return 0;
}