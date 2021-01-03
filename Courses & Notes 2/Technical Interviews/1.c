// what is the output?

void main()
{
    int a = 5, b = 3;
    printf("%d", ++(a * b + 1));
}

/*

the output is an ERROR => compile-time error [lValue Required]

PRE-increment operator can only be used on variables
not on expressions
not on costant

++var != var++
PRE      POST

*/
