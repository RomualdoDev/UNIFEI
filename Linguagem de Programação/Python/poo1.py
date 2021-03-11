import point as pt

class Retangulo:
	def __init__ (self, lar, alt):
		self.largura = lar
		self.altura = alt

	def area(self):
		return self.largura * self.altura

r = Retangulo(8,4)
p = pt.Point(r.largura/2,r.altura/2)

print("O centro é:" ,p.x, " e ",p.y)
print("A area é:",r.area())