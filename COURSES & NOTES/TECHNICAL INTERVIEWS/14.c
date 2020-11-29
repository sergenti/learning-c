// what is the output?

#define square(x) x *x

void main()
{
    int s;
    s = square(5 + 1);
    printf("%d", s);
}

// square() is the name of the macro
// macros are defined using preprocessor directives (#define)

// macro is substitution, replacement
// in the place of the macro called the macro body is substituted

// before compilation there is preprocessing, takes place inside source code
// #define macroname macrobody

void main()
{
    int s;
    s = 5 + 1 * 5 + 1;
    printf("%d", s);
}

// strangely is processed as follow 11 NOT 36 !!!

// Changes recommended if you want to get 36: ADD BRACKETS!
#define square(x) (x) * (x)
// or just do this
s = square(6);
