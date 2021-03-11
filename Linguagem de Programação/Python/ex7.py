def resto_rec (de,do):
	if(de<do):
		return de
	else:
		return resto_rec(de-do,do)

def resto_it(de,do):
	while(de>=do):
		de-=do
	return de

def quo_it(de,do):
	i = 0
	while(de>=do):
		de-=do
		i+=1
	return i

dividendo = float(input("Digite o dividendo"))
divisor = float(input("Digite o divisor"))

print("O resto da divisão é:\n Recursivo: ",resto_rec(dividendo,divisor),"\n Iterativo:",resto_it(dividendo,divisor),
	"\nQuociente: ",quo_it(dividendo,divisor))
