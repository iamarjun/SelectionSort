#include <stdio.h>
//#include "selectionsort.h"
#include "selectionsortrecursion.h"


int main() {

    //printf("Hello, World!\n");

    int a[10];
    int n;

    printf("enter size = ");
    scanf("%d", &n);

    printf("enter no. = ");

    for (int i = 0; i < n ; ++i) {

        scanf("%d", &a[i]);

    }

    //sort(a, n);
    sort(a, 0, n);

    printf("sorted list = ");

    for (int i = 0; i < n ; ++i) {

        printf("%d ", a[i]);

    }

    return 0;
}