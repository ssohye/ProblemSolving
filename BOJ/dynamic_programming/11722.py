n=int(input())
arr=list(map(int,input().split()))
dp=[1 for i in range(n)]


for i in range(n):
    for j in range(0,i):
        if arr[j]>arr[i]:
            dp[i]=max(dp[j]+1,dp[i])
    
        

print(max(dp))
