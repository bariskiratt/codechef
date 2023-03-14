# cook your dish here
t = int(input())
for _ in range(t):
    a,b = map(int,input().split())
    rem = b - a 
    if rem == 0:
        print("Yes")
    elif rem >= a:
        print("yes")
    else:
        print("no")
