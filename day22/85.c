#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string:");
    scanf("%s",str);
    int l=0,count=1;
    int r=strlen(str)-1;
    while(r>l){
        if(str[l]!=str[r]){
         count=0;   
        }
        l++;
        r--;
    }
    if(count==0){
        printf("string is not pallindrome:");
    }
    else{
        printf("string is pallindrome");
    }
    return 0;
}