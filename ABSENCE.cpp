#include <bits/stdc++.h>

using namespace std;
long long n,q;
long long a[1000005],ch[1000005],ans[1000005];
map<long long,long long> mp;
int main()
{
    freopen("ABSENCE.INP", "r", stdin);
    freopen("ABSENCE.OUT", "w", stdout);
    cin >> n >> q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=1;i<=q;i++) cin>>ch[i];
    long long cnt=1;
    for(int i=0;i<=1000005;i++)
    {
        if(mp[i]!=0) continue;
        else
        {
            ans[cnt]=i;
            cnt++;
        }
    }
    for(int i=1;i<=q;i++) cout<<ans[ch[i]]<<" ";
    return 0;
}
