#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    string s;
 
    for(int i=0;i<t;i++){
        cin>>s;
        int size= s.size()-2;
        for(int j=0;j<size;j++){
            cout<<s[j];
        }
       cout<<"i"<<endl;   
    }
 
    return 0;
}
