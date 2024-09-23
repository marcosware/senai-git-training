// Lista de Exercicios - Vetor
// Nome: Marcos Vinicius
// Disciplina: Internet das Coisas
// Instrutor: Paulo Martins

#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <math.h>
#include <locale>

using namespace std;

int ex08_a() {
	vector<int> integers;
	int read;
	cout << "Ex08 - Letra a) Imprimir elementos inteiros de vetor\n";
	for(int i = 0; i < 4; i++) {
		cout << "Por favor, insira um número: ";
		std::cin >> read;
		integers.push_back(read);
	}	
	for(int i = 0; i < integers.size(); i++) {
		cout << integers.at(i) << " ";
	}
	return 0;
}
int ex08_b() {
	vector<float> decimals;
	float read, sum;
	cout << "\n\nEx08 - Letra b) Média de elementos decimais do vetor\n";
	for(int i = 0; i < 4; i++) {
		cout << "Por favor, insira um número decimal: ";
		std::cin >> read;
		decimals.push_back(read);
	}	
	for(int i = 0; i < decimals.size(); i++) {
		sum += decimals.at(i);
	}
	cout << "A média é " << (sum/decimals.size());
	return 0;
}
int ex08_c() {
	vector<int> integers;
	int read, sum, max = 0;
	cout << "\n\nEx08 - Letra c) Maior elemento inteiro do vetor\n";
	for(int i = 0; i < 4; i++) {
		cout << "Por favor, insira um número inteiro: ";
		std::cin >> read;
		integers.push_back(read);
	}	
	for(int i = 0; i < integers.size(); i++) {
		if(integers.at(i) > max) {
			max = integers.at(i);
		}
	}
	cout << "O maior elemento inteiro do vetor é " << max << ".";
	return 0;
}
int ex08_d() {
	vector<int> integers;
	int read, sum, min = 2147483647;
	cout << "\n\nEx08 - Letra d) Menor elemento inteiro do vetor\n";
	for(int i = 0; i < 4; i++) {
		cout << "Por favor, insira um número inteiro: ";
		std::cin >> read;
		integers.push_back(read);
	}	
	for(int i = 0; i < integers.size(); i++) {
		if(integers.at(i) < min) {
			min = integers.at(i);
		}
	}
	cout << "O menor elemento inteiro do vetor é " << min << ".";
	return 0;
}
int ex08_e() {
	vector<int> integers;
	int read, temp = 0, i = 0;
	cout << "\n\nEx08 - Letra e) Ordenar vetor em ordem decrescente\n";
	for(int i = 0; i < 4; i++) {
		cout << "Por favor, insira um número inteiro: ";
		std::cin >> read;
		integers.push_back(read);
	}
	for(i = 0; i < integers.size(); i++) {
		if(integers.at(i) != integers.at(integers.size()-1)) {
			if(integers.at(i) < integers.at(i+1)) {
				temp = integers.at(i + 1);
				integers.at(i + 1) = integers.at(i);
				integers.at(i) = temp;
				i = -1;
			}
		}
		else {
			if(integers.at(integers.size()-1) > integers.at(integers.size()-2)) {
				temp = integers.at(integers.size()-1);
				integers.at(integers.size()-1) = integers.at(integers.size()-2);
				integers.at(integers.size()-2) = temp; 
			}
		}
	}
	for(int i = 0; i < integers.size(); i++) {
		cout << integers.at(i) << " ";
	}
	return 0;	
}
int ex08_f() {
	vector<int> integers;
	int read, temp = 0, i = 0;
	cout << "\n\nEx08 - Letra f) Ordenar vetor em ordem crescente\n";
	for(int i = 0; i < 4; i++) {
		cout << "Por favor, insira um número inteiro: ";
		std::cin >> read;
		integers.push_back(read);
	}
	for(i = 0; i < integers.size(); i++) {
		if(integers.at(i) != integers.at(integers.size()-1)) {
			if(integers.at(i) > integers.at(i+1)) {
				temp = integers.at(i + 1);
				integers.at(i + 1) = integers.at(i);
				integers.at(i) = temp;
				i = -1;
			}
		}
		else {
			if(integers.at(integers.size()-1) < integers.at(integers.size()-2)) {
				temp = integers.at(integers.size()-1);
				integers.at(integers.size()-1) = integers.at(integers.size()-2);
				integers.at(integers.size()-2) = temp; 
			}
		}
	}
	for(int i = 0; i < integers.size(); i++) {
		cout << integers.at(i) << " ";
	}
	return 0;
}
int ex08_g() {
	vector<string> names;
	string read;
	cout << "\n\nEx08 - Letra g) Armazenar 5 nomes em vetor e imprimir\n";
	for(int i = 0; i < 5; i++) {
		cout << "Por favor, insira o nome nº " << i+1 << ": ";
		std::cin >> read;
		names.push_back(read);
	}	
	for(int i = 0; i < names.size(); i++) {
		cout << i+1 << ". " << names.at(i) << "\n";
	}
	return 0;
}
int ex08_h() {
	vector<float> compra;
	vector<float> venda;
	float readC, readV;
	int lucroMenor = 0, lucroMedio = 0, lucroMaior = 0;
	cout << "\n\nEx08 - Letra h) Porcentagem de lucro das mercadorias\n";
	for(int i = 0; i < 100; i ++) {
		cout << "\nPor favor, insira o preço de COMPRA da mercadoria nº " << i+1 << ": ";
		std::cin >> readC;
		compra.push_back(readC);
		cout << "Por favor, insira o preço de VENDA da mercadoria nº " << i+1 << ": ";
		std::cin >> readV;
		venda.push_back(readV);
	}
	for(int i = 0; i < compra.size(); i++) {
		if((((venda.at(i) * 100)/compra.at(i)) - 100) < 10) {
			lucroMenor++;
		}
		else if(((((venda.at(i) * 100)/compra.at(i)) - 100) >= 10) && ((((venda.at(i) * 100)/compra.at(i)) - 100) <= 20)){
			lucroMedio++;
		}
		else if ((((venda.at(i) * 100)/readC) - 100) > 20) {
			lucroMaior++;
		}
	}
	cout << "\n[Lucro < 10%] : " << lucroMenor;
	cout << "\n[10% <= Lucro <= 20%] : " << lucroMedio;
	cout << "\n[Lucro > 20%] : " << lucroMaior;
	return 0;
}
int ex08_i() {
	cout << "\n\nEx08 - Letra i) Reserva de mesas\n";
    bool finish = false;
    string tables[30][5];
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 5; j++) {
            tables[i][j] = "VAZIO";
        }
    }
    while(finish == false) {
        int fini_check = 0;
        int choice;
        int seats;
        cout << "\nEscolha uma mesa (100-129): ";
        std::cin >> choice;
        cout << "Escolha a quantidade de cadeiras (máx 5): ";
        std::cin >> seats;
        int check = 0;
        for (int i = 0; i < 5; i++) {
            if (choice != 0) {
               if (tables[choice - 100][i] != "VAZIO") {
                  check++;
               }
            }
        }
        if (5-check < seats) {
           cout << "LOG: Não foi possível realizar sua reserva.\n";           
        }
        else {
             if (choice != 0) {
                  for (int i = 0; i < (check + seats); i++) {
                      tables[choice - 100][i] = "PREENCHIDO";
                  }
             }
        }
        for (int i = 0; i < 30; i++) {
            for (int j = 0; j < 5; j++) {
                if (tables[i][j] == "PREENCHIDO") {
                   fini_check++;
                }
            }
        }
        if (fini_check == 150 || choice == 0) {
                finish = true;
        }
        else {
             check = 0;
             fini_check = 0;
        }
    }
    return 0;
}
	

int ex08_j() {
	vector<float> nums;
	int numRead = 0, thirty = 0, biggerMedia = 0, equalMedia = 0, sum = 0;
	for(int i = 0; i < 4; i++) {
		cout << "Insira o valor real nº " << i+1 << ": ";
		std::cin >> numRead;
		nums.push_back(numRead);
		sum += numRead; 
    }
	for(int i = 0; i < nums.size(); i++) {
		if(nums.at(i) == 30) {
			thirty++;
		}
		if(nums.at(i) > (sum/nums.size())) {
			biggerMedia++;
		}
		if(nums.at(i) == (sum/nums.size())) {
			equalMedia++;
		}
	}
	cout << "\nNúmeros maiores que 30: " << thirty;
	cout << "\nNúmeros maiores que a média: " << biggerMedia;
	cout << "\nNúmeros iguais à média: " << equalMedia;
}


int main(int argc, char** argv) {
	setlocale(LC_ALL, "portuguese");
	ex08_a();
	ex08_b();
	ex08_c();
	ex08_d();
	ex08_e();
	ex08_f();
	ex08_g();
	ex08_h();
	ex08_i();
	ex08_j();
	return 0;
}





