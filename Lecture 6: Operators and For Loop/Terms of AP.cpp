#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main() {
	int n,i,k;
	int j = 1;
	cin >>n;
	for(i = 1; i<=10000; i++ ) {
        k = ((3*i) + 2);
		if(k % 4 != 0 && j <= n) {
            cout <<k<<" ";
				j++;
		}	
	}
}
