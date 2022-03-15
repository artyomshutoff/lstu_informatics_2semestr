N = int(input())

top_3 = {}

for i in range(N):
	score, name = input().split(' ')
	score = int(score)
	if len(top_3) < 3:
		if name not in top_3:
			top_3[name] = score
		else:
			top_3[name] = score if score > top_3[name] else top_3[name]
	else:
		top_3 = {k: top_3[k] for k in sorted(top_3, key=top_3.get, reverse=True)}
		keys = list(top_3.keys())
		if name not in top_3:
			if top_3[keys[2]] < score:
				del top_3[keys[2]]
				top_3[name] = score
		else:
			top_3[name] = score if score > top_3[name] else top_3[name]

j = 0
for i in list(top_3.keys()):
	j += 1
	print(f'{j} place. {i}({top_3[i]})')
