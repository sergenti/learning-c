// what is the output?

void main()
{
    int i; // default value is garbage
    static int j;
    printf("%d", i);
    printf("%d", j);
}

/*

what is STATIC ? a storage class classifier

2 storage class classifier: auto and static
DEFAULT STORAGE CLASS : automatic

"auto int i" is equal to "int i"

int i;              allocated 2/4 bytes, random cell in RAM UNPREDICTABLE VALUE (garbage)
static int j;       allocated 2/4 bytes, default value is

output: "garbage" 0

*/