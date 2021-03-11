m1 = [[0 for i in range(2)] for j in range(2)]
m2 = [[0 for i in range(2)] for j in range(2)]
m3 = [[0 for i in range(2)] for j in range(2)]
k=0
for i in range(2):
	for j in range(2):
		m1[i][j] = input("Elemento da Matriz 1:")
		m2[i][j] = input("Elemento da Matriz 2:")

for i in range(2):
	for j in range(2):
		m3[i][j] = m1[i][j] + m2[i][j]

for i in range(2):
	for j in range(2):
		print(m3[i][j])