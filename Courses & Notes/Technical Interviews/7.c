// what is the output?

void main()
{
    int a, b, c;
    a = b = 4;  // assignment expression
    c = a == b; // relational expression
    printf("%d", c);
}

/*

right to left !!
4 is stored in B, then the value of B (4) is stored into A

isEqual Operator        ==      (relational)
Assignment Operator     =       (assignment)

first we calculate  (a==b) and then we store its value into c

4 is equal to 4 so is true (1)
c = 1

*/