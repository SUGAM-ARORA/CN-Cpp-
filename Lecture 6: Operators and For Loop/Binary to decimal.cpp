#include<iostream>
using namespace std;
int main() {
	int n, rem, tmp, dec = 0, b=1;
    cin>>n;
    tmp = n;
    
    while(n > 0){
        rem = n % 10;
        dec = dec + rem * b;
        b *= 2;
        n /= 10;
    }
    cout<<dec;
}
