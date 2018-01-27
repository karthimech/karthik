#include<stdio.h>
void main()
{
char s[6]={'a','e','i','o','u'};
char g;
scanf("%c",&g);
if(s[0]==g||s[1]==g||s[2]==g||s[3]==g||s[4]==g)
printf("\n the given alphabet is vowel");
else
printf("\n the given alphbet is consonant");
}
