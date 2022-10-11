#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    vector<ll>v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];
    }
    ll s=0,d=0,f=1;

    while(!v.empty())
    {
        if(f==1)
        {
            if(v[0]>v.back())
            {
                s+=v[0];
                v.erase(v.begin());
            }
            else
            {
                s+=v.back();
                v.pop_back();
            }
            f=2;
        }
        else
        {
            if(v[0]>v.back())
            {
                d+=v[0];
                v.erase(v.begin());
            }
            else
            {
                d+=v.back();
                v.pop_back();
            }
            f=1;

        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
