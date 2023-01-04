#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, ans = -1;
        cin >> n;
        string a;
        cin >> a;
        for(int i = 1; i < n; i++){
            if(a[i] != a[i-1]){
                if(a[i] == 'R'){
                    ans = i;
                    break;
                }
                else{
                    ans = 0;
                    break;
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
