def collatz_sequence(x):
	l = 1
	if x < 1:
		return l
	while x > 1:
		l+=1
		if x % 2 == 0:
			x = x / 2
		else:
			x = 3 * x + 1
	return l

largest = 0;
largestStart = 0;

for i in range(0, 1000000):
	s = collatz_sequence(i)
	if s > largest:
		largest = s
		largestStart = i

print(largestStart)