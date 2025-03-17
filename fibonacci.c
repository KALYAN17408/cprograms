#include <stdio.h>
void main() {
    int i,a,b,c,n;
    printf("enter the value of n:");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d%d",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    }
    
    
