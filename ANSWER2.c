#include<stdio.h>
int main()
{
    int i,count=0;
    char a[40],b;
    printf("enter a string:\n");
    gets(a);
    printf("enter a character:\n");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {
      if(a[i]==b)
      count++;
    }
    printf("%c comes %d times in string %s",b,count,a);
    return 0;
}