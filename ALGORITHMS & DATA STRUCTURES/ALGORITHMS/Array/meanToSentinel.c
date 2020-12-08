int main()
{

    printf("MEAN CALCULATOR");
    printf("keep inserting number until you want, at the end enter -1");

    double n, sum = 0, mean = 0, count = 0;

    do
    {
        printf("insert a real number");
        scanf("%f", &n);

        if (n != -1)
        {
            sum += n;
            count++;
            mean = sum / count;
            printf("la media è %f", mean);
        }

    } while (n != -1);
}