#include <stdio.h>

int returnZero(void) {
    return 0;
}

int main() {
int result = returnZero();
printf("The result is: %d\n", result);
return 0;
}
