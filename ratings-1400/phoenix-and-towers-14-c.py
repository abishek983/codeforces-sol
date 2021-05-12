import heapq

for _ in range(int(input())):
    n, m, x = map(int, input().split())
    arr = list(map(int, input().split()))
    pq = []
    for i in range(m):
        heapq.heappush(pq, (0, i))
    ans = []
    print("YES")
    for i in range(n):
        temp = heapq.heappop(pq)
        ans.append(temp[1]+1)
        # temp[0] += arr[i]
        heapq.heappush(pq, (temp[0]+arr[i], temp[1]))
    
    print(*ans)