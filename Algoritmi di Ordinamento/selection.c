#include <stdio.h>

void selectionsort(){
    for(int i = 0; i < n; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
}

void bubblesort(){
    for(int i = 0;i < n - 1; i++){
        for(int j = 0; i < n - j - 1){
            if(arr[j] < arr[j+1]){
                int temp = arr[j]
                arr[j] = arr[j + 1]
                arr[j + 1] = temp
            }
        }
    }
}