a, b = 0, 1
index = 0

while True:
	a, b = b, a + b
	index+=1
	if len(str(a)) >= 1000:
		break

print(index)
