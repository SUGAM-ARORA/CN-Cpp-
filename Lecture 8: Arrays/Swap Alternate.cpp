void swapAlternate(int arr[],int size){
	
    int i = 0;
    int j = i + 1;
    
    while(j < size){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        
        i = i + 2;
        j = i + 1;
    }
}
