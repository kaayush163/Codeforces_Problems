
#include<bits/stdc++.h>
#define ll              long long

using namespace std;
int main()
{
    ll t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x > y)swap(x,y);
        if(x > z)swap(x,z);
        if(y > z)swap(y,z);
        if(y == z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<endl;
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}
