#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 
double totalSalary;
 double basic;
 char grade;
    cin>>basic>>grade;

    double allow;
    double hra, da, pf;
 
    hra = 0.2 * basic;
    da = 0.5 * basic;
    pf = 0.11 * basic;
 
    if (grade == 'A') {
        allow = 1700;
    }
    else if (grade == 'B') {
        allow = 1500;
    }
    else {
        allow = 1300;
    }
    
 totalSalary= basic + hra + da + allow - pf;
    int ans=round(totalSalary);
        
   cout << ans;
}
