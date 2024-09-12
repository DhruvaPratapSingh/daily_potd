#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
int x;
srand(time(0));
int y=rand()%10;
int cnt=0;
cout<<"enter the value of x"<<endl;
while(x!=y){
cin>>x;
    if(x==y){
        cout<<"you guessed it "<<cnt<<" counts"<<endl;
        break;
    }
    if(x<y){
        cout<<"please enter the greater no."<<endl;
    }
    if(x>y){
        cout<<"please enter the smallest no."<<endl;
    }
    cnt++;
}
return 0;
}
