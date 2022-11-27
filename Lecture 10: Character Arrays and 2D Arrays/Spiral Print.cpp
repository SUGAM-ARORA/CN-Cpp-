void spiralPrint(int **input, int nRows, int nCols){
    int count=0;
    int total=nRows*nCols;
    int startingrow=0;
    int startingcol=0;
    int endrow=nRows-1;
    int endcol=nCols-1;
    while(count<total){
   for (int i=startingcol;count<total && i<=endcol;i++) { 
            cout << input[startingrow][i] << " "; 
       count++;
        } 
        startingrow++; 
   for (int i=startingrow;count<total && i<=endrow;i++) { 
            cout << input[i][endcol] << " "; 
       count++; 
   }
    endcol--;
       for (int i=endcol;count<total && i>=startingcol;i--) { 
            cout << input[endrow][i] << " "; 
       count++;
        }
    endrow--;
    for (int i=endrow;count<total && i>=startingrow;i--) { 
            cout << input[i][startingcol] << " "; 
       count++;
    }
    startingcol++;
}
}

  
       
