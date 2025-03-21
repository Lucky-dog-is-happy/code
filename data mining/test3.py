def Char(str,n):
    while n > 0:
            n -= 1
            print(str)


a = input()
b = a[5:-1]
d = b[1:4]
e = int(b[-1])
Char(d,e)