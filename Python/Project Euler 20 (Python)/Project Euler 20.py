def Fac(n):
	if n == 1:
		return n
	return n * Fac(n - 1)

def sum_digits(n):
    s = 0
    while n:
        s += n % 10
        n //= 10
    return s

print(sum_digits(Fac(100)))