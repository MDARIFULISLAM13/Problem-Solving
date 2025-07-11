#include <iostream>
using namespace std;
#define ll long long
#define endl "\n"

struct Node{
  ll data[26];
  Node* next[26];
  Node(){for(ll i=0;i<26;i++) data[i]=0,next[i]=nullptr;}
};

int main()
{
 ll n; cin>>n; ll m; cin>>m;
 Node* start=new Node();
 for(ll x=0;x<n;x++)
 {
    string s; cin>>s;
    Node* crn=start;
    for(ll i=0;i<s.size();i++)
    {
      crn->data[s[i]-'a']++;
      if (crn->next[s[i] - 'a'] == nullptr)
      crn->next[s[i] - 'a'] = new Node();
      crn=crn->next[s[i]-'a'];
    }
 }

 for(ll x=0;x<m;x++)
 {
    string s; cin>>s;
    Node* crn=start;
    for(ll i=0;i<s.size();i++)
    {
        if(i==s.size()-1) {cout<<crn->data[s[i]-'a']<<endl; break;}
        crn=crn->next[s[i]-'a'];
        if(crn==nullptr) {cout<<0<<endl; break;}

    }
 }
}