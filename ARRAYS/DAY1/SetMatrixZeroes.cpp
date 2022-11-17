
/*
Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

You must do it in place.

 

Example 1:


Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]
Example 2:


Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]
 

Constraints:

m == matrix.length
n == matrix[0].length
1 <= m, n <= 200
-231 <= matrix[i][j] <= 231 - 1

 */
#include<bits/stdc++.h>
using namespace std;


        void setZeroes(vector<vector < int>> &matrix)
        {
            int rows = matrix.size();
            int cols = matrix[0].size();

            bool firstRow = false;
            bool firstCol = false;

           	//iterating through all the elements to check if it has any 0s
            
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    if (matrix[i][j] == 0)
                    {
                        if (i == 0) firstRow = true;
                        if (j == 0) firstCol = true;

                        matrix[i][0] = 0;
                        matrix[0][j] = 0;
                    }
                }
            }

           	//setting every row and column as 0 if first row/coloumn has 0
            for (int i = 1; i < rows; i++)
            {
                for (int j = 1; j < cols; j++)
                {
                    if (matrix[i][0] == 0 || matrix[0][j] == 0)
                    {
                        matrix[i][j] = 0;
                    }
                }
            }

           	//making every element in row as 0
            if (firstRow)
                for (int i = 0; i < cols; i++)
                    matrix[0][i] = 0;

           	//making every element in column as 0
            if (firstCol)
                for (int j = 0; j < rows; j++)
                    matrix[j][0] = 0;
        }

        int main()
    {
    vector<vector<int>> matrix= {{1,1,1},{1,0,1},{1,1,1}};
    
    setZeroes(matrix);

    for(int i=0;i<matrix.size();++i)
    {
        for(int j=0;j<matrix[0].size();++j)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


