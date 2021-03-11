n = [0 for i in range(5)]

soma = 0
for i in range(5):
	print("Digite a nota",  i+1) 
	n[i] = float(input())
	while n[i] >=10:
		print("A nota dever ser menor ou igual a 10! Digite novamente a nota",  i+1)
		n[i] = float(input())

for i in range(5):
	for j in range(5):
		if(n[i]>n[j]):
			aux = n[i]
			n[i] = n[j]
			n[j] = aux

for i in range(4):
	soma+=n[i]

media = soma/4

if(media>=9):
	print("Sua média foi " ,media,"= A")
elif (media>=8 and media<=8.9):
	print("Sua média foi " ,media,"= B")
elif (media>=7 and media<=7.9):
	print("Sua média foi " ,media,"= C")
elif (media>=6 and media<=6.9):
	print("Sua média foi " ,media,"= D")
else:
	print("Reprovado com média: ",media)
		
