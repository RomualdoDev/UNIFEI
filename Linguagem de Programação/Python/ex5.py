import math
n = [0 for i in range(3)]

for i in range(3):
	print("Digite o termo de ordem ",2-i)
	n[i] = float(input())

delta = n[1]**2 + 4*n[0]*n[2] 

if(delta>=0):
	x1 = (-n[1] + math.sqrt(delta))/(2*n[0])
	x2 = (-n[1] - math.sqrt(delta))/(2*n[0])
	print("Soluções: \n x' =" ,x1, "\n x'' = ", x2 )
else:
	xr = -n[1] /(2*n[0])
	x1i = math.sqrt(math.fabs(delta))/(2*n[0])
	x2i = -math.sqrt(math.fabs(delta))/(2*n[0])
	if(x1i>0 and x2i>0):
		print("Soluções: \n x' =" ,xr, "+", x1i ,"i \n x'' = ",xr,"- ",x2i,"i")
	elif (x1i<0 and x2i>0):
		print("Soluções: \n x' =" ,xr, x1i ,"i \n x'' = ",xr,"+",x2i,"i")
	elif (x1i>0 and x2i<0):
		print("Soluções: \n x' =" ,xr,"+", x1i ,"i \n x'' = ",xr,x2i,"i")
	elif (x1i<0 and x2i<0):
		print("Soluções: \n x' =" ,xr, x1i ,"i \n x'' = ",xr,x2i,"i")

