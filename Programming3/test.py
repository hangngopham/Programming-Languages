import random


dimension = input("Enter the dimension of the square matrix: ");

arr1 = []
for i in range(dimension):
	arr1.append([])
	for j in range(dimension):
		#arr1[i].append(random.random())
		arr1[i].append(random.randint(1,3))
		


arr2 = []
for i in range(dimension):
	arr2.append([])
	for j in range(dimension):
		#arr2[i].append(random.random())
		arr2[i].append(random.randint(1,3))
		

result = []
sum = 0
for i in range(dimension):
	result.append([])
	for j in range(dimension):	
		for k in range(dimension):
			sum = sum + arr1[i][k]*arr2[k][j]
		result[i].append(sum)
		sum = 0








