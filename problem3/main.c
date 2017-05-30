/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/

#include <stdio.h>

#define QUERY_NUM 600851475143

int main(int argc, char *argv[]) {
    long remaining = QUERY_NUM;
    long ans = 2;

    while (remaining%ans == 0) {
        remaining /= ans;
    }

    ans -= 1;
    while (remaining > 1) {
        ans += 2;
        while (remaining%ans == 0) {
            remaining /= ans;
        }
    }
    fprintf(stdout, "%ld\n", ans);
    return 0;
}
