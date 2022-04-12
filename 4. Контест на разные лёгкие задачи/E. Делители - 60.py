def decomp(n):
    ans = []
    d = 2
    while d * d <= n:
        if n % d == 0:
            ans.append(d)
            n //= d
        else:
            d += 1
    if n > 1:
        ans.append(n)
    return ans
 
def cnt_same(A):
    B = []
    cnt = 1
    Ap=A[0]
    for i in range(1,len(A)):
        if A[i] == Ap:
            cnt+=1
        else:
            B.append(cnt)
            cnt=1
            Ap = A[i]
    B.append(cnt)
    return B
 
n = int(input())
A = cnt_same(decomp(n))
x = 1
for p in A:
    x *= 2*p+1
x = (x-1)//2
print(x)