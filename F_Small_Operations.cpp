#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
#define sp(x) fixed << setprecision(x)
#define memo(a,b) memset(a,b,sizeof(a))

ll slv()
{

ll x,y,k; cin>>x>>y>>k;
ll lcm=x*y/__gcd(x,y);

ll ex=y/__gcd(x,y);
ll cnt=0;
for(ll i=k;i>1;i--) while(ex%i==0) { cnt++; ex/=i; cout<<i<<endl;}
if(ex!=1) return -1;

for(ll i=k;i>1;i--) while(lcm%i==0 && lcm>y) { cnt++; lcm/=i;}
return cnt;
}

int main ()
{
ios_base::sync_with_stdio(0);cin.tie(0);
int test;
cin >>test;
while (test--)
{
cout<<slv()<<"<- ans"<<endl;
}

}