#include <bits/stdc++.h>
#include<algorithm>
#include<stdexcept>
#include<iterator>
#include<fstream>
#define ll long long
#define vi vector<int>
#define deck deque<int>
#define li list<int>
#define fli forward_list<int>
#define stck stack<int>
#define print(v) copy(v.begin(),v.end(),ostream_iterator<int>(cout," "));
#define input(v) copy(v.begin(),v.end(),istream_iterator<int>(cin));
#define copy1(v1,v2) copy(v1.begin(),v1.end(),back_inserter(v2));
#define LOL ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
using namespace std;
    const int N=1e5+5;
void sonic() {
    ll x,y,o=0;
    cin>>x>>y;
    ll n=x-y;
    for (ll i = 2; i*i <=n ; ++i) {
        if(n%i==0){
            o++;
            break;
        }
    }
    if (n>1)o++;
    if (o!=0){
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
}
int main() {
    LOL
    int t;
    cin>>t;
    while(t--)
        sonic();
}
