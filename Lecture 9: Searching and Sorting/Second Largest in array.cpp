#include <climits>
using namespace std;
int findSecondLargest(int *input,int n){
    if(n<=0)
        return INT_MIN;
    int max=input[0];
    int secmax=INT_MIN;
    for(int i=1;i<n;i++) {
        if(input[i]>max){
            secmax=max;
            max=input[i];
        }
        else if(input[i]>secmax && input[i] != max)
            secmax=input[i];
    }
    return secmax;
}
