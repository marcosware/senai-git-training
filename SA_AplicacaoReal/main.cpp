#include <iostream>
#include <iomanip> // Biblioteca para definir precisão dos decimais
#include <locale.h> // Biblioteca para permitir localização: Acentos e cedilhas no terminal

using namespace std;

float receberHorasTrabalhadas() {
	float horasTrabalhadas = 0;
	cout << "Por favor, insira a quantidade de horas trabalhadas no mês: ";
	std::cin >> horasTrabalhadas;
	return horasTrabalhadas;
}
float receberValorHora() {
	float valorHora = 0;
	cout << "Por favor, insira o valor recebido em dinheiro por hora: ";
	std::cin >> valorHora;
	return valorHora;
}
float calcularSalarioBruto(float horasT, float valorH) {
	float salarioBruto = 0;
	salarioBruto = horasT * valorH;
	return salarioBruto;
}
float calcularImpostoRenda(float salarioB) {
	float impostoRenda = 0;
	if(salarioB <= 900) {
		impostoRenda = 0;
	}
	else if(salarioB <= 1500) {
		impostoRenda = salarioB * 0.05;
	}
	else if(salarioB <= 2500) {
		impostoRenda = salarioB * 0.1;
	}
	else{
		impostoRenda = salarioB * 0.2;
	}
	return impostoRenda;
}
float calcularPorcentagemRenda(float salarioB) {
	float porcentagemRenda = 0;
	if(salarioB <= 900) {
		porcentagemRenda = 0;
	}
	else if(salarioB <= 1500) {
		porcentagemRenda = 5;
	}
	else if(salarioB <= 2500) {
		porcentagemRenda = 10;
	}
	else{
		porcentagemRenda = 20;
	}
	return porcentagemRenda;
}
float calcularSeguroSocial(float salarioB) {
	float seguroSocial = salarioB * 0.1;
	return seguroSocial;
}
float calcularFundoGarantia(float salarioB) {
	float fundoGarantia = salarioB * 0.11;
	return fundoGarantia;
}
float calcularTotalDescontos(float IR, float INSS) {
	float totalDescontos = IR + INSS;
	return totalDescontos;
}
float calcularSalarioLiquido(float salarioB, float IR, float INSS) {
	float salarioLiquido = salarioB - IR - INSS;
	return salarioLiquido;
}
void finalizacao(float horasT, float valorH, float salarioB, float IR, float porcentagemIR, 
float INSS, float FGTS, float descontosTotais, float salarioL) {
	system("cls");
	cout << "Salário Bruto: (" << horasT << " * " << valorH << ") : R$ " << fixed << setprecision(2) << salarioB;
	cout << "\n(-) IR (" << porcentagemIR << "%)           : R$ " << IR;
	cout << "\n(-) INSS (10%)           : R$ " << fixed << setprecision(2) << INSS;
	cout << "\nFGTS (11%)               : R$ " << fixed << setprecision(2) << FGTS;
	cout << "\nTotal de descontos       : R$ " << fixed << setprecision(2) << descontosTotais;
	cout << "\nSalário Líquido          : R$ " << fixed << setprecision(2) << salarioL;
}

int main(int argc, char** argv) {
	setlocale(LC_ALL, "");
	float horasT = receberHorasTrabalhadas();
	float valorH = receberValorHora();
	float salarioB = calcularSalarioBruto(horasT, valorH);
	float IR = calcularImpostoRenda(salarioB);
	float porcentagemIR = calcularPorcentagemRenda(salarioB);
	float INSS = calcularSeguroSocial(salarioB);
	float FGTS = calcularFundoGarantia(salarioB);
	float descontosTotais = calcularTotalDescontos(IR, INSS);
	float salarioL = calcularSalarioLiquido(salarioB, IR, INSS);
	finalizacao(horasT, valorH, salarioB, IR, porcentagemIR, INSS, FGTS, descontosTotais, salarioL);
	return 0;
}
