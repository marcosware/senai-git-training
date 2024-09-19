// Lista de Exercicios - Entrada e Saida de Dados
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <locale>

using namespace std;

int ex01_a() {
	int num_int;
	cout << "Por favor, insira um número inteiro: ";
	std::cin >> num_int;
	cout << "O número inteiro inserido foi: " << num_int;
	return 0;
}
int ex01_b() {
	float num_real;
	cout << "\n\nPor favor, insira um número real: ";
	std::cin >> num_real;
	cout << "O número real inserido foi: " << setprecision(3) << num_real << "\n";
	return 0;
}
int ex01_c() {
	string v_ou_f;
	do{
		cout << "\nPor favor, insira 'verdadeiro' ou 'falso': ";	
		std::cin >> v_ou_f;
	} while (v_ou_f != "verdadeiro" && v_ou_f != "falso");
	cout << "Foi inserido: " << v_ou_f;
	return 0;
}
int ex01_d() {
	string nome;
	std::cin.ignore();
	cout << "\n\nPor favor, insira um nome: ";
	std::getline(std::cin, nome);
	cout << "O nome inserido foi: " << nome;
	return 0;
}
int ex01_e() {
	double num_dec;
	cout << "\n\nPor favor, insira um número decimal: ";
	std::cin >> num_dec;
	cout << fixed << setprecision(2) << "O número decimal inserido foi: " << num_dec;
	return 0;
}
int ex01_f() {
	string nome;
	int idade;
	std::cin.ignore();
	cout << "\n\nPor favor, insira seu nome: ";
	std::getline (std::cin,nome);
	cout << "\nPor favor, insira sua idade: ";
	std::cin >> idade;
	cout << "Seu nome: " << nome << "\nSua idade: " << idade;
	return 0;
}
int ex01_g() {
	string estado, cidade, bairro, rua, num;
	std:cin.ignore();
	cout << "\n\nPor favor, insira seu estado: ";
	std::getline(std::cin, estado);
	cout << "\nPor favor, insira sua cidade: ";
	std::getline(std::cin, cidade);
	cout << "\nPor favor, insira seu bairro: ";
	std::getline(std::cin, bairro);
	cout << "\nPor favor, insira sua rua: ";
	std::getline(std::cin, rua);
	cout << "\nPor favor, insira seu número de casa: ";
	std::cin >> num;
	cout << "Rua " << rua << ", " << num << " - " << bairro << ", " << cidade << " - " << estado;
	}
int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex01_a();
	ex01_b();
	ex01_c();
	ex01_d();
	ex01_e();
	ex01_f();
	ex01_g();
	return 0;
}

