import math

def isPrime(number):
	if number < 2:
		return False
	
	for i in range(2, int(math.sqrt(number)) + 1):
		if number % i == 0:
			return False
	return True

found = 0
i = 0
while True:
	i+=1
	if isPrime(i):
		found+=1
		if found >= 10001:
			print(i)
			break