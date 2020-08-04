def fibonacci(n):
	if n < 0:
		raise ValueError("Negative arguments not implemented")
	return _fib_fast(n)[0]


def _fib_fast(n):
	if n == 0:
		return (0, 1)
	else:
		a, b = _fib_fast(n // 2)
		c = a * (b * 2 - a)
		d = a * a + b * b
		if n % 2 == 0:
			return (c, d)
		else:
			return (d, c + d)

T = int(input())
for t in range(T):
    val1 = 1
    val2 = 1;
    N = int(input())
    
    print(fibonacci(N + 1))