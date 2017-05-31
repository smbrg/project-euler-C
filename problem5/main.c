/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?*/

#include <stdio.h>

int main(int argc, char *argv[]) {
    //it's the lcm of all of the numbers from 1 to 20
    //this solution is boring and faster than programming it in this case
    //to extend this, find the prime factorization of each number from 1 to 20
    //then find the greatest exponent for each prime in each prime factorization
    //then multiply each of these primes to their greatest exponents together.
    int result = 2 * 3 * 2 * 5 * 7 * 2 * 3 * 11 * 13 * 2 * 17 * 19;
    printf("%d\n", result);
}
