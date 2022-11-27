void replaceCharacter(char input[], char c1, char c2) {
    int i=0;
    int j = strlen(input);
    for(i; i < j;i++){
        if(input[i] == c1){
            input[i]=c2;
        }
    }
}
