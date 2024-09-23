// Lista de Exercicios - Calculos Aritmeticos
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int ex02_a() {
	int prim, seg;
	cout << "Ex02 - Letra a) Exibir variável na tela";
	cout << "\nPor favor, insira o primeiro número para a soma: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número para a soma: ";
	std::cin >> seg;
	cout << "\nA soma de " << prim << " + " << seg << " = " << (prim + seg);
	return 0;
}
int ex02_b() {
	int num;
	cout << "\n\nEx02 - Letra b) Dobro de um número";
	cout << "\nPor favor, insira o número para dobrar: ";
	std::cin >> num;
	cout << "\nO dobro de " << num << " = " << (num * 2);
	return 0;
}
int ex02_c() {
	int num;
	cout << "\n\nEx02 - Letra c) Metade de um número";
	cout << "\nPor favor, insira o número para exibir sua metade: ";
	std::cin >> num;
	cout << "\nA metade de " << num << " = " << (num / 2);
	return 0;
}
int ex02_d() {
	int prim, seg;
	cout << "\n\nEx02 - Letra d) Dividendo e divisor";
	cout << "\nPor favor, insira o dividendo: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o divisor: ";
	std::cin >> seg;
	cout << "\nA divisão de " << prim << " por " << seg << " = " << (prim / seg);
	return 0;	
}
int ex02_e() {
	int num;
	cout << "\n\nEx02 - Letra e) Raiz quadrada";
	cout << "\nPor favor, insira o número para exibir sua raiz quadrada: ";
	std::cin >> num;
	cout << "\nA raiz de " << num << " = " << sqrt(num);
}
int ex02_f() {
	int prim, seg;
	cout << "\n\nEx02 - Letra f) Subtração";
	cout << "\nPor favor, insira o subtraendo: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o minuendo: ";
	std::cin >> seg;
	cout << "\nA subtração de " << seg << " - " << prim << " = " << (seg - prim);
}
int ex02_g() {
	int num;
	cout << "\n\nEx02 - Letra g) Valor absoluto";
	cout << "\nPor favor, insira um número para exibir seu valor absoluto: ";
	std::cin >> num;
	cout << "\nO valor absoluto de " << num << " = " << abs(num);
}
int ex02_h() {
	int prim, seg;
	cout << "\n\nEx02 - Letra h) Multiplicação";
	cout << "\nPor favor, insira o primeiro número para a multiplicação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número para a multiplicação: ";
	std::cin >> seg;
	cout << "\nA multiplicação de " << prim << " x " << seg << " = " << (prim * seg);
	return 0;
}
int ex02_i() {
	int num;
	cout << "\n\nEx02 - Letra i) Resto da divisão por 2";
	cout << "\nPor favor, insira o número para exibir o resto de sua divisão por 2: ";
	std::cin >> num;
	cout << "\nO resto de " << num << " dividido por 2: " << (num % 2);
	return 0;
}
int ex02_j() {
	int prim, seg;
	cout << "\n\nEx02 - Letra j) Divisão";
	cout << "\nPor favor, insira o dividendo: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o divisor: ";
	std::cin >> seg;
	cout << "\nA divisão de " << prim << " por " << seg << " = " << (prim / seg) << " (resto " << (prim % seg) << ")";
	return 0;
}
int ex02_k() {
	int prim, seg, terc;
	cout << "\n\nEx02 - Letra k) Média de três valores";
	cout << "\nPor favor, insira o primeiro valor para a média: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo valor para a média: ";
	std::cin >> seg;
	cout << "\nPor favor, insira o terceiro valor para a média: ";
	std::cin >> terc;
	cout << "\nA média aritmética de " << prim << ", " << seg << " e " << terc << ": " << ((prim+seg+terc) / 3);
	return 0;
}
int ex02_l() {
	double peso, altura, imc;
	cout << "\n\nEx02 - Letra l) Índice de Massa Corporal";
	cout << "Por favor, insira o seu peso (em kg): ";
	std::cin >> peso;
	cout << "Por favor, insira a sua altura (em metros): ";
	std::cin >> altura;
	imc = (peso/pow(altura, 2));
	cout << "IMC: " << imc;
}
int ex02_m() {
	double celsius;
	cout << "\n\nEx02 - Letra m) Celsius para Fanrenheit";
	cout << "Por favor, insira a temperatura em Celsius para a conversao: ";
	std::cin >> celsius;
	cout << "Temperatura em Fahrenheit: " << (((9/5)*celsius)+32);
}
int ex02_n() {
	double preco, desconto;
	cout << "\n\nEx02 - Letra n) Preço e desconto";
	cout << "Por favor, insira o preço do produto: ";
	std::cin >> preco;
	cout << "Por favor, insira o desconto do produto em porcentagem: ";
	std::cin >> desconto;
	cout << "Preço final: " << (preco - (preco * (desconto/100)));
}
int ex02_o() {
	double raio;
	cout << "\n\nEx02 - Letra o) Área do círculo";
	cout << "Por favor, insira o raio do circulo: ";
	std::cin >> raio;
	cout << "Area: " << (3.14*pow(raio, 2));
}
int ex02_p() {
	double raio, altura;
	cout << "\n\nEx02 - Letra p) Volume do cilindro";
	cout << "Por favor, insira o raio da base do cilindro: ";
	std::cin >> raio;
	cout << "Por favor, insira a altura do cilindro: ";
	std::cin >> altura;
	cout << "Volume: " << (3.14*pow(raio, 2)*altura);
}
int ex02_q() {
	double nota1, nota2, nota3, peso1, peso2, peso3;
	cout << "\n\nEx02 - Letra n) Média ponderada de três notas";
	cout << "Por favor, insira a primeira nota: ";
	std::cin >> nota1;
	cout << "Por favor, insira o peso da primeira nota: ";
	std::cin >> peso1;
	cout << "Por favor, insira a segunda nota: ";
	std::cin >> nota2;
	cout << "Por favor, insira o peso da segunda nota: ";
	std::cin >> peso2;
	cout << "Por favor, insira a terceira nota: ";
	std::cin >> nota3;
	cout << "Por favor, insira o peso da terceira nota: ";
	std::cin >> peso3;
	cout << "A media ponderada de " << nota1 << ", " << nota2 << " e " << nota3 << ": ";
	cout << (((nota1*peso1) + (nota2*peso2) + (nota3*peso3)) / (peso1+peso2+peso3));
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex02_a();
	ex02_b();
	ex02_c();
	ex02_d();
	ex02_e();
	ex02_f();
	ex02_g();
	ex02_h();
	ex02_i();
	ex02_j();
	ex02_k();
	ex02_l();
	ex02_m();
	ex02_n();
	ex02_o();
	ex02_p();
	ex02_q();
	return 0;
}
