for i in range(int(input())):
    x,n=map(int,input().split())
    l=list(map(int,input().strip().split()))
    l=sorted(l)
    l1=l[::-1]
    print(l1[n-1]-1)