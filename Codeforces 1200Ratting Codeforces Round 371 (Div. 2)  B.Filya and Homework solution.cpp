#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
objerbation: 4 Unique value or above element->NO
obj: 2 Unique element: yes
obj: 1 Unique element:yes
obj: 3 Unique element:
     1)if difference of element is equal:yes
     2)if difference of element is not equal: NO
*/

void zayed()
{
ll n,cnt=0;
cin>>n;
vector<ll>v(n);
for(ll i=0;i<n;i++)
{
   cin>>v[i]; 
}
set<ll>st;
for(auto u:v)
{
   st.insert(u);
}
if(st.size()>3)
{
    cout<<"NO"<<endl;
    return;
}
else if(st.size()==2 || st.size()==1)
{
    cout<<"YES"<<endl;
    return;
}
vector<ll>v1;
for(auto i:st)
{
    v1.push_back(i);
}
ll x=v1[1]-v1[0];
ll y=v1[2]-v1[1];
if(y==x)
{
  cout<<"YES"<<endl;
 return;
}
else{
 cout<<"NO"<<endl;
 return;
}
}
int main()
{

zayed();

return 0;
}
