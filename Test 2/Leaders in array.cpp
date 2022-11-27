void Leaders(int* arr,int len)
{
	int j=0;
    int *save = new int[len];
    int largest=INT_MIN;
    for(int i=len-1;i>=0;i--) {
        if(arr[i]>=largest){
            save[j]=arr[i];
            j++;
            largest=arr[i];
        }
    }
    for(int i=j-1;i>=0;i--) {
        cout<<save[i] << " "; 
    }
}
