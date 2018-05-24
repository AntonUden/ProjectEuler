import math

result = 0;

def isPrime(number):
	if number < 2:
		return False
	
	for i in range(2, int(math.sqrt(number)) + 1):
		if number % i == 0:
			return False
	return True

for i in range(1, 2000000):
	if isPrime(i):
		result += i
		
print(result)