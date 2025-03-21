a = input()
b = input()
c = []
for i in range(max(len(a),len(b))):
    if i < len(a):
        c.append(a[i])
    if i < len(b):
        c.append(b[i])
print("".join(c))