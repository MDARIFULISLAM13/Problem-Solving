#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#include <utility>
#define ll long long
using namespace std;
//struct cmp { bool operator()(const ll &a, const ll &b) const { return a < b; }};
//struct cmp {bool operator()(const pair<ll,ll> &a, const pair<ll,ll> &b) const {return (a.first == b.first) ? (a.second < b.second) : (a.first < b.first);}};
//#define ordered_set tree<ll, null_type,cmp,rb_tree_tag, tree_order_statistics_node_update>
// st.find_by_order(index) gives the k-th smallest element (0-based index)
// st.order_of_key(x) gives the number of elements strictly less than x
#define sp(x) fixed << setprecision(x)
//int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
// auto it = mp.find(x);if (it != mp.end())
//priority_queue<pair<ll, ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
//sort(vec.begin(), vec.end(),greater<int>());
//vector<bool> isPrime(limit + 1, true);
#define memo(a,b) memset(a,b,sizeof(a))




int main ()
{
ios_base::sync_with_stdio(0);cin.tie(0);
int test;
cin >>test;
while (test--)
{

ll n; cin>>n;
ll cnt[n+1]; memo(cnt,0);

for(ll i=1;i<=n;i++)
{
    cout<<'?'<<" "<<i<<" "<<n<<" ";
    for(ll j=1;j<=n;j++)cout<<j<<" "; cout<<endl;
    cin>>cnt[i];
}

ll mx=0; vector<ll>val[n+1];
for(ll i=1;i<=n;i++) { mx=max(cnt[i],mx); val[cnt[i]].push_back(i); }

vector<ll>ans;
ans.push_back(val[mx][0]);
ll pre=val[mx][0];
while(mx--)
{
  for(auto v:val[mx]) {
  cout<<"? "<<pre<<" 2 "<<pre<<" "<<v<<endl;
  ll x; cin>>x;
  if(x!=1) { ans.push_back(v); pre=v; break;}
  }
}
cout<<"! ";
cout<<ans.size()<<" ";
for(auto v:ans)cout<<v<<" "; cout<<endl;

}

}
