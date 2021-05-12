# https://codeforces.com/problemset/problem/1476/C
for _ in range(int(input())):
    n = int(input())
    barLength = list(map(int,input().split()))
    a = list(map(int,input().split()))
    b = list(map(int,input().split()))
    ans = 0
    prevDist = 0
    canTake = False
    for i in range(n-1, 0, -1):
        distance = barLength[i]-1
        if(canTake):
            distance = max(distance, prevDist)
        distance += 2 + abs(a[i] - b[i])
        ans = max(ans, distance)
        if(a[i]==b[i]):
            prevDist = 0
            canTake = False
        else:
            prevDist = distance - abs(a[i] - b[i]) + (barLength[i-1] - abs(a[i] - b[i]) - 1)
            canTake = True

    print(ans)