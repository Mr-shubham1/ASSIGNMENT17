#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,j,count;
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
    for(i=0;i<=l-2;i=j)
    {
        count=1;
       for(j=i+1;j<=l-1;j++)
       {
        if(a[i]==a[j])
        {
        count++;
        continue;
        }
        else
        break;
       }
       printf("frequency of %c is %d\n",a[i],count); 
    }
    if(a[l-1]!=a[l-2])
    printf("frequency of %c is 1",a[l-1]);
    return 0;
}