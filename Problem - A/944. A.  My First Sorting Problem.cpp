#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>a>>b;

        if(b<a){
            cout<<b<<" "<<a<<endl;
        }
        else{
            cout<<a<<" "<<b<<endl;
        }
    }

    return 0;
}
