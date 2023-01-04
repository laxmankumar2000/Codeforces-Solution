#include<iostream>
using namespace std;
#define rep(i,s,t) for( int i=s;i<=t;i++)

int main()
{
    int tc;
    cin>>tc;

    while (tc--)
    {
       int n;
        cin >> n;
        if (n == 3)
        {
            cout << "NO" << endl;
            
        }
        else
        {
            cout << "YES" << endl;
            if (n % 2 !=0)
            {
                rep(i, 1, n)
                {
                    if (i & 1)cout << -(n / 2 - 1) << " ";
                    else cout << n / 2 << " ";
                }
            }
            else
            {
                rep(i, 1, n / 2)
                {
                    cout << 1 << " " << -1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
