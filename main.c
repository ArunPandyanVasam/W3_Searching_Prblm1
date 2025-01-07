#include <stdio.h>

int main(void) {
    //  1. Write a C program to find the position of a target value within a sorted array using binary search.
    int arr1[100], i, n, x, f, l, m, flag = 0;
    printf("\nInput number of elements in an array: ");
    scanf("%d", &n);

    printf("\nInput %d value in ascending order: \n", n);
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr1[i]);
    }

    printf("\nInput the value to be search: ");
    scanf("%d", &x);

    f = 0;
    l = n - 1;

    while (f <= 1) {
        m = (f+l)/2;
        if (x == arr1[m]) {
            flag = 1;
            break;
        } else if (x < arr1[m]) {
            l = m - 1;
        } else {
            f = m + 1;
        }

    }

    if (flag == 0) {
        printf("%d value not found\n", x);
    } else {
        printf("%d value found at %d position\n", x, m);
    }



    return 0;
}
