//https://codeforces.com/problemset/problem/1520/E

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int total = 0;
        vector<int> star_pos;
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                total++;
                star_pos.push_back(i);
            }
        }
        if(star_pos.size()==0){
            cout << 0 << endl;
            continue;
        }
        int mid = total/2;
        int temp = 1;
        long long int ans = 0;
        for(int i=0;i<mid;i++){
            ans += star_pos[mid] - star_pos[i] - temp;
            temp++;
        }    
        temp = 1;
        for(int i=mid+1;i<total;i++){
            ans += star_pos[i] - star_pos[mid] - temp;
            temp++;
        }
        cout << ans << endl;
    }
    
return 0;
}