
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s;
        int len = s.length();
        for(int i=0; i<len-1; i++){
            if(i == 0){
                t +=s[i];
            }
            if(s[i] == s[i-1]){
                t +=s[i];
                i++;
            }
        }
        t +=s[len-1];
        cout<<t<<endl;
    }

    return 0;
}
