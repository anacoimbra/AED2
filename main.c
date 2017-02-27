// PUC MINAS - AED2 - Verde - Max
//esse verde é uma buceta mesmo

#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

void printLetters(char *c, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%c ", c[i]);
    }
    printf("\n\n");
}

void printQuickSort(char letters[], int pivot, int from, int to ){
    int i;
    printf("[ ");
    for(i = from; i < to; i++){
        if(letters[i] == pivot) printf("( ");
        printf("%c ", letters[i]);
        if(letters[i] == pivot) printf(") ");
    }
    printf("]");
}

void quickSort(char v[], int left, int right, int *index)
{
    int pivot, w;
    int i = left, j = right;
    pivot = v[(i+j)/2];
    printQuickSort(v, pivot, i, j);
    printf("\n\n");
    do {
        while(pivot > v[i]) i++;
        while(pivot < v[j]) j--;
        if (i <= j)
        {
            w = v[i]; v[i] = v[j]; v[j] = w;
            i++; j--;
        }
    } while(i <= j);
    if(left < j) quickSort(v, left, j, index);
    if (i < right) quickSort(v, i, right, index);
}

int main(int argc, char const *argv[]) {
    int index = 0;
    char letters[SIZE] = {
        'o', 'z', 'p', 'l', 'j', 'k', 'f', 'c', 'x', 'r',
        'a', 'i', 'v', 'e', 'g', 'm', 'n', 'y', 'u', 'q'
    };
    printLetters(letters, SIZE);
    quickSort(letters, 0, SIZE-1, &index);
    printLetters(letters, SIZE);
    return 0;
}
