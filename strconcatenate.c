#include"header.h"
#include<stdio.h>
#include<string.h>
void strconcatenate()
{
char s1[30];
char s3[30];
printf("Enter string 2 :");
fgets(s3,30,stdin);
printf("String 1 : %s",s1);
printf("String 2 : %s",s3);
strcat(s1,s3);
printf("After concatenate:%s\n",s1);
}
