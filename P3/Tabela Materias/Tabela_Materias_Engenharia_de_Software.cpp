#include <iostream>
#include <cstring>

using namespace std;

int main()
{
//var	
	char escolha[5]; //materia q deseja procurar
	
//	
	setlocale(LC_ALL, "Portuguese"); //permite o uso de acentos

	cout << "Materias: " << endl;
	cout << "Periodo 1   " << "Periodo 2   " << "Periodo 3   " << "Periodo 4   " << "Periodo 5   " << "Periodo 6   " << "Periodo 7   " << "Periodo 8   " << "Periodo 9   " << "Periodo 10" << endl;
	cout << endl;
	cout << "   M01         " << "M003        " << "M004        " << "C005        " << "E209        " << "C208        " << "C012        " << "C214        " << "C317        " << "C216" << endl;
	cout << "   M02         " << "C203        " << "C204        " << "C206        " << "G304        " << "C209        " << "C111        " << "P108        " << "EST1        " << "C318" << endl;
	cout << "   E201        " << "F201        " << "F202        " << "C207        " << "H001        " << "M106        " << "C210        " << "S107        " << "H003        " << "TCC1" << endl;
	cout << "   C201        " << "M020        " << "E207        " << "E208        " << "H002        " << "M109        " << "S204        " << "S205        " << "H004        " << "" << endl;
	cout << "               " << "            " << "            " << "M005        " << "M019        " << "M210        " << "S308        " << "S309        " << "            " << "" << endl;
	cout << "               " << "            " << "            " << "            " << "S201        " << "S203        " << "T202        " << "T106        " << "            " << "" << endl;
	cout << "               " << "            " << "            " << "            " << "S202        " << "S206        " << "            " << "            " << "            " << "" << endl;
	
	cout << "Qual materia quer ver? " << endl;
	
	do
	{
	cin.getline(escolha, 5);
	cout << endl;
	cout << "Materia: ";
	if(strcmp(escolha, "M01") == 0)
	{
		cout << "Matematica" << endl;
	}
	
	if(strcmp(escolha, "M02" ) == 0)
	{
		cout << "Álgebra Vetorial" << endl;
	}
	
	if(strcmp(escolha, "E201" ) == 0)
	{
		cout << "Circuitos 1" << endl;
	}
	
	if(strcmp(escolha, "C201" ) == 0)
	{
		cout << "Algoritmos 1" << endl;
	}
	
	if(strcmp(escolha, "M003" ) == 0)
	{
		cout << "Calculo 1" << endl;
	}
	
	if(strcmp(escolha, "C203" ) == 0)
	{
		cout << "Algoritmos 2" << endl;
	}
	
	if(strcmp(escolha, "F201" ) == 0)
	{
		cout << "Fisica 1" << endl;
	}
	
	if(strcmp(escolha, "M020" ) == 0)
	{
		cout << "Matematica Discreta" << endl;
	}
	
	if(strcmp(escolha, "M004" ) == 0)
	{
		cout << "Calculo 2" << endl;
	}
	
	if(strcmp(escolha, "C204" ) == 0)
	{
		cout << "Algoritmos 3" << endl;
	}
	
	if(strcmp(escolha, "F202" ) == 0)
	{
		cout << "Fisica 2" << endl;
	}
	
	if(strcmp(escolha, "E207" ) == 0)
	{
		cout << "Eletronica Digital" << endl;
	}
	
	if(strcmp(escolha, "C205" ) == 0)
	{
		cout << "Linguagens de programação e compiladores" << endl;
	}
	
	if(strcmp(escolha, "C205" ) == 0)
	{
		cout << "Programacao orientada a objetos" << endl;
	}
	
	if(strcmp(escolha, "C207" ) == 0)
	{
		cout << "Banco de dados" << endl;
	}
	
	if(strcmp(escolha, "E208" ) == 0)
	{
		cout << "Eletronica Digital 2" << endl;
	}
	
	if(strcmp(escolha, "M005" ) == 0)
	{
		cout << "Calculo 3" << endl;
	}
	
	if(strcmp(escolha, "E209" ) == 0)
	{
		cout << "Sistemas microcontrolados e microprocessados" << endl;
	}
	
	if(strcmp(escolha, "G304" ) == 0)
	{
		cout << "Gestao de projetos" << endl;
	}
	
	if(strcmp(escolha, "H001" ) == 0)
	{
		cout << "Administração" << endl;
	}
	
	if(strcmp(escolha, "H002" ) == 0)
	{
		cout << "Economia" << endl;
	}
	
	if(strcmp(escolha, "M019" ) == 0)
	{
		cout << "Probabilidade" << endl;
	}
	
	if(strcmp(escolha, "S201" ) == 0)
	{
		cout << "Paradigmas da Programacao" << endl;
	}
	
	if(strcmp(escolha, "S202" ) == 0)
	{
		cout << "Banco de dados 2" << endl;
	}
	
	if(strcmp(escolha, "C208" ) == 0)
	{
		cout << "Arquitetura de Computadores" << endl;
	}
	
	if(strcmp(escolha, "C209" ) == 0)
	{
		cout << "Computacao Grafica e Multimidia" << endl;
	}
	
	if(strcmp(escolha, "M106" ) == 0)
	{
		cout << "Calculo Numerico" << endl;
	}
	
	if(strcmp(escolha, "M109" ) == 0)
	{
		cout << "Estatistica" << endl;
	}
	
	if(strcmp(escolha, "M210" ) == 0)
	{
		cout << "Otimizacao 1" << endl;
	}
	
	if(strcmp(escolha, "S203" ) == 0)
	{
		cout << "Arquitetura e desenho de Software" << endl;
	}
	
	if(strcmp(escolha, "S206" ) == 0)
	{
		cout << "Qualidade de Software" << endl;
	}
	
	if(strcmp(escolha, "C012" ) == 0)
	{
		cout << "Sistemas Operacionais" << endl;
	}
	
	if(strcmp(escolha, "C111" ) == 0)
	{
		cout << "Analise de dados" << endl;
	}
	
	if(strcmp(escolha, "C210" ) == 0)
	{
		cout << "Inteligencia computacional" << endl;
	}
	
	if(strcmp(escolha, "S204" ) == 0)
	{
		cout << "Engenharia de produto de Software" << endl;
	}
	
	if(strcmp(escolha, "S308" ) == 0)
	{
		cout << "Diciplina Eletiva 1" << endl;
	}
	
	if(strcmp(escolha, "T202" ) == 0)
	{
		cout << "Redes de Computadores" << endl;
	}
	
	if(strcmp(escolha, "C214" ) == 0)
	{
		cout << "Engenharia de Software (Não me pergunte oq q isso significa q ainda nao sei)" << endl;
	}
	
	if(strcmp(escolha, "P108" ) == 0)
	{
		cout << "Otimizacao 2" << endl;
	}
	
	if(strcmp(escolha, "S107" ) == 0)
	{
		cout << "Gerencia de configuracoes e evolucao de Sofware" << endl;
	}
	
	if(strcmp(escolha, "S205" ) == 0)
	{
		cout << "Interface Homem-Maquina" << endl;
	}
	
	if(strcmp(escolha, "S309" ) == 0)
	{
		cout << "Diciplina Eletiva 2" << endl;
	}
	
	if(strcmp(escolha, "T106" ) == 0)
	{
		cout << "Gerencia, QoS e Segurança em redes" << endl;
	}
	
	if(strcmp(escolha, "C317" ) == 0)
	{
		cout << "Topicos Especiais" << endl;
	}
	
	if(strcmp(escolha, "EST1" ) == 0)
	{
		cout << "Estagio Supervisionado" << endl;
	}
	
	if(strcmp(escolha, "H003" ) == 0)
	{
		cout << "Humanidades, Ciencias Sociais e Cidadania" << endl;
	}
	
	if(strcmp(escolha, "H005" ) == 0)
	{
		cout << "Ciencia do Ambiente" << endl;
	}
	
	if(strcmp(escolha, "C216" ) == 0)
	{
		cout << "Sistemas Distribuidos" << endl;
	}
	
	if(strcmp(escolha, "C318" ) == 0)
	{
		cout << "Topicos Especiais 2" << endl;
	}
	
	if(strcmp(escolha, "TCC1" ) == 0)
	{
		cout << "O Maldito" << endl;
	}
	cout << "Deseja ver mais uma materia? " << endl;
	cout << endl;
	cout << "Se sim digite a que deseja ver, se nao digite 0000" << endl;
	}while(strcmp(escolha, "0000") != 0);
	
	return 0;
}