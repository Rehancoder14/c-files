t = int(input())

for i in range(t):
    n = int(input())
    fact = 1
    if(n<=1):
        print(1)
    else:
        for i in range(1,n+1):
            fact= fact*i
            
        print(fact)