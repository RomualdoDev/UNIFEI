a = int(input("Entre com um inteiro: "))
b = int(input("Entre com um segundo inteiro: "))

exp = a**2 + b*10
seq = [i for i in range(10)]

for i in range(5):
	print("Resp ",i,":",exp+seq[i])

print("Final da Execução", end =' ')