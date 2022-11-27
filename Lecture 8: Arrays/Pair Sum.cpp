int pairSum(int input[], int size, int x) {
    int sum=0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size;j++){
             if((input[i] + input[j]) == x){
                 sum++;
               
            }
        }
    }
    return sum;
