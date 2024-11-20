# cook your dish here
t = int(input())
for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))
    t_sum = sum(a)
    
    if n % 2 == 0:
        print(abs(t_sum) // 2)
    else:
        print("-1")
