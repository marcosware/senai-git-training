// Lista de Exercicios - Comando PARA
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int ex05_a() {
	cout << "Ex05 - Letra a) N�meros pares de 0 a 100\n";
	for(int i = 0; i <= 100; i++) {
		if(i % 2 == 0) {
			cout << i << " ";
		}
	}
	return 0;
}
int ex05_b() {
	int num;
	cout << "\n\nEx05 - Letra b) N�meros pares de 0 a n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	for(int i = 0; i <= num; i++) {
		if(i % 2 == 0) {
			cout << i << " ";	
		}
	}
	return 0;
}
int ex05_c() {
	string word;
	cout << "\n\nEx05 - Letra c) Cada letra da palavra";
	cout << "\nPor favor, insira uma palavra: ";
	std::cin >> word;
	for(int i = 0; i < word.length(); i++) {
		cout << word.at(i) << endl;
	}
	return 0;
}
int ex05_d() {
	int num;
	cout << "\n\nEx05 - Letra d) Soma de 1 a n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	int sum = 0;
	for(int i = 1; i <= num; i++) {
		sum += i;
	}
	cout << "A soma � igual a " << sum << ".";
	return 0;
}
int ex05_e() {
	int num, prime = 1;
	cout << "\n\nEx05 - Letra e) N�mero primo";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	for(int i = 2; i <= (num/2); i++) {
		if(num % i == 0) {
			prime = 0;
		}
	}
	if(prime == 1) {
		cout << "O n�mero " << num << " � primo.";
	}
	else{
		cout << "O n�mero " << num << " n�o � primo.";
	}
	return 0;
}
int ex05_f() {
	int size, num, max = 0;
	cout << "\n\nEx05 - Letra f) Maior n�mero de uma sequ�ncia";
	cout << "\nPor favor, insira o tamanho da sequ�ncia: ";
	std::cin >> size;
	for(int i = 0; i < size; i++) {
		cout << "\nPor favor, insira o n�mero n� " << i+1 << ": ";
		std::cin >> num;
		if(num > max) {
			max = num;
		}
	}
	cout << "\nO maior n�mero da sequ�ncia � " << max << ".";
	return 0;
}
int ex05_g() {
	cout << "\n\nEx05 - Letra g) Tabuada de 5";
	for(int i = 1; i <= 10; i++) {
		cout << "\n5 x " << i << " = " << 5*i;
	}
	return 0;
}
int ex05_h() {
	int num;
	cout << "\n\nEx05 - Letra h) Divisores de um n�mero";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	for(int i = 1; i <= num; i++) {
		if(num % i == 0) {
			cout << i << " ";
		}
	}
	return 0;
}
int ex05_i() {
	int prime;
	cout << "\n\nEx05 - Letra i) N�mero primos entre 1 e 100\n";
	for(int i= 2; i <= 100; i++) {
		prime = 1;
		for(int j = 2; j <= (i/2); j++) {
			if(i % j == 0) {
				prime = 0;
			}
		}
		if(prime == 1) {
			cout << i << " ";
		}
	}
	return 0;
	
}
int ex05_j() {
	int sum = 0;
	cout << "\n\nEx05 - Letra j) Soma dos n�meros pares entre 1 e 100";
	for(int i = 1; i <= 100; i++) {
		if(i % 2 == 0) {
			sum += i;
		}
	}
	cout << "\nA soma � igual a " << sum << ".";
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex05_a();
	ex05_b();
	ex05_c();
	ex05_d();
	ex05_e();
	ex05_f();
	ex05_g();
	ex05_h();
	ex05_i();
	ex05_j();
	return 0;
}


