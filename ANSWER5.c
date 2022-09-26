#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    printf("enter a string:\n");
    gets(a);
    strlwr(a);
    printf("string in lowercase is:\n");
    puts(a);
    return 0;
}