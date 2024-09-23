// Lista de Exercicios - Comando ESCOLHA
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int ex04_a() {
	int num;
	cout << "Ex04 - Letra a) Hor�rios do dia";
	cout << "\nDigite um n�mero de 1 a 3: ";
	std::cin >> num;
	switch(num) {
		case 1:
			cout << "Hor�rio: MANH�";
			break;
		case 2:
			cout << "Hor�rio: TARDE";
			break;
		case 3:
			cout << "Hor�rio: NOITE";
			break;
		default:
			cout << "N�mero inv�lido";
			break;
	}
	return 0;
}
int ex04_b() {
	int prim, seg, oper;
	cout << "\n\nEx04 - Letra b) C�lculo com menu de op��es";
	cout << "\nEscolha um operador:\n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n";
	std::cin >> oper;
	cout << "\nPor favor, digite o primeiro valor: ";
	std::cin >> prim;
	cout << "\nPor favor, digite o segundo valor: ";
	std::cin >> seg;
	cout << "O resultado �: ";
	switch(oper) {
		case 1:
			cout << prim + seg;
			break;
		case 2:
			cout << prim - seg;
			break;
		case 3:
			cout << prim * seg;
			break;
		case 4:
			cout << prim / seg;
			break;
		default:
			cout << "Inv�lido!";
			break;
	}
	return 0;
}
int ex04_c() {
	int day;
	cout << "\n\nEx04 - Letra c) Dias da semana";
	cout << "\nPor favor, escolha um dia: ";
	cout << "\n1 - Domingo   |  5 - Quinta";
	cout << "\n2 - Segunda   |  6 - Sexta";
	cout << "\n3 - Ter�a     |  7 - S�bado";
	cout << "\n4 - Quarta    |            \n";
	std::cin >> day;
	switch(day) {
		case 1: case 7:
			cout << "O dia � fim de semana.";
			break;
		case 2: case 3: case 4: case 5: case 6:
			cout << "O dia � �til.";
			break;
		default:
			cout << "Op��o inv�lida.";
			break;
	}
	return 0;
}
int ex04_d() {
	int anim;
	cout << "\n\nEx04 - Letra d) Sons de animais";
	cout << "\nPor favor, escolha um animal: \n1 - Cachorro\n2 - Gato\n3 - P�ssaro\n";
	std::cin >> anim;
	switch(anim) {
		case 1:
			cout << "Au au!";
			break;
		case 2:
			cout << "Miau!";
			break;
		case 3:
			cout << "Piu!";
			break;
		default:
			cout << "Op��o inv�lida.";
			break;
	}
	return 0;
}
int ex04_e() {
	int vel;
	cout << "\n\nEx04 - Letra e) Limites de velocidade";
	cout << "\nPor favor, escolha uma velocidade: \n1 - BAIXA\n2 - M�DIA\n3 - ALTA\n";
	std::cin >> vel;
	switch(vel) {
		case 1:
			cout << "Velocidade m�xima permitida: 60Km/h";
			break;
		case 2:
			cout << "Velocidade m�xima permitida: 80Km/h";
			break;
		case 3:
			cout << "Velocidade m�xima permitida: 120Km/h";
			break;
		default:
			cout << "Op��o inv�lida.";
			break;
	}
	return 0;
}
int ex04_f() {
	int size;
	cout << "\n\nEx04 - Letra f) Pre�o de camiseta";
	cout << "\nPor favor, escolha um tamanho de camiseta: \n1 - Pequena\n2 - M�dia\n3 - Grande\n";
	std::cin >> size;
	switch(size) {
		case 1:
			cout << "Pre�o: R$35,00";
			break;
		case 2:
			cout << "Pre�o: R$40,00";
			break;
		case 3:
			cout << "Pre�o: R$55,00";
			break;
		default:
			cout << "Op��o inv�lida.";
			break;
	}
	return 0;
}
int ex04_g() {
	int op;
	float saldo = 2500.00;
	float operacao;
	cout << "\n\nEx04 - Letra g) Caixa eletr�nico";
	cout << "\nPor favor, escolha a opera��o: \n1 - Saque\n2 - Dep�sito\n3 - Consulta de Saldo\n";
	std::cin >> op;
	switch(op) {
		case 1:
			cout << "Saldo: R$" << saldo << "\nDigite o valor para sacar: ";
			std::cin >> operacao;
			if(operacao > saldo) {
				cout << "Opera��o inv�lida. Saque maior do que o saldo.";
			}
			else{
				saldo = saldo - operacao;
				cout << "\nR$" << operacao << " sacados.\nNovo saldo: R$" << saldo;
			}
			break;
		case 2:
			cout << "Saldo: R$" << saldo << "\nDigite o valor para depositar: ";
			std::cin >> operacao;
			saldo = saldo + operacao;
			cout << "\nR$ " << operacao << " depositados.\nNovo saldo: R$" << saldo;
			break;
		case 3:
			cout << "Saldo: R$" << saldo;
			break;
		default:
			cout << "Op��o inv�lida.";
			break;
	}
	return 0;
}
int ex04_h() {
	int lang;
	cout << "\n\nEx04 - Letra h) Sauda��es por idioma";
	cout << "\nPor favor, escolha o idioma:\n1 - Portugu�s Brasileiro\n2 - Ingl�s\n";
	std::cin >> lang;
	switch(lang) {
		case 1:
			cout << "Bem vindo!";
			break;
		case 2:
			cout << "Welcome!";
			break;
		default:
			cout << "Op��o inv�lida!";
			break;
	}
	return 0;
}
int ex04_i() {
	int month;
	cout << "\n\nEx04 - Letra i) Menu de meses";
	cout << "\n01 - Janeiro   |  07 - Julho";
	cout << "\n02 - Fevereiro |  08 - Agosto";
	cout << "\n03 - Mar�o     |  09 - Setembro";
	cout << "\n04 - Abril     |  10 - Outubro";
	cout << "\n05 - Maio      |  11 - Novembro";
	cout << "\n06 - Junho     |  12 - Dezembro\n";
	std::cin >> month;
	switch(month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
			cout << "O m�s possui 31 dias.";
			break;
		case 4: case 6: case 9: case 11:
			cout << "O m�s possui 30 dias.";
			break;
		case 2:
			cout << "O m�s possui 28 ou 29 dias.";
			break;
		default:
			cout << "Op��o inv�lida!";
			break;
	}
	return 0;
	
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex04_a();
	ex04_b();
	ex04_c();
	ex04_d();
	ex04_e();
	ex04_f();
	ex04_g();
	ex04_h();
	ex04_i();
	return 0;
}

