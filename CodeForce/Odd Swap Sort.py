import sys
input = sys.stdin.read

data = input().split()
index = 0

t = int(data[index])
index += 1

results = []
for _ in range(t):
    n = int(data[index])
    index += 1
    
    array = list(map(int, data[index:index + n]))
    index += n

    even_list = [x for x in array if x % 2 == 0]
    odd_list = [x for x in array if x % 2 != 0]

    a = even_list == sorted(even_list)
    b = odd_list == sorted(odd_list)

    if a and b:
        results.append("YES")
    else:
        results.append("NO")

sys.stdout.write("\n".join(results) + "\n")
