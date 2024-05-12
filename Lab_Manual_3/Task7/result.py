h1 = "c7bc71ad7009b49b8ac3dbdccbe0828"
h2 = "c6e852599b594f7e54db1da9e15c8729"

i = 0
cnt = 0

for element in range(0, len(h1)):
    if h1[element] == h2[element]:
	    cnt = cnt + 1

print(cnt)
