#include <iostream>
using namespace std;
void wavePrint(int **input, int row, int col){
    for(int i = 0 ;i < col; i++)
		{
			if(i % 2 == 0)
			{
				for(int j = 0; j < row; j++)
				{
					cout << input[j][i] << " ";
				}
			}
			else
			{
				for(int j = row - 1; j >= 0; j--)
				{
					cout << input[j][i] << " ";
				}
			}
		}
}
