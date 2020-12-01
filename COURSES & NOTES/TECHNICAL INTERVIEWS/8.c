// what is the output?

int main()
{
    int i = 10;
    i = !i > 14;
    printf("i = %d", i);
}

/*

from right to left
evaluating expression

2 OPERATOR:
logical not              !
is greater than          >

!10 = -10 NO NO NO NO NO

for non zero value every number is considered true
!(every number)  => TRUE
!0               => FALSE

i = !10 > 14
i = 0 > 14      (which is FALSE)
i = 0

*/
