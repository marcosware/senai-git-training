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
	cout << "Ex06 - Letra a) N�meros pares de 0 a n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
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
	cout << "\n\nEx06 - Letra b) Tabuada de n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	while(i <= 10) {
		cout << num << " x " << i << " = " << num*i << "\n";
		i++;
		}
	return 0;
}
int ex06_c() {
	int num = 0, sum = 0, size, i = 0;
	cout << "\n\nEx06 - Letra c) Soma de sequ�ncia de n�meros";
	cout << "\nPor favor, insira o tamanho da sequ�ncia: ";
	std::cin >> size;
	while(i < size) {
		cout << "Por favor, insira um n�mero: ";
		std::cin >> num;
		sum += num;
		i++;
		}
	cout << "A soma � igual a " << sum << ".";
	return 0;
}
int ex06_d() {
	int num = 13579, tries = 3, acerto = 0, tentativa = 0;
	cout << "\n\nEx06 - Letra d) Tr�s tentativas de senha";
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
		cout << "Senha incorreta. M�ximo de tentativas alcan�adas.";
	}
	else{
		cout << "Senha correta. Carregando acesso ao sistema...";
	}
	return 0;
}
int ex06_e() {
	int num = 0, sum = 0;
	cout << "\n\nEx06 - Letra e) Soma at� n�mero negativo";
	while(num >= 0) {
		cout << "\nPor favor, insira um n�mero: ";
		std::cin >> num;
		if(num >= 0) {
			sum += num;	
		}
	}
	cout << "A soma � igual a " << sum << ".";
	return 0;
}
int ex06_f() {
	int num, i = 0;
	cout << "\n\nEx06 - Letra f) N�meros pares de 0 at� n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
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



