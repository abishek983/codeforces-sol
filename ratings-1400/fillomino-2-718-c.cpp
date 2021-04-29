// https://codeforces.com/contest/1517/problem/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin >> n;
    vector<int> arr(n);
    int ans[n][n];
    memset(ans, 0, sizeof(ans));
    for(int i=0;i<n;i++)
        cin >> arr[i];

    int num, freq, j, k;
    for(int i=0;i<n;i++){
        num = arr[i];
        freq = arr[i]-1;
        ans[i][i] = num;
        j = i-1;
        k = i;
        //j denotes col & k denotes row
        while(freq){
            if(j<0){
                j++;
            }
            else if(ans[k][j]!=0){
                //incrementing col as well as incrementing row
                k++;
            }
            else{
                ans[k][j] = num;
                j--;
                freq--;
            }
        }
        // break;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }    

    return 0;
}