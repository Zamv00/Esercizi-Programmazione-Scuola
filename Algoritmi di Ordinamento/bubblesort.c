#include <stdio.h>
void BubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - j - 1; j++)
        {
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }
}

int BinarySearch(int arr[], int low, int high, int x){
    int mid = (low + high)/2;
    int pos = -1;
    do
    {
        if (arr[mid] == x)
        {
            pos = mid;
        }
        else if (arr[mid] < x)
        {
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
        
    } while (low <= high && pos == -1);

    return pos;
}


int main(){
    int arr[] = {4, 3, 5, 1, 2}; 
    int n = 5;
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    int x = 3;
    printf("L'elemento %d si trova in posizione: %d", x, BinarySearch(arr, 0, n-1, x));
    
    
    return 0;
}