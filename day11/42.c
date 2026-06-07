   #include<stdio.h>
   int max(int,int);
   int main()
   {
    int num1,num2,maximum;
    printf("enter the numbers:");
    scanf("%d%d",&num1,&num2);
    maximum=max(num1,num2);
    printf("the maximum of two numbers is %d",maximum);
    return 0;
   }
   int max(int a,int b)
   {
  if(a>b)
  return a;
  else
  return b;
   }