#include<bits/stdc++.h>
using namespace std;

      vector<vector<int>> generate(int numRows)
        {
            vector<vector <int>> ans;
            
            ans.push_back({ 1 });
            if(numRows==1) return ans ;
            ans.push_back({1,1});

            for (int i = 2; i < numRows; i++)
            {
                vector<int> temp;
                temp.push_back(1);
                
                for (int j = 1; j < ans[i-1].size(); j++)
                {
                    temp.push_back(ans[i-1][j-1] + ans[i-1][j]);
                }
                temp.push_back(1);

                ans.push_back(temp);
            
            }
return ans;

        }

int main()
{
    int a=5;

   vector<vector<int>> ans= generate(a);

            for(int i=0;i<ans.size();++i)
            {
                for(int j=0;j<ans[i].size();++j)
                {
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
    return 0;
}