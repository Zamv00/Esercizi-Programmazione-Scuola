void selectionSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){ 
    
    int min = i; //Assumiamo che l'elemento corrente sia il minimo
    for(int j = i+1; j < n;j++){ //Cerchiamo il vero elemento minimo tra i+1 (l'elemento minimo che noi consideriamo) e n
        if(arr[j] < arr[min]){
            min = j; //se trova un elemento minore, lo salva come minimo
        }
    }
    int temp = arr[i]; //memorizziamo la posizione in cui ci troviamo
    arr[i] = arr[min]; //ci mettiamo l'elemento minimo
    arr[min] = temp; //spostiamo l'elemento in che era in posizione i in posizione min
    }
}