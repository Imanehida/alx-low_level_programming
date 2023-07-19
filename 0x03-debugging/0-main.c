#include <stdio.h>
/* Function to test if a number is positive or negative */
const char *positive_or_negative(int number)
{
if (number > 0)
{
return "Positive";
}
else if (number < 0)
{
return "Negative";
}
else
{
return "Zero";
}
}
int main(void)
{
/* Test cases */
int num1 = 5;
int num2 = -2;
int num3 = 0;
printf("%d is %s\n", num1, positive_or_negative(num1)); /* Output: "5 is Positive" */
printf("%d is %s\n", num2, positive_or_negative(num2)); /* Output: "-2 is Negative" */
printf("%d is %s\n", num3, positive_or_negative(num3)); /* Output: "0 is Zero" */
return 0;
}
