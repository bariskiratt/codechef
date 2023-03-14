# cook your dish here
t = int(input())

for _ in range(t):
    n,q = map(int,input().split())
    a = list(map(int,input().split()))
    s = 0
    for __ in range(q):
        l,r = map(int,input().split())
        if (r-l) % 2 == 0:
            s += 1 
    print(sum(a) + s )
        

                
            
    
