
for i in range(int(input())):
    a=[]
    info=[int(k) for k in input().split()]
    for j in range(1,1+info[0]):
        tmp=[]
        start=int(str(j)+"01")
        for i in range(start,start+info[1]):
            tmp.append(i)
        a.append(tmp)
    shift=info[2]//info[0]
    flo=info[2]%info[0]
    print(a[flo-1][shift])
