#include <stdio.h>

int main() {
    int start = 10; // Starting number
    int end = 100;  // Ending number

    // Loop to print squares of numbers from start to end
    for(int i = start; i <= end; i++) {
        printf("Square of %d is %d\n", i, i * i);
    }

    return 0;
}