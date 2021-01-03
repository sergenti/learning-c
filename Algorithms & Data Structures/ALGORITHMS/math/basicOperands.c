// Your task is to create a function that does four basic mathematical operations.

// The function should take three arguments - operation(string/char), value1(number), value2(number).
// The function should return result of numbers after applying the chosen operation.

// Examples
// basicOp('+', 4, 7)         // Output: 11
// basicOp('-', 15, 18)       // Output: -3
// basicOp('*', 5, 5)         // Output: 25
// basicOp('/', 49, 7)        // Output: 7

#include <stdio.h>

#include <stdio.h>

int basic_op(char op, int value1, int value2)
{
    switch (op)
    {

    case '+':
        return value1 + value2;
        break;

    case '-':
        return value1 - value2;
        break;

    case '*':
        return value1 * value2;
        break;

    case '/':
        if (value2 != 0)
            return value1 / value2;
        break;

    default:
        printf("invalid operand");
    }

    return 0;
}

// using ASCII
int basic_op(char op, int x, int y)
{
    return op == 43 ? x + y : op == 45 ? x - y : op == 42 ? x * y : x / y;
}

// int basic_op(char op, int x, int y) {
//   switch(op) {
//     case '+': return x + y;
//     case '-': return x - y;
//     case '*': return x * y;
//     case '/': return x / y;
//     default:  return x;
//   }
// }
