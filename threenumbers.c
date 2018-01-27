#include<stdio.h>
void main()
{
    int p,q,r;
    scanf("%d %d %d",&p,&q,&r);
    if(p>q&&p>r)
    printf("p is greater value");
    
    else if(q>r)
    printf("q is greater value");
    
    else
printf("r is greater");
}
