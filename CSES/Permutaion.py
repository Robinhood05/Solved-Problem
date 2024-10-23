n = int(input())

value = 2

if n == 1:
    print(1)
elif n <= 3:
    print("NO SOLUTION")
else:
    while value <= n:
        print(value, end=" ")
        value += 2

    value = 1
    while value <= n:
        print(value, end=" ")
        value += 2
