#include<stdio.h>
main()
{
    int a,b,c;
    printf("Enter three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        printf("Smallest number is=%d",a);
        else
        printf("Smallest number is=%d",c);
    }
    else
    {
        if(b<c)
        printf("Smallest number is=%d",b);
        else
        printf("Smallest number is=%d",c);
    }
}
