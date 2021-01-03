// what is the output?

void main()
{
    int x;
    x = ++2; // pre - increment expression
    printf("%d", x);
}

/*

++var PRE-increment operator, unary operator

ERROR MESSAGE: compile-time error [Lvalue required] (left side value)
++2 results to 3 but computer isn't able to store 3 in 2 since it is not a variable

++(a+b) s also an error

can only be used with variables
NO CONSTANTS
NO EXPRESSIONS

*/