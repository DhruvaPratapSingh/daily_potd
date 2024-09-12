// https://www.geeksforgeeks.org/problems/sum-of-prime4751/1
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
vector<int> sieveOfEratosthenes(int N) {
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;  // 0 and 1 are not prime numbers

    for (int p = 2; p * p <= N; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= N; i += p)
                isPrime[i] = false;
        }
    }
    vector<int> primes;
    for (int p = 2; p <= N; ++p) {
        if (isPrime[p])
            primes.push_back(p);
    }

    return primes;
}
    vector<int> getPrimes(int n) {
       
       vector<int>allprimes=sieveOfEratosthenes(n);
       int p=allprimes.size();
       unordered_map<int,int>m;
       for(int ele:allprimes)m[ele]++;
       for(int i=0;i<p;i++){
           int diff=n-allprimes[i];
           if(m.find(diff)!=m.end()){
              return {allprimes[i],diff};
           }
       }
       return {-1,-1};
    }
int main(){
// driver code 
return 0;
}

#include<iostream>
#include<vector>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
       int ycount = 0;
        int x,y;
        for(int i=0;i<n;i++){
             int x,y;
            cin >> x;
            cin >> y;
          
            if(y == 1){
                ycount++;
            }
        }
        cout << ycount*2  << endl;

    }
    
}
