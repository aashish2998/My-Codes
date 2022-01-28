### Missing and repeating element

#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int repeat = 0;
        int missing = 0;
        
        bool status[n+1]= {false};
        
        for( int i=0;i<n;i++)
        {
            if(status[arr[i]]==true)
            {
                repeat =arr[i];
            }
            status[arr[i]] = true;
        }
        for( int i= 1;i<=n;i++)
        {
           if(status[i] ==false)
           {
               missing =i;
               break;
           }
            
        }
        
        int *res = new int(2);
        res[0]= repeat;
        res[1]= missing;
        
        return res;
    }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} 
