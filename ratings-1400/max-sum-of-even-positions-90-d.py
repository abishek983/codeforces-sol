for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    sum = 0
    for i in range(n):
        if(i%2==0):
            sum += arr[i]
    prefSum = 0
    maxDiff = 0
    for i in range(1,n,2):
        prefSum = max(prefSum + arr[i] - arr[i-1], 0)
        maxDiff = max(maxDiff,prefSum)
    prefSum = 0
    for i in range(1,n-1,2):
        prefSum = max(prefSum + arr[i] - arr[i+1], 0)
        maxDiff = max(maxDiff, prefSum)

    print(sum+maxDiff)