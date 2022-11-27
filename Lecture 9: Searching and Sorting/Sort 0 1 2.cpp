void sort012(int *arr, int n)
{    int i=0;
     int zero= 0;
    int two= n-1;
 while(i<=two){
     if(arr[i]==0){
         int temp= arr[i];
         arr[i]= arr[zero];
         arr[zero]=temp;
         zero++;
         i++;
     }else if(arr[i]==2){
         int temp=arr[i];
         arr[i]=arr[two];
         arr[two]=temp;
         two--;
         
     }else{
         i++;
     }
 }
}
