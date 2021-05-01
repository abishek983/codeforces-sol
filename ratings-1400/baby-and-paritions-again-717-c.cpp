// https://codeforces.com/problemset/problem/1516/C

#include <bits/stdc++.h>
using namespace std;

bool isPossibleUtil(vector<int> arr, int sum)
{
    int n = arr.size();
    bool dp[sum + 1][n + 1];
    for (int i = 0; i <= sum; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 && j == 0)
            {
                dp[i][j] = true;
            }
            else if (i == 0)
            {
                dp[i][j] = true;
            }
            else if (j == 0)
            {
                dp[i][j] = false;
            }
            else if (arr[j - 1] > i)
            {
                dp[i][j] = dp[i][j - 1];
            }
            else
            {
                dp[i][j] = dp[i][j - 1] | dp[i - arr[j - 1]][j - 1];
            }
        }
    }
    return dp[sum][n];
}

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum & 1)
    {
        cout << 0 << endl;
    }
    else
    {
        bool isPossible = isPossibleUtil(arr, sum / 2);
        if (!isPossible)
        {
            cout << 0 << endl;
        }
        else
        {
            while (true)
            {
                int indx = -1;
                for (int i = 0; i < n; i++)
                {
                    if (arr[i] & 1)
                    {
                        indx = i;
                        break;
                    }
                    arr[i] = arr[i] / 2;
                }
                if(indx != -1){
                    cout << 1 << endl << indx+1;
                    break;
                }
            }
        }
    }
return 0;
}