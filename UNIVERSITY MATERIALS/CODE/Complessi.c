#include <stdio.h>
#include <math.h>

#define MAXDIM 10

struct complesso
{
    float re;
    float im;
};

void inserisci(struct complesso *c);                     //-> Inserire i dati nell'array
int compara(struct complesso *c1, struct complesso *c2); //c1>c2 return 1; c1<c2 return -1; c1=c1 return 0
float modulo(struct complesso c);
void ordina(struct complesso *c_in, int n, struct complesso *c_out);

int main(int argc, const char *argv[])
{
    struct complesso sorgente[MAXDIM], dest[MAXDIM];
    int n, i;

    printf("Quanti elementi inserire? ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        inserisci(&sorgente[i]);

    ordina(sorgente, n, dest);

    for (i = 0; i < n; i++)
        printf("(%.2f, %.2f) ", dest[i].re, dest[i].im);
    printf("\n");
    return 0;
}

void inserisci(struct complesso *c)
{
    printf("Parte reale: ");
    scanf("%f", &(*c).re);
    printf("Parte immaginaria: ");
    scanf("%f", &c->im);
}

int compara(struct complesso *c1, struct complesso *c2)
{
    float mod1, mod2;
    mod1 = modulo(*c1);
    mod2 = modulo(*c2);
    if (mod1 > mod2)
        return 1;
    else if (mod1 < mod2)
        return -1;
    else
        return 0;
}

float modulo(struct complesso c)
{
    return sqrt((c.re * c.re) + (c.im * c.im));
}

void ordina(struct complesso *c_in, int n, struct complesso *c_out)
{
    int i, scambio = 1;
    struct complesso temp;

    for (i = 0; i < n; i++)
        c_out[i] = c_in[i];
    while (scambio == 1)
    {
        scambio = 0;
        for (i = 0; i < n - 1; i++)
        {
            if (compara(&c_out[i], &c_out[i + 1]) > 0)
            {
                temp = c_out[i];
                c_out[i] = c_out[i + 1];
                c_out[i + 1] = temp;
                scambio = 1;
            }
        }
    }
}
