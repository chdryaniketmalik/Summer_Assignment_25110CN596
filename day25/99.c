#include<stdio.h>
#include<string.h>
int main()
{
    char names[6][20];
    int i,n;
    printf("enter number of names:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",names[i]);
    }
    printf("the names are:\n");
    for(i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
printf("the sorted names are:\n");
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                char temp[20];
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
    for(i=0;i<n;i++){
        printf("%s\n",names[i]);
    }
    return 0;
}