#include <stdio.h>

int main() {
    int ans;
    int i;
    for (i = 0; i < 1000; i++) {
        if (i%3 == 0) {
            ans += i;
        } else if (i%5 == 0) {
            ans += i;
        }
    }
    printf("%d\n", ans);
}
