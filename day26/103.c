#include<stdio.h>
int main()
{
    int balance=4500,amt,pin=1234,gpin,pin_attempts=3;
    int choice;
    start:
    printf("enter your pin:\n");
    scanf("%d",&gpin);
    
    if(gpin==pin){
        printf("\n1:check balance\n2:withdraw money\n3:deposit money\n4:change pin\n5:exit\n");
        
        printf("enter your choice:\n");
        scanf(" %d",&choice);
        switch(choice){
            case 1:
                printf("your balance is %d\n",balance);
                break;
            case 2:
            printf("you can withdraw money in multiples of 100 and maximum limit is 10000\n");
                printf("enter the amount to withdraw:\n");
                scanf("%d",&amt);
                if(amt<=balance&&amt%100==0&&amt<=10000){
                    balance=balance-amt;
                    printf("withdrawal successful! remaining balance is %d\n",balance);
                    return 0;
            }
                else{
                    printf("insufficient balance or invalid amount!\n");
                    goto end;
                }
            break;
            case 3:
                printf("you can deposit money in multiples of 100 and maximum limit is 10000\n");
                printf("enter the amount to deposit:\n");
                scanf("%d",&amt);
                if(amt%100!=0){
                    printf("invalid amount! please enter multiples of 100\n");
                    goto end;
                    break;
                }
                if(amt>10000){
                    printf("amount exceeds maximum limit!\n");
                    goto end;
                    break;
                }
                balance=balance+amt;
                printf("deposit successful! new balance is %d\n",balance);
                return 0;
                break;
                
            case 4:
                printf("enter new pin:\n");
                scanf("%d",&pin);
                printf("pin changed successfully! login again\n");
                goto start;
                break;
            case 5:
                goto end;
                break;
            default:
                printf("invalid choice!\n");
                goto start;
        }
      
        
    }
    else{
        pin_attempts--;
        if(pin_attempts>0){
            printf("incorrect pin! you have %d attempts left\n",pin_attempts);
            goto start;
        }
    }
    
    end:
    printf("you are exited from the program!\n");
    printf("press 0 to continue and 1 to exit:\n");
    scanf("%d",&choice);
    if(choice==0){
        pin_attempts=3;
        goto start;
    }
    else{
        printf("you are exited from the program!\n");
        return 0;
    }
    printf("thank you for using our service!\n");
    return 0;
}