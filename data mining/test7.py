set_a = {1,2,3,4,5}
set_b = {4,5,6,7,8}
set_c = set_a - set_a.intersection(set_b)
set_d = set_b - set_a.intersection(set_b)
set_e = set_c.union(set_d)
print(set_e)