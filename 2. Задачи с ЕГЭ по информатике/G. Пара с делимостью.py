DEL_7, MAX = 0, 0
while True:
    n = int(input())
    if n == 0:
        break
    if not n % 7 and n % 49 and n > DEL_7:
        DEL_7 = n
    elif n % 7 and n > MAX:
        MAX = n
if DEL_7 and MAX:
    print(DEL_7 * MAX)
else:
    print('1')