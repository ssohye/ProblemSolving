n=int(input())

dp=[0 for i in range(max(5,n+1))]
dp[1]=1
dp[2]=2
dp[3]=3
dp[4]=5
for i in range(5,n+1):
    if n==1 or n==2 or n==3 or n==4:
        print(dp[n])
        break
    dp[i]=dp[i-1]+dp[i-2]

print(dp[n])
