h1 = "19dba79dcb51615e11737633eb13f00efc1c4a1cab72efd882702277347e71be"
h2 = "164b5d2652ea5cd22fdcd18e14da593b048b85f3a9332b7c7704b1fb5cc58e14"

i = 0
cnt = 0

for element in range(0, len(h1)):
    if h1[element] == h2[element]:
	    cnt = cnt + 1

print(cnt)
