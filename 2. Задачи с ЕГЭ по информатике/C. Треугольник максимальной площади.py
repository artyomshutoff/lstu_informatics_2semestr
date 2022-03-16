x_axis = []
y_axis = []

for _ in range(int(input())):
    p = list(map(int, input().split()))
    x_axis.append(p[0]); y_axis.append(p[1])

if len([num for num in y_axis if num == 0]) < 2:
    print(0)
    
else:
    max_sq = 0
    
    with_zeros = [i for i in range(len(x_axis)) if y_axis[i] == 0]
    max_p = max([x_axis[i] for i in with_zeros])
    min_p = min([x_axis[i] for i in with_zeros])
    x_vec_on_x = max_p - min_p
    
    for j in sorted(with_zeros)[::-1]:
        x_axis.pop(j)
        y_axis.pop(j)
        
    for i in range(len(x_axis)):
        sq = 0.5 * abs((max_p - min_p)*y_axis[i])
        if sq > max_sq:
            max_sq = sq
    
    print(max_sq)  