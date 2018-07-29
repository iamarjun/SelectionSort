//
// Created by arjun on 1/31/18.
//

#ifndef SELECTIONSORT_SELECTIONSORT_H
#define SELECTIONSORT_SELECTIONSORT_H

#endif //SELECTIONSORT_SELECTIONSORT_H


void swap(int a[], int i, int j){

    int temp;

    temp = a[i];
    a[i] = a[j];
    a[j] = temp;

}

void sort(int a[], int n){

    int minpos;

    for (int i = 0; i < n ; ++i) {

        minpos = i;

        for (int j = minpos + 1; j < n ; ++j) {

            if (a[j] < a[minpos]){

                minpos = j;
            }

        }

        swap(a, i, minpos);

    }
}