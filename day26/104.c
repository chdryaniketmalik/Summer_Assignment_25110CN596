#include<stdio.h>
int playquiz();
int main()
    {
    printf("-------welcome to the quiz game!-------\n");
    printf("1:follow the instructions to play the game.\n");
    printf("2:you will be asked 5 questions and you have to answer them.\n");
    printf("3:each question carries 5 mark and there is no negative marking.\n");
    printf("4:you can answer the questions by entering the option a,b,c or d.\n");
    printf("5:you have to score at least 15 marks to win the game.\n");
    printf("press s to start the quiz:\n");
    char start;
    scanf(" %c",&start);
    if(start=='s'||start=='S'){
       int result = playquiz();
       printf("your final score is %d\n", result);
         if(result>=15){
                printf("congratulations! you won the quiz!\n");
                }
                else{
                 printf("sorry! you lost the quiz!\n");
                 }
    
    }
    printf("\t");
    return 0;
}
int playquiz()
    {
    int score=0;
    char answer;
    printf("1. what is the capital of india?\n");
    printf("a.delhi\nb.mumbai\nc.kolkata\nd.chennai\n");
    printf("enter your answer:\n");
    scanf(" %c",&answer);
    if(answer=='a'||answer=='A'){
        score+=5;
        printf("correct answer! your score is %d\n",score);
        }
        else{
            printf("wrong answer! your score is %d\n",score);
            }   
        
        printf("2. what is the capital of france?\n");
        printf("a.london\nb.paris\nc.berlin\nd.rome\n");
        printf("enter your answer:\n");
        scanf(" %c",&answer);
        if(answer=='b'||answer=='B'){
            score+=5;
            printf("correct answer! your score is %d\n",score);
            }
            else{
                printf("wrong answer! your score is %d\n",score);
                }  
                printf("3. what is the capital of japan?\n");
                printf("a.osaka\nb.kyoto\nc.tokyo\nd.hiroshima\n"); 
                printf("enter your answer:\n");
                scanf(" %c",&answer);
                if(answer=='c'||answer=='C'){
                    score+=5;
                    printf("correct answer! your score is %d\n",score);
                    }
                    else{
                        printf("wrong answer! your score is %d\n",score);
                        }   
                    printf("4. what is the capital of australia?\n");
                    printf("a.sydney\nb.melbourne\nc.canberra\nd.perth\n");
                    printf("enter your answer:\n");
                    scanf(" %c",&answer);
                    if(answer=='c'||answer=='C'){
                        score+=5;
                        printf("correct answer! your score is %d\n",score);
                        }
                        else{
                            printf("wrong answer! your score is %d\n",score);
                            }   
                            printf("5. what is the capital of canada?\n");
                            printf("a.toronto\nb.vancouver\nc.ottawa\nd.montreal\n");
                            printf("enter your answer:\n");
                            scanf(" %c",&answer);
                            if(answer=='c'||answer=='C'){
                                score+=5;
                                printf("correct answer! your score is %d\n",score);
                                }
                                else{
                                    printf("wrong answer! your score is %d\n",score);
                                    }   
                                    return score;
                                }





        
    