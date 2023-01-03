#include<bits/stdc++.h>
using namespace std;
 
#define for0(i, n) for(int i = 0; i < n; i++)
 
const int inf = 1e18;
const int M = 1e9 + 7;
 
 
int main()
{
    int tc;
    cin >> tc;
    while(tc--){
        int n, k;
        cin >> n >> k;
        int lb = 1, ub = n;
        for0(i, n){
            if(i % 2){
                cout << lb <<' ';
                lb++;
            }
            else{
                cout << ub << ' ';
                ub--;
            }
 
        }
        cout << "\n";
    }
    return 0;
}
