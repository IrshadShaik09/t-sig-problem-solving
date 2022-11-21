# cook your dish here
t = int(input())
for i in range(t):
    p,q,a,b = map(int,input().split())
    if (p,q) !=(a,b) :
        if ((p+q)%2 == 0 and (a+b)%2==0) or ((p+q)%2!=0 and (a+b)%2!=0):
            print(2)
        else:
            print(1)
    else:
        print(0)
