a=input()

count=0
for i in range(len(a)-1):
    if a[i]!=a[i+1]:
        count+=1

print((count+1)//2)

    
