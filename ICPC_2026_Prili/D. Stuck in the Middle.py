t = int(input())

for _ in range(t):
    n = int(input())
    s = input()

    b = 1
    b1 = []

    for i in range(1, n):
        if s[i] != s[i - 1]:
            b = b + 1
            b1.append(i)
        if b == 4:
            break

    if b >= 4:
        print("NO")
        continue
    if b <= 2:
        print("YES")
        continue

    y = b1[1] - b1[0]
    a = "YES"
    for i in range(b1[0], b1[1]):
        if i - y >= 0 and i + y <= n - 1:
            a = "NO"
            break
    print(a)