int duplicateNumber(int arr[], int size) {
    int duplicate;
    for(int i = 0; i < size - 1; ++i) {
        for(int j = i + 1; j < size; ++j) {
            if(arr[i] == arr[j]) { 
               return arr[i];
            }
        }
    }
}
