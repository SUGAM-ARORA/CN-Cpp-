void reverse(int input[], int start, int end){
    int i=start,j=end;
    while(i<=j){
        int temp=input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
    
    
}


void rotate(int *input, int d, int n)
{
    
    
    if(n==0){
        return;
    }
    if(d>=n ){
        d=d%n; // SINCE AFTER N ROTATIONS SAME ARRAY WILL COME
    }
   
    reverse(input,0,n-1);// FOR ROTATING THE ENTIRE ARRAY
    reverse(input,0,n-d-1);// FOR ROTATING THE FIRST D ELEMENTS
    reverse(input,n-d,n-1);// FOR ROTATING THE N-D ELEMENTS
    
    
    
    
    
}












//  void leftrotate(int arr[],int n){
//     int temp = arr[0],i;
//     for(i=0;i<n-1;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[i]=temp;
// }
// void rotate(int arr[], int d, int size) {
//     for(int i=0;i<d;i++){
//     leftrotate(arr,size);
//     }
// }	
