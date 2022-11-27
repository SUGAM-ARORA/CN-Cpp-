bool checkPalindrome(char str[]){

    int i=0;
    int j = strlen(str) - 1;
    while(j > i){
        if(str[i] != str[j]){
            return false;
        }   
        i++;
        j--;
    }    
    return true;
}
