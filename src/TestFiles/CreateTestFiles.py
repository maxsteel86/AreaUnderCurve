#!/usr/bin/python

def GenerateLinearTestFile(fileName):
	with open(fileName, 'w') as f:
		for i in range(0, 1001, 1):
			x = i / 10.0
			y = x

			f.write(str(x) + ', ' + str(y) + '\r\n')

def GeneratePolynomialTestFile(fileName, power):
	with open(fileName, 'w') as f:
		for i in range(0, 1001, 1):
			x = i / 10.0
			y = x ** power
			
			f.write(str(x) + ', ' + str(y) + '\r\n')

GenerateLinearTestFile('LinearTestFile.txt')
GeneratePolynomialTestFile('QuadraticTestFile.txt', 2)
GeneratePolynomialTestFile('CubicTestFile.txt', 3)



