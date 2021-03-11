n1 = float(input("Digite a primeira nota:"))
while(n1>=10):
	n1 = float(input("Digite a primeira nota:"))
n2 = float(input("Digite a segunda nota:"))
while(n2>=10):
	n2 = float(input("Digite a primeira nota:"))
n3 = float(input("Digite a terceira nota:"))
while(n3>=10):
	n3 = float(input("Digite a primeira nota:"))

media = (n1+n2+n3)/3
if (media >= 7):
	print("Aluno aprovado com média :", media)
else:
	print("Média abaixo de 7! Média: ", media)
	n_rec = float(input("Digite a nota do exame:"))
	media_rec = (media + n_rec)/2
	if (media_rec >= 7) :
		print("Aprovado em exame com média", media_rec)
	else:
		print("Sinto muito, sua média foi:", media_rec)