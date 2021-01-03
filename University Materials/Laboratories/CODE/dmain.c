#include <stdio.h>
#include <string.h>

enum giorno
{
  LUN,
  MAR,
  MER,
  GIO,
  VEN,
  SAB,
  DOM
};

typedef struct
{
  enum giorno day;
  char desc[100];
} appuntamento;

char *convert(enum giorno);
void print_app_by_day(const appuntamento[], int, enum giorno);

int main(void)
{
  appuntamento agenda[50];
  int num_app = 0;

  agenda[0].day = MAR;
  strcpy(agenda[0].desc, "dfasfdsas");
  num_app = 1;

  print_app_by_day(agenda, num_app, MAR);

  return 0;
}

char *convert(enum giorno day)
{
  switch (day)
  {
  case LUN:
    return "lunedì";
    break;

  case MAR:
    return "martedì";
    break;
  }

  return NULL;
}

void print_app_by_day(const appuntamento agenda[], int num_app, enum giorno day)
{
  for (int i = 0; i < num_app; i++)
    if (agenda[i].day == day)
      printf("%s\n", agenda[i].desc);
}