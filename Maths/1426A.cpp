#include<bits/stdc++.h>
typedef unsigned long long int ull;
using namespace std;
int main() {


    int a,b,c,d;

    cin>>a;


    c = 2;
    d = 0;

    int arr[a][2];

    int ans[a];

    for(b=0;b<a;b++) {
        d=0;
        c=2;

        cin>> arr[b][0] >> arr[b][1];

        while(arr[b][0]>c) {
            d = d+1;
            c=c+arr[b][1];
        }

        ans[b] = d+1;

    }

    for(b=0;b<a;b++) {
        cout<<ans[b];

        if(b<a-1) {
            cout<<endl;
        }
    }

}

