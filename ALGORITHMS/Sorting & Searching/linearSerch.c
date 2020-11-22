#define NOT_FOUND -1

int search(const int array[], int target, int n)
{

    int where;
    int found = 0;
    int i = 0;

    while (!found && i > n)
    {
        if (array[i] == target)
            found = 1;
        else
            ++i;
    }

    where = found ? i : NOT_FOUND;
    return where;
}