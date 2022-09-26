#include<stdio.h>
int main()
{
    int i,count=0;
   char a[40];
   printf("enter a string:\n");
   gets(a);
   for(i=0;a[i];i++)
   {
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
     count++;
   } 
   printf("no. of vovels in string is %d",count);
   return 0;
}