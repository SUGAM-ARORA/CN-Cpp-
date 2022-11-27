#include <iostream>
using namespace std;
int main(){
	 int n,i,j,a=2;
	cin>>n;
    cout<<a<<endl;
	for(i = 2;i <= n;i++){
		for(j = 2; j <=( i/2); j++){
			if(i%j==0){
                j=i;
				
				break;
			}
		}
			if(j != i){
				cout<<i<<endl;
			}
	}
}
