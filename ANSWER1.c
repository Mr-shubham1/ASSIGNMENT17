#include<stdio.h>
int main()
{
    int i;
    char a[10];
    printf("enter a string:\n");
    fgets(a,10,stdin);
    for(i=0;a[i];i++);
    printf("length is %d",i-1);
   
    
    return 0;
}