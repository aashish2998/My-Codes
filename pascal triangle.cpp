######### Pascal Triangle

#include<bits/stdc++.h>
using namespace std;

void printPascal( int n)
{
    for( int line =1;line<=n;line++)
    {
        int C=1;
        
        for( int i=1;i<=line;i++)
        {
            cout<<C<<" ";
            C=C*(line - i)/i;
        }
        cout<<'\n';
    }
}
int main()
{
    int n;
    cin>>n;
    printPascal(n);
    return 0;
}


######### Pacal Triangle
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r(numRows);
        
        for( int i=0;i<numRows;i++)
        {
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
    
        for( int j=1;j<i;j++)
        {
            r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
        }
        return r;
        }
  
    
};
