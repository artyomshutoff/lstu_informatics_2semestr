a = list(map(int, input().split()))[1:]
max_num = max(a)
min_num = min(a)
for i in range(len(a)):
	if a[i] == max_num:
		a[i] = min_num
print(' '.join(map(str, a)))