#include<iostream>
using namespace std;


int length(char input[]) {
    int len = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        len++; 
    }
    return len;
}
void reverse(char input[], int start, int end) {
    int i = start, j = end;
    while(i < j) {
        char temp = input[i];
        input[i] = input[j]; 
        input[j] = temp;
        i++;
        j--;
    }
    
    i=start,j=end;
    int startt=0;
    
    while(i<=j){
        if(input[i]==' '){
            int j=i-1;
            while(startt<=j){
                 char temp = input[startt];
     		     input[startt] = input[j];
      		     input[j] = temp;
    		     j--;
    		     startt++;
            }
            
            startt = i+1;
        }
        i++;
    }
      while(startt<=j){
        char temp = input[startt];
     		     input[startt] = input[j];
      		     input[j] = temp;
    		     j--;
    		     startt++;
    }
}
void reverseStringWordWise(char input[]){
    
    int len = length(input);
    reverse(input,0,len-1);
}
