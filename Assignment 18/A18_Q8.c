#include <stdio.h>
void main()
{
    // s = smallest && ss = 2nd smallest.
    int s, ss;
    int size, i;
    printf("How many elements do you want to enter: \n");
    scanf("%d", &size);
    int A[size];
    printf("Enter %d elements: \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &A[i]);
    if (A[0] < A[1])
    {
        s = A[0];
        ss = A[1];
    }
    else
    {
        s = A[1];
        ss = A[0];
    }
    for (i = 2; i < size; i++)
    {
        if (A[i] < s)
        {
            ss = s;
            s = A[i];
        }
        else if (s == ss)
        {
            s = ss;
            ss = A[i];
        }
        else if (A[i] < ss && A[i] > s)
        {
            ss = A[i];
        }
    }
    printf("Second smallest element is %d\n", ss);
}
