 #include<stdio.h>
   #include<stdlib.h>
   int main(){
int choice,number,attempts,min=1,max,chances,guess;
do{
 printf("--welcome to guessing number game--\n");
 printf("1 for easy(1 to 50,7 chances)\n");
  printf("2 for medium(1 to 100,5 chances)\n");
   printf("3 for hard(1 to 200,3 chances)\n");
   printf("4 for exit!\n");
   printf("choose your difficulty level:\n");  
   scanf("%d",&choice);
  switch(choice) { 
    case 1:
    max=50,chances=7;
    break;
    case 2:
    max=100,chances=5;
    break;
    case 3:
    max=200,chances=3;
    break;
    case 4:
    printf("exiting the game!\n");
    return 0;
    default:
     printf("invalid choice!\n");
     continue;
        }
        number=(rand()%max)+1;
        attempts=0;
        printf("\n I have chosen %d to %d number\n",min,max);
        printf("you have %d chances\n",chances);

    while(attempts<chances){
     printf("please enter the guessing number(or -1 to quit)\n");
     scanf("%d",&guess);
     if(guess==-1){
        printf("you are quitting the game! correct number is %d",number);
     }

        if(guess==number){

            printf("Correct! guessing number is %d\n",number);
        }
        else if (guess<number){
            printf("too low! try again!");
        }
        else{
            printf("too high! try again!");
            
        }
        attempts++;
        if(attempts==chances){
            printf("game over! correct number is %d\n",number);
        }
    }
}
    while(choice!=4);
        
        return 0;
    }
    