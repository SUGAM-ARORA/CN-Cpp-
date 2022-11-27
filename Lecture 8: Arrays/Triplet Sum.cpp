int tripletSum(int *input, int size, int x) {
int i,j,k,count;    
   /*for(i=0; i<size; i++)
    {
        for(j = i+1; j < size; j++)
        {
            if(input[j] < input[i])
            {
                temp = input[i];
                input[i] = input[j];
               input[j] = temp;
            }
        }
    }*/
	for( i = 0 ; i < size-2; i++)
	{
		for( j = i + 1 ; j < size-1; j++)
		{
			for( k = j + 1 ; k < size ; k++)
			{
				if( (input[i] + input[j] + input[k]) == x)
				{   
                    
                    count++;
                }
            }
            }
	
}
        return count;
}
