/*The sum of the squares of the first ten natural numbers is,
385

The square of the sum of the first ten natural numbers is,
3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    int sum_of_squares = 0;
    int square_of_sum = 0;
    int i;
    for (i = 1; i <= 100; i++) {
        sum_of_squares += (i * i);
    } 

    int temp = 100*101/2;
    square_of_sum = temp * temp;
    printf("%d\n", square_of_sum - sum_of_squares);
}
