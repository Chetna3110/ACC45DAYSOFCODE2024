
for i in range(int(input())):
    x, y, r = map(int, input().split())
    extra = int(r/30)
    total = x + extra
    if(total % y ==0):
        print(int(total/y))
    else:
        rem = total%y
        print(int((total + y - rem)/y))
