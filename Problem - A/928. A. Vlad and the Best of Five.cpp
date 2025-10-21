#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string s;

    for(int i=0;i<t;i++){
        int countA = 0;
        int countB = 0;
        cin>>s;
        int size = s.size();
        for(int j=0;j<size;j++){
            if(s[j]=='A'){
                countA++;
            }
            else{
                countB++;
            }
        }
        if(countA++>countB){
        cout<<"A"<<endl;
    }
        else{
        cout<<"B"<<endl;
    }
    }
    
    return 0;
}
