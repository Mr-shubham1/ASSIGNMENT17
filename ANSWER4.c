#include<stdio.h>
#include<string.h>
int main()
{
    char a[40];
    printf("enter a string:\n");
    gets(a);
    printf("string in uppercase:\n");
    strupr(a);
    puts(a);
    return 0;
}