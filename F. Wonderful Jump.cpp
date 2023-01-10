#include<bits/stdc++.h>
using namespace std;
#define int long long

const int N=4e5+5;

int n,a[N],f[N],rig[N],stk[N],top=0;

signed main()
{
    int tc;
    cin>>tc;
	while(n--)
    {
        int n;
        cin>>n;
        f[1]=0;
        for(int i=1;i<=n;i++) cin>>f[i];
        for(int i=1;i<=n;i++)
        {
            for(int j=i-1;j>=1;j--)
            {
                if(2*(i-j)-1>n/a[i]) break;
                f[i]=min(f[i],f[j]+a[i]*(j-i)*(j-i));
                if(a[j]<=a[i]) break;
            }
            for(int j=i+1;j<=n;j++)
            {
                if(2*(j-i)-1>n/a[i]) break;
                f[j]=min(f[j],f[i]+a[i]*(j-i)*(j-i));
                if(a[j]<=a[i]) break;
            }
        }
        for(int i=1;i<=n;i++) printf("%lld ",f[i]);
        printf("\n");
    }
 	return 0;
}
