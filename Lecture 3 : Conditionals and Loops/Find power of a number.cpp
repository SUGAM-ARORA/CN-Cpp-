#include<iostream>
using namespace std;

int main() {
	int x,n;
    cin>>x>>n;
    int i=1;
    int ans=x;
     if(n==0){
            ans=1;
            cout<<ans;
    }
    else{
        while(i<n){
            ans=ans*x;
            i=i+1;
        }
    cout<<ans;
    }
}
