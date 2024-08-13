#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int random_number = (rand() % 100) + 1;
    int guess_number;

    printf("Please Enter a Number: ");
    scanf("%d", &guess_number);

    while (guess_number != random_number) {
        if (guess_number > random_number) {
            printf("Too high. Try again.\n");
        } else {
            printf("Too low. Try again.\n");
        }
        scanf("%d", &guess_number);
    }

    printf("Congratulations! You guessed the number correctly.\n");
    printf("The number is %d\n", random_number);

    printf("Press Enter to exit...");
    getchar(); 
    getchar();  
    return 0;
}
