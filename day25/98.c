#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,found;
    printf("enter first string\n");
    fgets(str1,sizeof(str1),stdin);  
    printf("enter second string\n");
    fgets(str2,sizeof(str2),stdin);
    
    printf("common characters are:\n");
    for(i=0;str1[i]!='\0';i++){
        found=0;
        for(j=0;j<i;j++){
        if(str1[i]==str1[j]){
            found=1;
            break;
        }    
        }
if(!found){
    for(j=0;str2[j]!='\0';j++){
        if(str1[i]==str2[j]){
            printf("%c",str1[i]);
            break;
        }
    }
}
    }
    return 0;
}