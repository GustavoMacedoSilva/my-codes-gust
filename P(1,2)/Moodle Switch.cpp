#include <iostream>
#include <iomanip>

using namespace std;

int main(){
//var	
	int cod, idade;
	char nome [51], cidade [51];
	float preco, pag;
//entrada	
	cout << "Digite o codigo do produto, preco, nome, cidade, idade, pagamento do cliente respectivamente: ";
	cin >> cod;
	cin >> preco;
	cin.ignore();
	cin.getline(nome, 51);
	cin.getline(cidade, 51);
	cin >> idade;
	cin >> pag;
	
//saida	
	cout << fixed << setprecision(2);
if(pag>=preco)
{
	switch(cod){
		
	case(1):	
		cout << "Queijo" << endl;
		cout << "Valor total: " << preco << endl;
		cout << "Troco: " << pag-preco;
		break;
		
	case(2):	
		cout << "Geleia" << endl;
		cout << "Valor total: " << preco << endl;
		cout << "Troco: " << pag-preco;
		break;
	
	case(3):
		cout << "Doce" << endl;
		cout << "Valor total: " << preco << endl;
		cout << "Troco: " << pag-preco;
		break;
	
	case(4):
		cout << "Refrigerante" << endl;
		cout << "Valor total: " << preco << endl;
		cout << "Troco:" << pag-preco;
		break;
	
	case(5): 
	    cout << "Sorvete" << endl;
	    cout << "Valor total: " << preco << endl;
	    cout << "Troco: " << pag-preco;
	    break;
	
	case(6):
	    cout << "Presunto cru" << endl;
		cout << "Valor total: " << preco << endl;
		cout << "Troco: " << pag-preco;
		break; 
	
	case(7):
		cout << "Vinho" << endl;
		cout << "Valor total: " << preco << endl;
		cout << "Troco: " << pag-preco;
		break;
	
	default:
	cout << "Produto nao existe";
	break;
	}	
	
	}
return 0;
}
