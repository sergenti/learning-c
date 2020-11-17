#include <stdio.h>
#include <string.h>

#define MAX_CHAR 20

typedef int bool;

bool is_palindrome(char []);
void reverse(char []);

int main(void) {

  char num[ MAX_CHAR ];

  printf("Inserisci un numero: ");
  scanf("%s", num);

  reverse(num);
  printf("%s", num );

  return 0;
}

bool is_palindrome(char str[])
{
  int len = strlen( str );
  int palindrome = 1;

  for(int i=0; i<len/2; i++)
    if( str[i] != str[ (len-1) - i ] ) 
    {
      palindrome = 0;
      break;
    }

  return palindrome;
}

void reverse(char str[])
{
  if( ! is_palindrome(str) )
  {
    int len = strlen( str );

    for(int i=0; i<len/2; i++) 
    {
      char temp = str[i];
      str[i] = str[ (len-1) - i ];
      str[ (len-1) - i ] = temp;
    }
  }
}