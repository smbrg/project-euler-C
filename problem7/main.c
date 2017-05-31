/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pair {
    int is_prime;
    int num;
} Pair;

int main(int argc, char *argv[]) {
    int num_candidates = 1000000;
    int i;
    Pair **candidates;
    candidates = (Pair **) malloc(sizeof(Pair *) * num_candidates);

    for (i = 2; i < num_candidates; i++) {
        candidates[i] = (Pair *) malloc(sizeof(Pair));
        candidates[i]->is_prime = 1;
        candidates[i]->num = i;
    }

    i = 2;
    int j;
    int counter = 0;
    for (i = 2; i < num_candidates; i++) {
        if (candidates[i]->is_prime) {
            counter++;
            if (counter == 10001) {
                printf("%d is the %dth prime\n", i, counter);
                break;
            }
            for (j = i + i; j < num_candidates; j += i) { //all multiples of this prime are not primes
                candidates[j]->is_prime = 0;
            }
        }
    }
    for (i = 2; i < num_candidates; i++) {
        free(candidates[i]);
    }
    free(candidates);
}
