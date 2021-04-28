#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> arr(n);
        int x = 0;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            x ^= arr[i];
        }
        int xor_val = 0, ans = 0;
        for(int i=0;i<n;i++){
            xor_val ^= arr[i];
            if(xor_val == x){
                ans++;
                xor_val = 0;
            }
        }
        if(x==0)
            cout<< "YES" << endl;
        else
            cout << (ans > 1 ? "YES" : "NO") << "\n";
    }
    return 0;
}