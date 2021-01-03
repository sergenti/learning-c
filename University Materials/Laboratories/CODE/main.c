#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10
#define MAX 200

int *genera_vettore();
int *genera_vettore_pari_dispari(int *, int *);
void print_vec(int *, int);

int main(void)
{
  srand(time(NULL));

  int *v1 = genera_vettore();
  int *v2 = genera_vettore();

  print_vec(v1, N);
  print_vec(v2, N);

  int *v_pd = genera_vettore_pari_dispari(v1, v2);
  print_vec(v_pd, 2 * N);

  free(v1);
  free(v2);
  free(v_pd);

  return 0;
}

int *genera_vettore()
{
  int *v = (int *)malloc(N * sizeof(int));

  for (int i = 0; i < N; i++)
    v[i] = rand() % MAX + 1;

  return v;
}

void print_vec(int *vec, int n)
{
  for (int i = 0; i < n; i++)
    printf("%d ", vec[i]);

  printf("\n");
}

int *genera_vettore_pari_dispari(int *v1, int *v2)
{
  int *res = (int *)malloc(2 * N * sizeof(int));

  int i_v1 = 0, i_v2 = 0;
  for (int i = 0; i < N * 2; i++)
  {
    if (i % 2 == 0)
      res[i] = v1[i_v1++];
    else
      res[i] = v2[i_v2++];
  }

  return res;
}