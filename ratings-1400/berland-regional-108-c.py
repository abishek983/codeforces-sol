# https://codeforces.com/problemset/problem/1519/D
from collections import defaultdict
for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    dic = defaultdict(list)
    for i in range(n):
        dic[a[i]].append(b[i])
    for k,v in dic.items():
        v.sort(reverse=True)
        for i in range(1, len(v)):
            v[i] += v[i-1]
    ans = [0]*n
    for k,v in dic.items():
        m = len(v)
        for i in range(m):
            ans[i] += v[m - m%(i+1)-1]
    print(*ans)

