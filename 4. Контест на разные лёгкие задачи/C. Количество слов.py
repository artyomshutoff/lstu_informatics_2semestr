# artyomshutoff
a = input()
b = a
for i in a:
    if i in ';:.,()!?':
        b = b.replace(i, ' ')
c = b.split()
n = len(c) - c.count('-')
print(n)