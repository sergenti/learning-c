// A char in C is already a number (the character's ASCII code), no conversion required.
// If you want to convert a digit to the corresponding character, you can simply add '0':

c = i + '0';

char fromIntToChar(int n)
{
    return n + '0';
}

// Just assign the int to a char variable.

int i = 65;
char c = i;