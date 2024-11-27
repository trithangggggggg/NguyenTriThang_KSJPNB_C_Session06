#include <stdio.h>

int main() {
    for (int so = 1; so <= 100; so++) {
        if (so % 3 == 0 && so % 5 == 0) {
            printf("%d FizzBuzz\n", so);
        } else if (so % 3 == 0) {
            printf("%d Fizz\n", so);
        } else if (so % 5 == 0) {
            printf("%d Buzz\n", so);
        }
    }
    return 0;
}
