#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        map<int,int> mp;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        int max_n = INT_MIN;
        for(auto x: mp){
            if(x.second > max_n){
                max_n = max(x.second, max_n);
            }
        }
        int ans = 2*max_n - n;
        if(ans<=0){
            if(n&1)
                cout << 1 << "\n";
            else
                cout << 0 << "\n";
        }
        else{
            cout << ans << "\n";
        }
    }
    return 0;
}