# cook your dish here
for i in range(int(input())):
    n= int(input())
    s=input()
    re=''
    for i in range(0,n,2):#we skip 2 spaces so that while splitting we don't get same two binary numbers twice
        if(s[i:i+2]=='00'):#from range i to i+2 i.e. i and i+1 will be checked for...
            re=re+'A'
        elif(s[i:i+2]=='01'):
            re=re+'T'
        elif(s[i:i+2]=='10'):
            re=re+'C'
        elif(s[i:i+2]=='11'):
            re=re+'G'
    print(re)