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
	cout << "Ex03 - Letra a) Primeiro n�mero menor do que o segundo";
	cout << "\nPor favor, insira o primeiro n�mero para a compara��o: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero para a compara��o: ";
	std::cin >> seg;
	if(prim > seg) {
		cout << prim << " � maior que " << seg;
	}
	else{
		cout << prim << " n�o � maior que " << seg;
	}
	return 0;
}
int ex03_b() {
	int prim, seg;
	cout << "\n\nEx03 - Letra b) Primeiro n�mero menor do que o segundo";
	cout << "\nPor favor, insira o primeiro n�mero para a compara��o: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero para a compara��o: ";
	std:cin >> seg;
	if(prim < seg) {
		cout << prim << " � menor que " << seg;
	}
	else {
		cout << prim << " n�o � menor que " << seg;
	}
	return 0;
}
int ex03_c() {
	int prim, seg;
	cout << "\n\nEx03 - Letra c) Primeiro n�mero igual ao segundo";
	cout << "\nPor favor, insira o primeiro n�mero para a compara��o: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero para a compara��o: ";
	std::cin >> seg;
	if(prim == seg) {
		cout << prim << " � igual a " << seg;
	}
	else {
		cout << prim << " n�o � igual a " << seg;
	}
	return 0;
}
int ex03_d() {
	int prim, seg, terc;
	cout << "\n\nEx03 - Letra d) Primeiro n�mero menor que o segundo e maior que o terceiro";
	cout << "\nPor favor, insira o primeiro n�mero para a compara��o: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero para a compara��o: ";
	std::cin >> seg;
	cout << "\nPor favor, insira o terceiro n�mero para a compara��o: ";
	std:: cin >> terc;
	if(prim < seg) {
		if(prim > terc) {
			cout << prim << " � menor que " << seg << " e maior que " << terc;
		}
		else{
			cout << prim << " � menor que " << seg << " mas n�o � maior que " << terc;
		}
	}
	else {
		if(prim > terc) {
			cout << prim << " n�o � menor que " << seg << " mas � maior que " << terc;
		}
		else {
			cout << prim << " n�o � menor que " << seg << " nem maior que " << terc;
		}
	}
	return 0;
}
int ex03_e() {
	double prim, seg;
	cout << "\n\nEx03 - Letra e) Compara��o de dois n�meros reais";
	cout << "\nPor favor, insira o primeiro n�mero real para a compara��o: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero real para a compara��o: ";
	std:cin >> seg;
	if(prim > seg) {
		cout << prim << " � maior que " << seg; 
	}
	else if (prim == seg) {
		cout << prim << " � igual a " << seg;
	}
	else {
		cout << prim << " n�o � maior nem igual a " << seg;
	}
	return 0;
}
int ex03_f() {
	int num;
	cout << "\n\nEx03 - Letra f) Par";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	if(num % 2 == 0) {
		cout << num << " � par.";
	}
	else {
		cout << num << " n�o � par.";
	}
	return 0;
}
int ex03_g() {
	int num;
	cout << "\n\nEx03 - Letra g) �mpar";
	cout << "\nPor favor, insira um n�mero: ";
	std::cin >> num;
	if(num % 2 != 0) {
		cout << num << " � �mpar.";
	}
	else {
		cout << num << " n�o � �mpar.";
	}
	return 0;
}
int ex03_h() {
	int year;
	cout << "\n\nEx03 - Letra h) Ano bissexto";
	cout << "\nPor favor, insira o ano: ";
	std::cin >> year;
	if (( year % 4 == 0 && year % 100 != 0 ) || year % 400 == 0 ) {
		cout << "O ano " << year << " � bissexto.";
	}
	else {
		cout << "O ano " << year << " n�o � bissexto.";
	}
	return 0;
}
int ex03_i() {
	double prim, seg;
	cout << "\n\nEx03 - Letra i) Compara��o de dois n�meros reais";
	cout << "\nPor favor, insira o primeiro n�mero real para a compara��o: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero real para a compara��o: ";
	std:cin >> seg;
	if(prim < seg) {
		cout << prim << " � menor que " << seg; 
	}
	else if (prim == seg) {
		cout << prim << " � igual a " << seg;
	}
	else {
		cout << prim << " n�o � menor nem igual a " << seg;
	}
	return 0;
	
}
int ex03_j() {
	int num;
	cout << "\n\nEx03 - Letra j) N�mero � positivo";
	cout << "\nPor favor, insira um n�mero inteiro: ";
	std::cin >> num;
	if(num >= 0 ) {
		cout << "O n�mero " << num << " � positivo.";
	}
	else {
		cout << "O n�mero " << num << " n�o � positivo.";
	}
	return 0;
}	
int ex03_k() {
	int num;
	cout << "\n\nEx03 - Letra k) N�mero � negativo";
	cout << "\nPor favor, insira um n�mero inteiro: ";
	std::cin >> num;
	if(num < 0) {
		cout << "O n�mero " << num << " � negativo.";
	}
	else {
		cout << "O n�mero " << num << " n�o � negativo.";
	}
	return 0;
}
int ex03_l() {
	int prim, seg;
	cout << "\n\nEx03 - Letra l) Diferen�a menor ou igual a 10";
	cout << "\nPor favor, insira o primeiro n�mero: ";
	std::cin >> prim;
	cout << "\nPor favor, insira o segundo n�mero: ";
	std::cin >> seg;
	if((prim - seg) < 10) {
		cout << "A diferen�a entre " << prim << " e " << seg << " � menor que 10.";
	}
	else if ((prim - seg) == 10) {
		cout << "A diferen�a entre " << prim << " e " << seg << " � igual a 10.";
	}
	else {
		cout << "A diferen�a entre " << prim << " e " << seg << " n�o � menor nem igual a 10.";
	}
	return 0;
}
int ex03_m() {
	int month;
	cout << "\n\nEx03 - Letra m) Menu de meses";
	cout << "\n01 - Janeiro   |  07 - Julho";
	cout << "\n02 - Fevereiro |  08 - Agosto";
	cout << "\n03 - Mar�o     |  09 - Setembro";
	cout << "\n04 - Abril     |  10 - Outubro";
	cout << "\n05 - Maio      |  11 - Novembro";
	cout << "\n06 - Junho     |  12 - Dezembro\n";
	std::cin >> month;
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		cout << "O m�s possui 31 dias.";
	}
	else if(month == 4 || month == 6 || month == 9 || month == 11) {
		cout << "O m�s possui 30 dias.";
	}
	else if(month == 2) {
		cout << "O m�s possui 28 ou 29 dias.";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_n() {
	int age;
	string car;
	cout << "\n\nEx03 - Letra n) Usu�rio pode dirigir";
	cout << "\nPor favor, insira sua idade: ";
	std::cin >> age;
	if(age >= 18) {
		cout << "\nVoc� possui carteira de motorista?\nS - Sim\nN - N�o\n";
		std::cin >> car;
		if(car == "S" ||  car == "s") {
			cout << "\nUsu�rio pode dirigir.";
		}
		else if(car == "N" || car == "n") {
			cout << "\nUsu�rio n�o pode dirigir.";
		}
		else{
			cout << "Op��o inv�lida.";
		}
	}
	else {
		cout << "O usu�rio n�o pode dirigir.";
	}
	return 0;
}
int ex03_o() {
	string wish, money;
	cout << "\n\nEx03 - Letra o) Carro novo";
	cout << "\nVoc� deseja comprar um carro novo?\nS - Sim\nN - N�o\n";
	std::cin >> wish;
	if(wish == "S" || wish == "s") {
		cout << "Voc� possui dinheiro para o carro novo?\nS - Sim\nN - N�o\n";
		std::cin >> money;
		if(money == "S" || money == "s") {
			cout << "Parab�ns, voc� pode comprar um carro novo!";
		}
		else if(money == "N" || money == "n") {
			cout << "Sinto muito, voc� n�o pode comprar um carro novo...";
		}
		else{
			cout << "Op��o inv�lida.";
		}
	}
	else if(wish == "N" || wish == "n") {
		cout << "Ok, sem carro novo para voc�.";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_p() {
	string degree, age;
	cout << "\n\nEx03 - Letra p) Qualifica��o para a vaga";
	cout << "\nVoc� possui um diploma de ensino superior?\nS - Sim\nN - N�o\n";
	std::cin >> degree;
	if(degree == "S" || degree == "s") {
		cout << "Voc� possui mais de 21 anos?\nS - Sim\nN - N�o\n";
		std::cin >> age;
		if(age == "S" || age == "s") {
			cout << "Parab�ns, voc� est� qualificado para a vaga!";
		}
		else if(age == "N" || age == "n") {
			cout << "Sinto muito, voc� n�o est� qualificado para a vaga...";
		}
		else{
			cout << "Op��o inv�lida.";
		}
	}
	else if(degree == "N" || degree == "n") {
		cout << "Sinto muito, voc� n�o est� qualificado para a vaga...";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_q() {
	string subscriber, watched;
	cout << "\n\nEx03 - Letra q) Nova temporada da s�rie";
	cout << "\nVoc� � assinante de um servi�o de streaming?\nS - Sim\nN - N�o\n";
	std::cin >> subscriber;
	if(subscriber == "S" || subscriber == "s") {
		cout << "Voc� j� assistiu � s�rie?\nS - Sim\nN - N�o\n";
		std::cin >> watched;
		if(watched == "S" || watched == "s") {
			cout << "�timo, agora voc� pode assistir � nova temporada!";
		}
		else if(watched == "N" || watched == "n") {
			cout << "Voc� n�o pode assistir � nova temporada.";
		}
		else{
			cout << "Op��o inv�lida.";
		}
	}
	else if(subscriber == "N" || subscriber == "n") {
		cout << "Voc� n�o pode assistir � s�rie.";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_r() {
	string name;
	int age;
	cout << "\n\nEx03 - Letra r) Permiss�o de acesso";
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
	cout << "\n\nEx03 - Letra s) Preparo de caf�";
	cout << "\nVoc� deseja caf�?\nS - Sim\nN - N�o\n";
	std::cin >> wish;
	if(wish == "S" || wish == "s") {
		cout << "Deseja adicional?\nA - A��car\nL - Leite\nN - Nenhum\n";
		std::cin >> additional;
		if(additional == "A" || additional == "a" || additional == "L" || additional == "l") {
			cout << "Caf� com adicional preparado!";
		}
		else if(additional == "N" || additional == "n") {
			cout << "Caf� puro preparado!";
		}
		else{
			cout << "Op��o inv�lida.";
		}
	}
	else if(wish == "N" || wish == "n") {
		cout << "Nenhum caf� preparado!";
	}
	else {
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_t() {
	int num;
	cout << "\n\nEx03 - Letra t) Divis�vel por 3 ou 5";
	cout << "\nDigite um n�mero: ";
	std::cin >> num;
	if(num % 3 == 0 || num % 5 == 0) {
		cout << "O n�mero � divis�vel por 3 ou por 5!";
	}
	else{
		cout << "O n�mero n�o � divis�vel por 3 ou por 5!";
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
		cout << "Op��o inv�lida";
	}
	return 0;
}
int ex03_v() {
	string name;
	cout << "\n\nEx03 - Letra v) Wilson ou Gloria";
	cout << "\nUsu�rio: ";
	std::cin >> name;
	if(name == "Wilson" || name == "Gloria") {
		cout << "Ol�, seja bem-vindo(a) de volta!";
	}
	else{
		cout << "Acesso negado.";
	}
	return 0;
}
int ex03_w() {
	int num;
	cout << "\n\nEx03 - Letra w) Maior que 10 ou Menor que 0";
	cout << "\nInsira um n�mero: ";
	std::cin >> num;
	if(num > 10 || num < 0) {
		cout << "N�mero inv�lido!";
	}
	else{
		cout << "N�mero v�lido!";
	}
	return 0;
}
int ex03_x() {
	string robot;
	cout << "\n\nEx03 - Letra x) Rob�";
	cout << "\nVoc� � um rob�?\nS - Sim\nN - N�o\n";
	std::cin >> robot;
	if(robot == "s" || robot == "S") {
		cout << "Bip bop!";
	}
	else if(robot == "n" || robot == "N"){
		cout << "Por favor, prove que voc� n�o � um rob�.";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_y() {
	int num;
	cout << "\n\nEx03 - Letra y) Diferente de zero";
	cout << "\nInsira um n�mero: ";
	std::cin >> num;
	if(num != 0) {
		cout << "O n�mero � diferente de zero.";
	}
	else{
		cout << "O n�mero � igual � zero.";
	}
	return 0;
}
int ex03_z() {
	string club;
	cout << "\n\nEx03 - Letra z) Inscri��o do clube";
	cout << "\nVoc� � um membro ativo do clube?\nS - Sim\nN - N�o\n";
	std::cin >> club;
	if(club == "S" || club == "s") {
		cout << "Tudo certo! Aproveite os benef�cios do clube.";
	}
	else if(club == "N" || club == "n") {
		cout << "Por favor, atualize sua inscri��o para continuar usufruindo dos benef�cios do clube.";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_aa() {
	string word;
	cout << "\n\nEx03 - Letra aa) Palavra vazia";
	cout << "\nDigite uma palavra: ";
	std::cin >> word;
	if(word == " " || word == "") {
		cout << "A palavra � vazia!";
	}
	else {
		cout << "A palavra n�o � vazia!";
	}
	return 0;
}
int ex03_bb() {
	string cancel;
	cout << "\n\nEx03 - Letra bb) Cancelamento da opera��o";
	cout << "\nVoc� n�o deseja cancelar a opera��o?\nS - Sim\nN - N�o\n";
	std::cin >> cancel;
	if(cancel == "n" || cancel == "N") {
		cout << "Por favor, confirme o cancelamento da opera��o.";
	}
	else if(cancel == "s" || cancel == "S") {
		cout << "Prosseguindo a opera��o...";
	}
	else{
		cout << "Op��o inv�lida.";
	}
	return 0;
}
int ex03_cc() {
	int l1, l2, l3;
	cout << "\n\nEx03 - Letra cc) Classifica��o do tri�ngulo";
	cout << "\nInsira o primeiro lado do tri�ngulo: ";
	std::cin >> l1;
	cout << "\nInsira o segundo lado do tri�ngulo: ";
	std::cin >> l2;
	cout << "\nInsira o terceiro lado do tri�ngulo: ";
	std::cin >> l3;
	if(l1 == l2 && l1 == l3) {
		cout << "Classifica��o: EQUIL�TERO";
	}
	else if((l1 == l2 && l1 != l3) || (l1 != l2 && l1 == l3)) {
		cout << "Classifica��o: IS�SCELES";
	}
	else if(l1 != l2 && l1 != l3 && l2 != l3) {
		cout << "Classifica��o: ESCALENO";
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
