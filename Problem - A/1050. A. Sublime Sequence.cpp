#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,x,n;
    cin>>t;

    for(int i=0;i<t;i++){
        cin>>x>>n;
        
            if(n%2==0){
                cout<<"0"<<endl;
            }
            else{
                cout<<x<<endl;
            }
    }

    return 0;
}
