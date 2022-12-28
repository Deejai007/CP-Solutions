t = int(input())
 
for _ in range(t):
    n = int(input())
    a = (n*(n-1)*(n+1))//3
    b = ((n)*(n+1)*(2*(n) + 1))//6
    ans = ((a + b)*2022)%1000000007
    print(ans)