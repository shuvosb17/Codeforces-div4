#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string a,b;
        cin>>a>>b;

        swap(a[0],b[0]);

        cout<<a<<" "<<b<<endl;

    }

    return 0;
}



//explicit string manipulation approach!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        string a,b;
        cin>>a>>b;

        // Separate first character and rest of the string
        char firstA = a[0];
        char firstB = b[0];
        string restA = a.substr(1);  // gets characters from index 1 to end
        string restB = b.substr(1);  // gets characters from index 1 to end

        // Concatenate: first char of b + rest of a
        string newA = firstB + restA;
        // Concatenate: first char of a + rest of b
        string newB = firstA + restB;

        cout<<newA<<" "<<newB<<endl;
    }

    return 0;
}
