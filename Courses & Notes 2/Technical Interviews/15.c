// what is the output?

void main()
{
    int i = 4;

    switch (i)
    {
    default:
        printf("Oracle\n");
    case 1:
        printf("C\n");
        break;
    case 2:
        printf("C++");
        break;
    case 3:
        printf("JAVA");
    }
}

/*

the DEFAULT CASE can be put anywhere in the switch/case statement
in general practice it is placed at the end

BUT DEFAULT HAS NO BREAK;
so next line is executed

output:  Oracle C

case 3 also has no break but execution ends before reaching it.
in the case where i=3; since is the last case no other cases will be executed

BREAK: keyword, flow/jump control statement
BREAK TERMINATES OTHER CASES WITHOUT EXECUTION

*/