#include <stdio.h>

int version = 1;

int main() {
    printf("Simple C Calculator\n");
    printf("Version %i\n", version);

    char userOperation;

    //Ask the user the for the operation
    printf("What operation would you like to perform?\n");
    printf("Addition: \t +\n");
    printf("Subtraction: \t -\n");
    printf("Multiplication: \t * \n");
    printf("Division: \t /\n");
    printf("[+,-,*,/]: ");
    scanf("%c", &userOperation);

    printf("You chose %c\n", userOperation);
}
