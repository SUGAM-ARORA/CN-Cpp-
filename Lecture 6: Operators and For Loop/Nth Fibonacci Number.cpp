#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int i=1;
	int j=1;
    int fib=0;
    if(N ==1){
    	cout<< i;
	}
	else if(N==2){
		cout<<j;
	}
	else{
		for(int k=1; k< N-1; k++){
        fib = i + j;
        
        i=j;
        j=fib;
	}
	cout<<fib;
	}
}
