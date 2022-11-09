#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int dis(string f,string s){
    int n=f.size(),d=0;
    for (int i = 0; i < n;i++){
        d += abs(f[i] - s[i]);
    }
    return d;
}
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    int n,m;
    cin>>n>>m;
    vector<string> v;
    for (int i=0; i<n; i++)
    {
        string x;
        cin >> x;
        v.push_back(x);
    }
    int mn=INT_MAX;
    for (int i=0; i<n-1; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            string f=v[i];
            string s=v[j];
            if (dis(f,s)>=0)
            mn=min(mn,dis(f,s));
        }
    }
    cout<<mn<<endl;
  }
  return 0;
}