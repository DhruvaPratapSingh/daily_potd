#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while (t--) {
       int a,b,c;
       cin>>a>>b>>c;
       if(a+c>=b+c)cout<<"first"<<endl;
       else cout<<"second"<<endl;
    }
    
    return 0;
}
