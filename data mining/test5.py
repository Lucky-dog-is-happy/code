a = ["abc", "cd", "def", "fg"]
b = []
for i in range(len(a)):
    if i < len(a)-1:
        if a[i][-1] == a[i+1][0]:
            a[i+1] = a[i+1][1:]
    b.append(a[i])
print("".join(b))