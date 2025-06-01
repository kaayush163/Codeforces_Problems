#include<bits/stdc++.h>
typedef unsigned long long int ull;
using namespace std;
int main() {


    int t;
    cin>>t;
    int n,sum,odd,even;
    while(t--) {
        cin>>n;
        sum = 0;

        odd = 0;
        even = 0;

        int arr[n];

        for(int j=0;j<n;j++) {
            cin>>arr[j];

            if(arr[j]%2!=0 || arr[j]==1) {
                odd++;
            }
            else{
                even++;
            }

            sum+=arr[j];
        }

        if(sum%2!=0 || sum==1) {
            cout<<"Yes"<<endl;

        }
        else{
            if(odd!=0 && even!=0) {
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }

    }

    return 0;

}

