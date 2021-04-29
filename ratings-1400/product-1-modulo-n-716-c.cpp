//https://codeforces.com/problemset/problem/1514/C

#include<bits/stdc++.h>
using namespace std;

int gcd (int a, int b){
    if(a==0)
        return b;
    return gcd(b%a, a);
}


int main(){
    int t; long long product=1;
    cin >> t;
    vector<int> nums;
    for(int i=1;i<t;i++){
        if(gcd(i,t)==1){
            nums.push_back(i);
            product = (product%t * i%t)%t;
        }
    }
    int removeNum = product%t;
    cout << (removeNum != 1 ? nums.size()-1 : nums.size()) << endl;
    for(int i=0; i<nums.size();i++){
        if(removeNum !=1 && removeNum==nums[i])
            continue;
        cout << nums[i] << " ";
    } 

    return 0;
}