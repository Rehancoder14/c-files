t = int(input())
for i in range(t):
    n = int(input())
    cnt = 0
    while n>0:
        x = n%10
        n = n//10
        if(x ==4):
            cnt +=  1
    print(cnt)

# t = int(input())
# for i in range(t):
#     n = input()
    