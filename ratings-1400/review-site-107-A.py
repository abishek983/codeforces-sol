# https://codeforces.com/problemset/problem/1511/A

for _ in range(int(input())):
    n = int(input())
    arr = list(map(int,input().split()))
    upvotes = 0
    downvotes = 0
    for i in arr:
        if(i==1 or i==3):
            upvotes +=1
        
    
    print(upvotes)