#include<stdio.h>
#include<string.h>
int main()
{
int l=0,r;
char temp,s[100];
printf("enter the string:\n ");
scanf("%s",s);
r=strlen(s)-1;
while(r>l){
    temp=s[l];
    s[l]=s[r];
    s[r]=temp;
    r--;
l++;
}
printf("%s",s);
return 0;
}