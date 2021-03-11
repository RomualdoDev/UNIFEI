ge = [] 

def saque(self,valor):
	if self.saldo >= valor:
		self.saldo -= valor
		s = self.cliente.nome + " Sacou: " + valor
		ge.append(s)

def credito(self,valor):
	self.saldo += valor
	c = self.cliente.nome + " Creditou: " + valor
	ge.append(c)

def imprimir_extratos(self):
	for i in ge:
		print(ge[i])

------------------------------------------------------------------------
from cliente import Cliente
from conta import Conta
class Cliente_VIP(Cliente,Conta):
	def __init__(self, li):
		Cliente.__init__ (self,nome telefone)
		Conta.__init__(self, Cliente_VIP,numero,saldo)
		self.linha = li

	def emprestimo(self,valor)
		if(valor<=linha):
			self.credito(valor)
