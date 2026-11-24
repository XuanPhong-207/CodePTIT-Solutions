#include <bits/stdc++.h>
using namespace std;

const int maxn = 10000;
int prime[maxn + 1];

void sieve() {
    for (int i = 0; i <= maxn; i++) {
        prime[i] = 1;
    }
    prime[0] = 0; prime[1] = 0;
    for (int i = 2; i <= sqrt(maxn); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= maxn; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        
        for (int i = 1; i <= n; i++) {
            if(i==1) cout<<"1"<<" ";
            else if(i%2==0) cout << 2 << " ";
            else if (prime[i]==1) cout << i << " ";
            else{
            for (int j = 2; j <= i; j++) {
                if (i % j == 0) {
                    cout << j << " "; 
                    break;
                }
            }
        }
        }
        cout << endl;
    }
    return 0;
}