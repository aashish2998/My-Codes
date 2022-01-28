### find an element in array
#include <bits/stdc++.h>

using namespace std;

int main() {
 
   int N,K;
   cin>>N;
   cin>>K;
   int arr[N];
   int i;
    for(  i=0;i<N;i++)
    {
        cin>>arr[i];
        
        if(arr[i]==K)
    {
        cout<<1;
        break;
    }
        if(i==N-1)
   {
       cout<<-1;
   }
    }
	return 0;

}
