// You are given two interior angles (in degrees) of a triangle.
// Write a function to return the 3rd.
// Note: only positive integers will be tested.

/**
 *
 * Function   : int other_angle(int a, int b)
 *              
 * Parameters : 
 *              a: 1st angle of a triangle (in degrees)
 *              b: 2nd angle of a triangle (in degrees)
 *              
 * Return     : The 3rd angle of a triangle
 *            
 * Description: This function return the 3rd angle of a triangle (in degrees).
 *              
 * Note       : Only positive integers will be tested.
 *
 */

int other_angle(int a, int b)
{
    return (180 - a - b);
}

// With Checks

#define TRIANGLE_ANGLE_SUM 180

int other_angle(int a, int b)
{
    if (a < 0 || b > 0)
        printf("angles must be positives");
    else if (a + b < TRIANGLE_ANGLE_SUM)
        printf("the sum of 2 angles must be less than 180");
    else
        return (180 - a - b);
}