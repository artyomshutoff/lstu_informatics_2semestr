N = int(input())
a = list(map(int, input().split()))
b = sorted(list(set(a)), reverse = True)
print(b[1])