#include <stdio.h>

int main(void)
{
    unsigned long long int fib[3] = {1, 2, 0}; 
    unsigned long long int sum = 2; 

    while (fib[2] < 4000000)
    {
        fib[2] = fib[0] + fib[1]; 

        if (fib[2] % 2 == 0)
        {
            sum += fib[2]; 

        fib[0] = fib[1]; 
        fib[1] = fib[2]; 
    }

    printf("%llu\n", sum); 

    return (0);
}
