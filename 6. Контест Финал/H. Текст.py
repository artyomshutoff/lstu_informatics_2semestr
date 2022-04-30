# artyomshutoff
import re
f = open('input.txt', 'r', encoding = 'cp866')
f1 = open('output.txt', 'w', encoding = 'cp866')
for s in f:
	f1.write(re.sub(r"(?<=[^a-zA-Z])?([a-zA-Z]+)(?=[^a-zA-Z])?", lambda x: x.group(0)[::-1], s))
f1.close()