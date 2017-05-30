#include <stdio.h>

#define MAX 4000000

int main(int argc, char *argv[]) {
    long temp;
    long cur = 1;
    long prev = 0;
    long result = 0;
    
    while (cur < MAX) {
        if (cur%2 == 0) {
            result += cur; 
        }
        temp = cur;
        cur += prev;
        prev = temp;
    }
    fprintf(stdout, "%ld\n", result);
    return 0;
}
