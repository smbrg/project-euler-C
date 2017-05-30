/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.*/

#include <stdio.h>
#include <string.h> 

/* 
 * C++ version 0.4 char* style "itoa":
 * Written by Lukás Chmela
 * Released under GPLv3.
 * http://www.strudel.org.uk/itoa/
 */
char* itoa(int value, char* result, int base) {
	// check that the base if valid
	if (base < 2 || base > 36) { *result = '\0'; return result; }

	char* ptr = result, *ptr1 = result, tmp_char;
	int tmp_value;

	do {
		tmp_value = value;
		value /= base;
		*ptr++ = "zyxwvutsrqponmlkjihgfedcba9876543210123456789abcdefghijklmnopqrstuvwxyz" [35 + (tmp_value - value * base)];
	} while ( value );

	// Apply negative sign
	if (tmp_value < 0) *ptr++ = '-';
	*ptr-- = '\0';
	while(ptr1 < ptr) {
		tmp_char = *ptr;
		*ptr--= *ptr1;
		*ptr1++ = tmp_char;
	}
	return result;
}

int is_palindrome(char *str) {
    int length = strlen(str);
    char *front = str;
    char *back = &str[length-1];

    while(front < back) {
        if(*front != *back) {
            return 0;
        }
        front++;
        back--;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    int i, j;
    int result;
    int candidate;
    char buf[16];

    for (i = 1; i < 1000; i++) {
        candidate = 0;
        for (j = 0; j < 999; j++) {
            candidate += i;
            itoa(candidate, buf, 10);
            if (is_palindrome(buf)) {
                result = candidate;
            }
        }
    }
    fprintf(stdout, "%d\n", result);
    return 0;
}
