n = int(input())
hs = []

for i in range(n):
	h = input().split()
	hs.append(h)

hs = sorted(hs, key = lambda x: (int(x[2]) + int(x[3]) + int(x[4])) / 3, reverse = True)

for i in hs:
	print(i[0], i[1])