/*

Sum Array
Write a method sum that takes an array of numbers and returns the sum of the numbers.
These may be integers or decimals also negatives.
If the array does not contain any numbers then you should return 0.

Examples
numbers = [1, 5.2, 4, 0, -1]
sum(numbers)
9.2

Assumptions
You can assume that you are only given numbers.
You cannot assume the size of the array.
You can assume that you do get an array and if the array is empty, return 0.

*/

#include <stddef.h>

int sum_array(const int *values, int count)
{
    int res = 0;
    while (count--)
    {
        res += values[count];
    }
    return res;
};

int sum_array(const int *values, size_t count)
{
    int sum;
    for (sum = 0; count > 0; count--)
        sum += values[count - 1];
    return sum;
}