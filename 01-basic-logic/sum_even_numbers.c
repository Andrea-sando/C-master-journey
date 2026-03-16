
#include <stdio.h>

int main() {
    int i, number, sum = 0;

    // Ask the user to enter a number
    printf("Tell me the number:\n");
    scanf("%d", &number);

    // Loop from 0 up to the entered number
    for(i = 0; i <= number; i++){
        // If i is even, add it to sum
        if(i % 2 == 0){
            sum = sum + i;
        }
    }

    // Print the result
    printf("The sum of even numbers from 0 to %d is: %d\n", number, sum);

    return 0;
}
