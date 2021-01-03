// what is the output?

#include <stdio.h>

void main()
{
    abc(3);
}

void abc(int a)
{
    printf("%d", a);

    if (a)
    {
        abc(a - 1);
    }

    printf("%d", a);
}

/*

RECURSION

OUTPUT: 32100123



//abc(3)
{
    printf("3");
    if (3)
    {
        //abc(2)
        {
            printf("2");
            if (2)
            {
                //abc(1)
                {
                    printf("1");
                    if (1)
                    {
                        //abc(0)
                        {
                            printf("0");
                            if (0)
                            {
                                // nevermind
                            }
                            printf("0");
                        }
                    }
                    printf("1");
                }
            }
            printf("2");
        }
    }
    printf("3");
}

*/
