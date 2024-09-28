// Lista de Exercicios - Comando ENQUANTO
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int ex06_a() {
	int num = 0, i = 0;
	cout << "Ex06 - Letra a) Números pares de 0 a número inserido";
	cout << "\nPor favor, insira um número: ";
	std::cin >> num;
	while(i <= num) {
		if(i % 2 == 0) {
			cout << i << " ";
		}
		i++;
	}
	return 0;
}
int ex06_b() {
	int num = 0, i = 0;
	cout << "\n\nEx06 - Letra b) Tabuada de número inserido";
	cout << "\nPor favor, insira um número: ";
	std::cin >> num;
	while(i <= 10) {
		cout << num << " x " << i << " = " << num*i << "\n";
		i++;
		}
	return 0;
}
int ex06_c() {
	int num = 0, sum = 0, size, i = 0;
	cout << "\n\nEx06 - Letra c) Soma de sequência de números";
	cout << "\nPor favor, insira o tamanho da sequência: ";
	std::cin >> size;
	while(i < size) {
		cout << "Por favor, insira um número: ";
		std::cin >> num;
		sum += num;
		i++;
		}
	cout << "A soma é igual a " << sum << ".";
	return 0;
}
int ex06_d() {
	int num = 13579, tries = 3, acerto = 0, tentativa = 0;
	cout << "\n\nEx06 - Letra d) Três tentativas de senha";
	while(tries > 0) {
		cout << "\nSENHA: ";
		std::cin >> tentativa;
		if(tentativa == num) {
			acerto = 1;
			tries = 0;
		}
		else if(tries > 1){
			cout << "\nSenha incorreta. Tente novamente.";
		}
		tries--;
	}
	if(acerto == 0) {
		cout << "Senha incorreta. Máximo de tentativas alcançadas.";
	}
	else{
		cout << "Senha correta. Carregando acesso ao sistema...";
	}
	return 0;
}
int ex06_e() {
	int num = 0, sum = 0;
	cout << "\n\nEx06 - Letra e) Soma até número negativo";
	while(num >= 0) {
		cout << "\nPor favor, insira um número: ";
		std::cin >> num;
		if(num >= 0) {
			sum += num;	
		}
	}
	cout << "A soma é igual a " << sum << ".";
	return 0;
}
int ex06_f() {
	int num, i = 0;
	cout << "\n\nEx06 - Letra f) Números pares de 0 até número inserido";
	cout << "\nPor favor, insira um número: ";
	std::cin >> num;
	while(i <= num) {
		if(i % 2 == 0) {
			cout << i << " ";
		}
		i++;
	}
	return 0;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex06_a();
	ex06_b();
	ex06_c();
	ex06_d();
	ex06_e();
	ex06_f();
	return 0;
}



