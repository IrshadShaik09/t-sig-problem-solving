# cook your dish here
for t in range(int(input())):
    a,b,c,d=map(int,input().split())
    if a==b: print("YES")
    elif a<b:
        if (a+c)>=b:print("YES")
        else: print("NO")
    elif a>b:
        if (b+d)>=a:print("YES")
        else: print("NO")
    else: print("NO")
        
