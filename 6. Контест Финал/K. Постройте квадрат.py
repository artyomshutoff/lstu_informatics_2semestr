s = list(map(int, input().split()))
a = complex(s[0], s[1])
b = complex(s[2], s[3])
O = (a + b) / 2
c = (b - O) * 1j + O
d = (a - O) * 1j + O
print(c.real, c.imag)
print(d.real, d.imag)