// https://codeforces.com/problemset/problem/1519/D

#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n; cin >> n;
    vector<ll> a(n+1), b(n+1), pref(n+2, 0), suf(n+2, 0);
    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<=n;i++)
        cin >> b[i];

    for(int i=1, j=n; i<=n && j>=1; j--, i++){
        pref[i] = pref[i-1] + a[i] * b[i];
        suf[j] = suf[j+1] + a[j] * b[j];
    }

    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 0));
    for(int i=1;i<=n;i++){
        dp[i][i] = a[i] * b[i];
    }
    //here the dp states i and j denotes i has been swapped with j
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            if(i==j) continue;
            dp[i][j] = max(dp[i][j], dp[i-1][j+1] + a[i] * b[j] + b[i] * a[j]);
        }
    }
    ll ans = 0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        ans = max(ans, dp[i][j] + pref[j-1] + suf[i+1]);
        }
        // cout << suf[i] << endl;
    }
    cout << ans;
    return 0;
}