import random
import time

n = 4096
def matrix(n):
	 # return [[random.randint(1, 5) for i in range(n)] for j in range(n)]
	 return [[random.random() for i in range(n)] for j in range(n)]

X = matrix(n)
Y = matrix(n)


def multiplic(X, Y, n):
	Z = [[0]*n]*n
	for i in range(n):
		for j in range(n):
			for k in range(n):
				Z[i][j] += X[i][k] * Y[k][j]
	return Z

mul= time.time()
Z = multiplic(X, Y, n)
mul=time.time() - mul

print("Meat part time in seconds ", mul)