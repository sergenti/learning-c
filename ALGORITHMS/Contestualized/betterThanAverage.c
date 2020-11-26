// There was a test in your class and you passed it. Congratulations!
// But you're an ambitious person. You want to know if you're better than the average student in your class.

// You receive an array with your peers' test scores. Now calculate the average and compare your score!

// Return True if you're better, else False!

// Note:
// Your points are not included in the array of your class's points.
// For calculating the average point you may add your point to the given array!

int better_than_average(int classPoints[], int classSize, int myPoints)
{

    int i;
    int sum = 0;

    for (i = 0; i < classSize; i++)
        sum += classPoints[i];

    double mean = sum / i + 1;

    return myPoints > mean ? 1 : 0;
}

#include <stdio.h>

int better_than_average(int classPoints[], int classSize, int myPoints)
{

    int i, sum;

    for (i = 0; i < classSize; printf("%d ", classPoints[i++]))
        ;
    for (i = 0, sum = 0; i < classSize; sum += classPoints[i++])
        ;

    sum += myPoints;
    int mean = sum / (i + 1);

    return myPoints > mean ? 1 : 0;
}
