DMAX = 100
c = [0 for i in range(DMAX)]
N = int(input())
for i in range(N):
	D, K = map(int, input().split())
	r = K % D
	if r > 0:
		c[r] += 1
imax = 1
for i in range(DMAX):
	if c[i] >= c[imax]:
		imax = i
if c[imax] == 0:
	imax = 0
print(imax)