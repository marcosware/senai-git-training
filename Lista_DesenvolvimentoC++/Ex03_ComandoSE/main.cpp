// Lista de Exercicios - Comando SE
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <math.h>
#include <locale>
using namespace std;

int ex03_a() {
	int prim, seg;
	cout << "Ex03 - Letra a) Primeiro número menor do que o segundo";
	cout << "\nPor favor, insira o primeiro número para a comparação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número para a comparação: ";
	std::cin >> seg;
	if(prim > seg) {
		cout << prim << " é maior que " << seg;
	}
	else{
		cout << prim << " não é maior que " << seg;
	}
	return 0;
}
int ex03_b() {
	int prim, seg;
	cout << "\n\nEx03 - Letra b) Primeiro número menor do que o segundo";
	cout << "\nPor favor, insira o primeiro número para a comparação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número para a comparação: ";
	std:cin >> seg;
	if(prim < seg) {
		cout << prim << " é menor que " << seg;
	}
	else {
		cout << prim << " não é menor que " << seg;
	}
	return 0;
}
int ex03_c() {
	int prim, seg;
	cout << "\n\nEx03 - Letra c) Primeiro número igual ao segundo";
	cout << "\nPor favor, insira o primeiro número para a comparação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número para a comparação: ";
	std::cin >> seg;
	if(prim == seg) {
		cout << prim << " é igual a " << seg;
	}
	else {
		cout << prim << " não é igual a " << seg;
	}
	return 0;
}
int ex03_d() {
	int prim, seg, terc;
	cout << "\n\nEx03 - Letra d) Primeiro número menor que o segundo e maior que o terceiro";
	cout << "\nPor favor, insira o primeiro número para a comparação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número para a comparação: ";
	std::cin >> seg;
	cout << "\nPor favor, insira o terceiro número para a comparação: ";
	std:: cin >> terc;
	if(prim < seg) {
		if(prim > terc) {
			cout << prim << " é menor que " << seg << " e maior que " << terc;
		}
		else{
			cout << prim << " é menor que " << seg << " mas não é maior que " << terc;
		}
	}
	else {
		if(prim > terc) {
			cout << prim << " não é menor que " << seg << " mas é maior que " << terc;
		}
		else {
			cout << prim << " não é menor que " << seg << " nem maior que " << terc;
		}
	}
	return 0;
}
int ex03_e() {
	double prim, seg;
	cout << "\n\nEx03 - Letra e) Comparação de dois números reais";
	cout << "\nPor favor, insira o primeiro número real para a comparação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número real para a comparação: ";
	std:cin >> seg;
	if(prim > seg) {
		cout << prim << " é maior que " << seg; 
	}
	else if (prim == seg) {
		cout << prim << " é igual a " << seg;
	}
	else {
		cout << prim << " não é maior nem igual a " << seg;
	}
	return 0;
}
int ex03_f() {
	int num;
	cout << "\n\nEx03 - Letra f) Par";
	cout << "\nPor favor, insira um número: ";
	std::cin >> num;
	if(num % 2 == 0) {
		cout << num << " é par.";
	}
	else {
		cout << num << " não é par.";
	}
	return 0;
}
int ex03_g() {
	int num;
	cout << "\n\nEx03 - Letra g) Ímpar";
	cout << "\nPor favor, insira um número: ";
	std::cin >> num;
	if(num % 2 != 0) {
		cout << num << " é ímpar.";
	}
	else {
		cout << num << " não é ímpar.";
	}
	return 0;
}
int ex03_h() {
	int year;
	cout << "\n\nEx03 - Letra h) Ano bissexto";
	cout << "\nPor favor, insira o ano: ";
	std::cin >> year;
	if (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
		cout << "O ano " << year << " é bissexto.";
	}
	else {
		cout << "O ano " << year << " não é bissexto.";
	}
	return 0;
}
int ex03_i() {
	double prim, seg;
	cout << "\n\nEx03 - Letra i) Comparação de dois números reais";
	cout << "\nPor favor, insira o primeiro número real para a comparação: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número real para a comparação: ";
	std:cin >> seg;
	if(prim < seg) {
		cout << prim << " é menor que " << seg; 
	}
	else if (prim == seg) {
		cout << prim << " é igual a " << seg;
	}
	else {
		cout << prim << " não é menor nem igual a " << seg;
	}
	return 0;
	
}
int ex03_j() {
	int num;
	cout << "\n\nEx03 - Letra j) Número é positivo";
	cout << "\nPor favor, insira um número inteiro: ";
	std::cin >> num;
	if(num >= 0 ) {
		cout << "O número " << num << " é positivo.";
	}
	else {
		cout << "O número " << num << " não é positivo.";
	}
	return 0;
}	
int ex03_k() {
	int num;
	cout << "\n\nEx03 - Letra k) Número é negativo";
	cout << "\nPor favor, insira um número inteiro: ";
	std::cin >> num;
	if(num < 0) {
		cout << "O número " << num << " é negativo.";
	}
	else {
		cout << "O número " << num << " não é negativo.";
	}
	return 0;
}
int ex03_l() {
	int prim, seg;
	cout << "\n\nEx03 - Letra l) Diferença menor ou igual a 10";
	cout << "\nPor favor, insira o primeiro número: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo número: ";
	std::cin >> seg;
	if((prim - seg) < 10) {
		cout << "A diferença entre " << prim << " e " << seg << " é menor que 10.";
	}
	else if ((prim - seg) == 10) {
		cout << "A diferença entre " << prim << " e " << seg << " é igual a 10.";
	}
	else {
		cout << "A diferença entre " << prim << " e " << seg << " não é menor nem igual a 10.";
	}
	return 0;
}
int ex03_m() {
	int month;
	cout << "\n\nEx03 - Letra m) Menu de meses";
	cout << "\n01 - Janeiro   |  07 - Julho";
	cout << "\n02 - Fevereiro |  08 - Agosto";
	cout << "\n03 - Março     |  09 - Setembro";
	cout << "\n04 - Abril     |  10 - Outubro";
	cout << "\n05 - Maio      |  11 - Novembro";
	cout << "\n06 - Junho     |  12 - Dezembro\n";
	std::cin >> month;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		cout << "O mês possui 31 dias.";
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11) {
		cout << "O mês possui 30 dias.";
	}
	else if(month == 2) {
		cout << "O mês possui 28 ou 29 dias.";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_n() {
	int age;
	string car;
	cout << "\n\nEx03 - Letra n) Usuário pode dirigir";
	cout << "\nPor favor, insira sua idade: ";
	std::cin >> age;
	if(age >= 18) {
		cout << "\nVocê possui carteira de motorista?\nS - Sim\nN - Não\n";
		std::cin >> car;
		if(car == "S" ||  car == "s") {
			cout << "\nUsuário pode dirigir.";
		}
		else if(car == "N" || car == "n") {
			cout << "\nUsuário não pode dirigir.";
		}
		else{
			cout << "Opção inválida.";
		}
	}
	else {
		cout << "O usuário não pode dirigir.";
	}
	return 0;
}
int ex03_o() {
	string wish, money;
	cout << "\n\nEx03 - Letra o) Carro novo";
	cout << "\nVocê deseja comprar um carro novo?\nS - Sim\nN - Não\n";
	std::cin >> wish;
	if(wish == "S" || wish == "s") {
		cout << "Você possui dinheiro para o carro novo?\nS - Sim\nN - Não\n";
		std::cin >> money;
		if(money == "S" || money == "s") {
			cout << "Parabéns, você pode comprar um carro novo!";
		}
		else if(money == "N" || money == "n") {
			cout << "Sinto muito, você não pode comprar um carro novo...";
		}
		else{
			cout << "Opção inválida.";
		}
	}
	else if(wish == "N" || wish == "n") {
		cout << "Ok, sem carro novo para você.";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_p() {
	string degree, age;
	cout << "\n\nEx03 - Letra p) Qualificação para a vaga";
	cout << "\nVocê possui um diploma de ensino superior?\nS - Sim\nN - Não\n";
	std::cin >> degree;
	if(degree == "S" || degree == "s") {
		cout << "Você possui mais de 21 anos?\nS - Sim\nN - Não\n";
		std::cin >> age;
		if(age == "S" || age == "s") {
			cout << "Parabéns, você está qualificado para a vaga!";
		}
		else if(age == "N" || age == "n") {
			cout << "Sinto muito, você não está qualificado para a vaga...";
		}
		else{
			cout << "Opção inválida.";
		}
	}
	else if(degree == "N" || degree == "n") {
		cout << "Sinto muito, você não está qualificado para a vaga...";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_q() {
	string subscriber, watched;
	cout << "\n\nEx03 - Letra q) Nova temporada da série";
	cout << "\nVocê é assinante de um serviço de streaming?\nS - Sim\nN - Não\n";
	std::cin >> subscriber;
	if(subscriber == "S" || subscriber == "s") {
		cout << "Você já assistiu à série?\nS - Sim\nN - Não\n";
		std::cin >> watched;
		if(watched == "S" || watched == "s") {
			cout << "Ótimo, agora você pode assistir à nova temporada!";
		}
		else if(watched == "N" || watched == "n") {
			cout << "Você não pode assistir à nova temporada.";
		}
		else{
			cout << "Opção inválida.";
		}
	}
	else if(subscriber == "N" || subscriber == "n") {
		cout << "Você não pode assistir à série.";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_r() {
	string name;
	int age;
	cout << "\n\nEx03 - Letra r) Permissão de acesso";
	cout << "\nDigite o seu nome: ";
	std::cin >> name;
	cout << "\n\nDigite sua idade: ";
	std::cin >> age;
	if(name.length() > 3 && age >= 18) {
		cout << "Acesso permitido.";
	}
	else {
		cout << "Acesso negado.";
	}
	return 0;
}
int ex03_s() {
	string wish, additional;
	cout << "\n\nEx03 - Letra s) Preparo de café";
	cout << "\nVocê deseja café?\nS - Sim\nN - Não\n";
	std::cin >> wish;
	if(wish == "S" || wish == "s") {
		cout << "Deseja adicional?\nA - Açúcar\nL - Leite\nN - Nenhum\n";
		std::cin >> additional;
		if(additional == "A" || additional == "a" || additional == "L" || additional == "l") {
			cout << "Café com adicional preparado!";
		}
		else if(additional == "N" || additional == "n") {
			cout << "Café puro preparado!";
		}
		else{
			cout << "Opção inválida.";
		}
	}
	else if(wish == "N" || wish == "n") {
		cout << "Nenhum café preparado!";
	}
	else {
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_t() {
	int num;
	cout << "\n\nEx03 - Letra t) Divisível por 3 ou 5";
	cout << "\nDigite um número: ";
	std::cin >> num;
	if(num % 3 == 0 || num % 5 == 0) {
		cout << "O número é divisível por 3 ou por 5!";
	}
	else{
		cout << "O número não é divisível por 3 ou por 5!";
	}
	return 0;
}
int ex03_u() {
	string wish;
	cout << "\n\nEx03 - Letra u) Compra de produto";
	cout << "\nDeseja comprar um produto?\n's' ou 'sim'\n'n' ou 'nao'\n";
	std::cin >> wish;
	if(wish == "s" || wish == "sim") {
		cout << "Obrigado pela compra!";
	}
	else if(wish == "n" || wish == "nao") {
		cout << "Nenhuma compra realizada.";
	}
	else{
		cout << "Opção inválida";
	}
	return 0;
}
int ex03_v() {
	string name;
	cout << "\n\nEx03 - Letra v) Wilson ou Gloria";
	cout << "\nUsuário: ";
	std::cin >> name;
	if(name == "Wilson" || name == "Gloria") {
		cout << "Olá, seja bem-vindo(a) de volta!";
	}
	else{
		cout << "Acesso negado.";
	}
	return 0;
}
int ex03_w() {
	int num;
	cout << "\n\nEx03 - Letra w) Maior que 10 ou Menor que 0";
	cout << "\nInsira um número: ";
	std::cin >> num;
	if(num > 10 || num < 0) {
		cout << "Número inválido!";
	}
	else{
		cout << "Número válido!";
	}
	return 0;
}
int ex03_x() {
	string robot;
	cout << "\n\nEx03 - Letra x) Robô";
	cout << "\nVocê é um robô?\nS - Sim\nN - Não\n";
	std::cin >> robot;
	if(robot == "s" || robot == "S") {
		cout << "Bip bop!";
	}
	else if(robot == "n" || robot == "N"){
		cout << "Por favor, prove que você não é um robô.";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_y() {
	int num;
	cout << "\n\nEx03 - Letra y) Diferente de zero";
	cout << "\nInsira um número: ";
	std::cin >> num;
	if(num != 0) {
		cout << "O número é diferente de zero.";
	}
	else{
		cout << "O número é igual à zero.";
	}
	return 0;
}
int ex03_z() {
	string club;
	cout << "\n\nEx03 - Letra z) Inscrição do clube";
	cout << "\nVocê é um membro ativo do clube?\nS - Sim\nN - Não\n";
	std::cin >> club;
	if(club == "S" || club == "s") {
		cout << "Tudo certo! Aproveite os benefícios do clube.";
	}
	else if(club == "N" || club == "n") {
		cout << "Por favor, atualize sua inscrição para continuar usufruindo dos benefícios do clube.";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_aa() {
	string word;
	cout << "\n\nEx03 - Letra aa) Palavra vazia";
	cout << "\nDigite uma palavra: ";
	std::cin >> word;
	if(word == " " || word == "") {
		cout << "A palavra é vazia!";
	}
	else {
		cout << "A palavra não é vazia!";
	}
	return 0;
}
int ex03_bb() {
	string cancel;
	cout << "\n\nEx03 - Letra bb) Cancelamento da operação";
	cout << "\nVocê não deseja cancelar a operação?\nS - Sim\nN - Não\n";
	std::cin >> cancel;
	if(cancel == "n" || cancel == "N") {
		cout << "Por favor, confirme o cancelamento da operação.";
	}
	else if(cancel == "s" || cancel == "S") {
		cout << "Prosseguindo a operação...";
	}
	else{
		cout << "Opção inválida.";
	}
	return 0;
}
int ex03_cc() {
	int l1, l2, l3;
	cout << "\n\nEx03 - Letra cc) Classificação do triângulo";
	cout << "\nInsira o primeiro lado do triângulo: ";
	std::cin >> l1;
	cout << "\nInsira o segundo lado do triângulo: ";
	std::cin >> l2;
	cout << "\nInsira o terceiro lado do triângulo: ";
	std::cin >> l3;
	if(l1 == l2 && l1 == l3) {
		cout << "Classificação: EQUILÁTERO";
	}
	else if((l1 == l2 && l1 != l3) || (l1 != l2 && l1 == l3)) {
		cout << "Classificação: ISÓSCELES";
	}
	else if(l1 != l2 && l1 != l3 && l2 != l3) {
		cout << "Classificação: ESCALENO";
	}
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex03_a();
	ex03_b();
	ex03_c();
	ex03_d();
	ex03_e();
	ex03_f();
	ex03_g();
	ex03_h();
	ex03_i();
	ex03_j();
	ex03_k();
	ex03_l();
	ex03_m();
	ex03_n();
	ex03_o();
	ex03_p();
	ex03_q();
	ex03_r();
	ex03_s();
	ex03_t();
	ex03_u();
	ex03_v();
	ex03_w();
	ex03_x();
	ex03_y();
	ex03_z();
	ex03_aa();
	ex03_bb();
	ex03_cc();
	return 0;
}
