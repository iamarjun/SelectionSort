//
// Created by arjun on 1/31/18.
//

#ifndef SELECTIONSORT_SELECTIONSORTRECURSION_H
#define SELECTIONSORT_SELECTIONSORTRECURSION_H

#endif //SELECTIONSORT_SELECTIONSORTRECURSION_H



void swap(int a[], int i, int j){

    int temp;

    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

void sort(int a[], int i, int n){

    int minpos = i;

    for (int j = minpos + 1; j < n; j++){

        if(a[j] < a[minpos]){

            minpos = j;
        }
    }

    swap(a,i, minpos);

    if (i < n-1) {

        sort(a, i+1, n);

    }
}