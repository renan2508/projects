#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void win(){
    printf("You won!");
}
void tie(){
    printf("That was a tie!");
}
void loss(){
    printf("You lost!");
}
int main(){
    int choice, PCNumberGuess;
    srand(time(NULL));
    PCNumberGuess = rand() % 3 +1;
    printf("Choose your fighter:\n [1] Rock\n [2] Paper\n [3] Scissors\n");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            if(PCNumberGuess == 1){
                tie();
            } else if(PCNumberGuess == 2){
                loss();
            } else{
                win();
            }
            break;
        case 2:
            if(PCNumberGuess == 2){
                tie();
            } else if(PCNumberGuess == 3){
                loss();
            } else{
                win();
            }
            break;
        case 3:
            if(PCNumberGuess == 3){
                tie();
            } else if(PCNumberGuess == 1){
                loss();
            } else{
                win();
            }
            break;
        default:
            printf("Something went very wrong.");
    }
    return 0;
}
