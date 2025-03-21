a = input()
b = a.strip('[]')
list = []
for i in b.split('，'):
    list.append(i.strip().strip("'").strip('"'))
c = '"'+"-".join(list)+'"'
print(c)