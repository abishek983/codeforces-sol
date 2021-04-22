#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        if(n&1){
            cout << n/2 << " " << n/2 << " " << 1 <<  "\n";
        }
        else{
            int div = n/2;
            if(div&1){
                cout << div-1 << " " << div-1 << " " << 2 << "\n";
            }
            else{
                cout << div/2 << " " << div/2 << " " << div << "\n";
            }
        }
    }
    return 0;
}