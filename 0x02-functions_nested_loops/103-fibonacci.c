#include <stdio.h>
#include <stdint.h>

int main(void)
{
    long int fib[3] = {1, 2, 0}; 
    long int sum = 2; 

    while (fib[2] < 4000000)
    {
        fib[2] = fib[0] + fib[1]; 

        if (fib[2] % 2 == 0)
        {
            sum += fib[2]; 

        fib[0] = fib[1]; 
        fib[1] = fib[2]; 
    }

    printf("%lu\n", sum); 

    return (0);
}
