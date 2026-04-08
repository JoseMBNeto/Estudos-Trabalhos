class Matematica:
	@staticmethod
	def fibonacci(n):
		if (n <=1):
			return n
		return Matematica.fibonacci(n-1) + Matematica.fibonacci(n-2)