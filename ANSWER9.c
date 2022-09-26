#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,j;
    char a[40],t;
    printf("enter a string:\n");
    gets(a);
    l=strlen(a);
    for(i=0;i<=l-2;i++)
    {
        
      for(j=i+1;j<=l-1;j++)
      {
         if(a[i]>a[j])
          {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
          }
        
      }
     
    }
    printf("sorted string is: %s",a);
    
    return 0;
}