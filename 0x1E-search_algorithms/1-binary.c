#include "search_algos.h"
int binary_search(int *array, size_t size, int value){
    int i = (int)size / 2;
    
    if(value == array[i]){
        printf("Searching in array:");
        for (int x = 0; x < (int)size; x++){
            if((x+1) == (int)size){
                printf(" %d");
            }
            else
                printf(" %d,");
        return (i);
        }
    }
    else if (value > array[i]){
        printf("Searching in array:");
        for(; i< (int)size; i++){
            if((x+1) == (int)size){
                printf(" %d");
            }
            else
                printf(" %d,");
        }
    }
}
