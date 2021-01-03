#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mask(char string[], char bitMask[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (bitMask[i] == '1')
            continue;

        else if (bitMask[i] == '0')
            string[i] = ' ';

        else
            printf("invalid bitmask");
    }
}

int main()
{
    char string[] = "nel mezzo del cammin di nostra vita";
    char bitMask[] = "01010001001011111001010101010010101";

    int length = strlen(string);

    mask(string, bitMask, length);
    printf("\n\n%s\n\n", string);
}
