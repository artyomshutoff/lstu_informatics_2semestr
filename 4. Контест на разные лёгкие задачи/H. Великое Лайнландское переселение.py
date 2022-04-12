N = int(input())
A = list(map(int, input().split()))
ans = [-1] * N
S = []
for i in range(N):
    while len(S) != 0 and A[S[-1]] > A[i]:
        ans[S.pop()] = i
    S.append(i)
print(' '.join(map(str, ans)))