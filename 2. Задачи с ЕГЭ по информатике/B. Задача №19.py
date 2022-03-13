# artyomshutoff

def compare_dates(a, b):
	a = list(map(int, a.split('.')))
	b = list(map(int, b.split('.')))
	compare_states = ''
	for i in range(3):
		if a[i] < b[i]:
			compare_states += '<'
		elif a[i] > b[i]:
			compare_states += '>'
		else:
			compare_states += '='
	for i in range(2, -1, -1):
		if compare_states[i] == '>':
			return -1
		if compare_states[i] == '<':
			return 1
	return 0

old_human = ['', '', '32.13.2101']
count = 0

for i in range(int(input())):
	human = input().split(' ')
	if compare_dates(human[2], old_human[2]) == 1:
		count = 1
		old_human = human
		continue
	if not compare_dates(human[2], old_human[2]):
		count += 1

if count == 1:
	print(' '.join(old_human))
else:
	print(count)