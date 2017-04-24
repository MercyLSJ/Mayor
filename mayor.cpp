/*
	Mayor
	20170423
	Mercedes Salcedo
	K1051 
*/

#include <iostream>

int main(){

	unsigned a,b;

	std::cin >> a;
	std::cin >> b;

if(a>b)
	std::cout << a << " es el numero mayor";
	
	else if (b>a)
		std::cout << b << " es el numero mayor";

	else
		std::cout << "Los numeros son iguales";
}