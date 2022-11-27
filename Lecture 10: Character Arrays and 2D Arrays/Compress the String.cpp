 string getCompressedString(string &input){
     int count = 1;
    char currentChar = input[0];
    int i, nextIndex = 1;
    for(i = 1; i<input.length(); i++){
     if(input[i] == currentChar){
            count++;
        }
        else{  
           if(count > 1){
                input[nextIndex] = char(count + 48);
                nextIndex++;
            }
            currentChar = input[i];
            input[nextIndex] = input[i];
            nextIndex++; count = 1;
        }
    }
    if(count > 1){
        input[nextIndex] = char(count + 48);
        nextIndex++;
    } 
     return input.substr(0,nextIndex);
}
