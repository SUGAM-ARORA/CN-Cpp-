void reverse(char input[],int i,int j){
    while(i<j){
        char tmp=input[i];
        input[i]=input[j];
        input[j]=tmp;
        i++;
        j--;
        
    }
}

void reverseEachWord(char input[]) {
int start = 0, end = 0, i;
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == ' '){
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverse(input, start, end);
}
