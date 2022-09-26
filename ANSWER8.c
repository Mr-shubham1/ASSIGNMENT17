#include<stdio.h>
#include<string.h>
int main()
{
    char a[40],b[40];
    printf("enter a string:\n");
    gets(a);
    strcpy(b,a);
    puts(b);
    return 0;
}