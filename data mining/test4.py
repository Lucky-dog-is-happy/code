a = input()
b = input()
c = len(a) // 2
if len(a) % 2 ==1:
    c += 1
d = a[:c] + b + a[c:]
print(d)