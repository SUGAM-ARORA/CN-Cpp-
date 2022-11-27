int linearSearch(int arr[], int N, int x)
{
for (int i = 0; i < N; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}
