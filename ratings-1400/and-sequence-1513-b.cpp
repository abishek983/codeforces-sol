#include<bits/stdc++.h>
using namespace std;

const long long MOD = 1e9+7;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        int arr[n]; int x = INT_MAX;
        for(int i=0;i<n;i++){
            cin >> arr[i];
            x = min(x,arr[i]);
        }

        int count = 0,flag=0;
        for(int i=0;i<n;i++){
            if((x&arr[i]) != x){
                cout << 0 << "\n";
                flag = 1;
                break;
            }
            else if(arr[i] == x){
                count++;
            }
        }
        if(flag) continue;
        long long fact = 1;
        for(int i=1;i<n-1;i++)
            fact = (1LL*fact*i)%MOD;
        int ans = (1LL * count * (count - 1)) % MOD;
        ans = (1LL * ans * fact) % MOD;
        cout << ans << "\n";
    }
    return 0;
}