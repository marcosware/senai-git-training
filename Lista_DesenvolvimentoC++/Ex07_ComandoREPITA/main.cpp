// Lista de Exercicios - Comando REPITA
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int ex07_a() {
	int num = 0, i = 0;
	cout << "Ex07 - Letra a) N�meros pares de 0 a n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	
	do {
		if(i % 2 == 0) {
			cout << i << " ";
		}
		i++;
	} while(i <= num);
	return 0;
}
int ex07_b() {
	int num = 0, i = 0;
	cout << "\n\nEx07 - Letra b) Tabuada de n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	do {
		cout << num << " x " << i << " = " << num*i << "\n";
		i++;
	} while(i <= 10);
	return 0;
}
int ex07_c() {
	int num = 0, sum = 0, size, i = 0;
	cout << "\n\nEx07 - Letra c) Soma de sequ�ncia de n�meros";
	cout << "\nPor favor, insira o tamanho da sequ�ncia: ";
	std::cin >> size;
	do {
		cout << "Por favor, insira um n�mero: ";
		std::cin >> num;
		sum += num;
		i++;
	} while(i < size);
	cout << "A soma � igual a " << sum << ".";
	return 0;
}
int ex07_d() {
	int num = 13579, tries = 3, acerto = 0, tentativa = 0;
	cout << "\n\nEx07 - Letra d) Tr�s tentativas de senha";
	do {
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
	} while (tries > 0);
	if(acerto == 0) {
		cout << "Senha incorreta. M�ximo de tentativas alcan�adas.";
	}
	else{
		cout << "Senha correta. Carregando acesso ao sistema...";
	}
	return 0;
}
int ex07_e() {
	int num = 0, sum = 0;
	cout << "\n\nEx07 - Letra e) Soma at� n�mero negativo";
	do {
		cout << "\nPor favor, insira um n�mero: ";
		std::cin >> num;
		if(num >= 0) {
			sum += num;	
		}
	} while(num >= 0);
	cout << "A soma � igual a " << sum << ".";
	return 0;
}
int ex07_f() {
	int num = 0, i = 0;
	cout << "\n\nEx07 - Letra f) N�meros pares de 0 a n�mero inserido";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	
	do {
		if(i % 2 == 0) {
			cout << i << " ";
		}
		i++;
	} while(i <= num);
	return 0;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex07_a();
	ex07_b();
	ex07_c();
	ex07_d();
	ex07_e();
	ex07_f();
	return 0;
}




