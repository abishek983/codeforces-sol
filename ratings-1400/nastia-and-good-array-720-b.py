for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    min_ele = 1e9+7
    pos = 0
    for i in range(n):
        if(arr[i]<min_ele):
            min_ele = arr[i]
            pos = i

    print(n-1)
    for i in range(n):
        if(i==pos):
            continue
        print(pos+1, i+1, min_ele, min_ele+abs(i-pos))
      