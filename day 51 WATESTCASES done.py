for _ in range(int(input())):
    n = int(input())
    v = list(map(int, input().split()))
    s = input()
    ans = 101
    for i in range(n):
        if s[i] == '0':
            ans = min(ans, v[i])
    print(ans)