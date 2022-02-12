t = int(input())
for i in range(t):
    num = int(input())
    n = num
    rem = 0
    revnum = 0
    while(num>0):
        rem = num%10
        revnum = (revnum*10)+ rem
        num = num//10

    if n==revnum:
        print("wins")
    else:
        print("loses")