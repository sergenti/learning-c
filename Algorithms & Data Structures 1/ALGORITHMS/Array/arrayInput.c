#define SIZE 10;

void arrayInputSENTINEL()
{
    int i = 0, temp;

    printf("insert how many values you want, -1 to end");
    scanf("%d", &temp);
    while (temp != -1)
    {
        array[i++] = temp; //a[i] = temp; i++;
        scanf("%d", &temp);
    }
}
