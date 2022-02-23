def f():
	n = int(input())
	a = 2
	b = 3
	if n == 1:
		print(3)
		return None
	while n > a**2:
		a += 1
		b += 2
	field = [[0, 0, 0] for i in range(b + 2)]
	
	c = b -2
	d = 3
	N = b + 2
	a -= 1
	
	for i in range(3):
		max_num_in_a = a**2
		for j in range(N - d, N - d - c, -1):
			field[j][i] = max_num_in_a
			max_num_in_a -= 1
		d -= 1
		c += 2
		a += 1
	
	for i in range(b + 2):
		for j in range(3):
			if field[i][j] == n:
				i_num = [i, j]
	
	i_nb = [[i_num[0], i_num[1] - 1], [i_num[0] - 1, i_num[1]], [i_num[0] + 1, i_num[1]], [i_num[0], i_num[1] + 1]]
	
	i_good = []
	
	for i in range(4):
		if (0 <= i_nb[i][0] < N) and (0 <= i_nb[i][1] < 3):
			i_good.append(i_nb[i])
	
	out = []
	
	for i in i_good:
		if field[i[0]][i[1]] != 0:
			out.append(field[i[0]][i[1]])
	
	out.sort()
	
	print(' '.join(str(i) for i in out))

f()