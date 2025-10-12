//bubblesort
#include <stdio.h>

for (int i = 0; i < N-1; i++)
{
    for(int j = 0; j < N - i - 1; j++)
    {
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
        }
    }
}


//selection sort...

for (int i = 0; i < N-1; i++)
{
    int min = i;
    for (int j = i+1; j < N; j++)
    {
        if(arr[j] < arr[min]){
            min = j;
        }
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
    
}


//ricerca binaria
int BinarySearch(int arr[], int low, int high, int x){
    int mid = (low + high)/2
    int pos = -1
    do
    {
        if(arr[mid] == x){
            pos = mid;
        }
        else if (arr[mid] < x){
            low = mid+1;
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
    } while (low <= high && pos == -1);
    
}

BinarySearch(arr, 0, n-1, x)