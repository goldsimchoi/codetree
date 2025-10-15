a=[]

n=4

for i in range(n):
    b=list(map(int,input().split()))
    a.append(b)
    print(sum(a[i]))
