#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
//variaveis
   int contc; //quantos consumidores foram pesquisados
   double contR, contC; //contagem dos tipos de consumo, residencial ou comercial
   double contCE, contRS; //contagem dos tipos de fonte energeticas usadas
   char cc[5]; //codigo do consumidor
   char tc; //tipo de consumo
   char f; //fonte energetica usada
   contc= -1;
   contR=0;
   contC=0;
   contCE=0;
   contRS=0;
//
   do{
   
   cout << "Digite o codigo do consumidor (digite S para sair): ";
   cin >> cc;
   contc++;
   
   cout << "Digite qual o tipo de consumo (R para residencial e C para comercial): " << endl;
   cin >> tc;
   
   cout << "Digite o a fonte energetica usada (E para eletrica, S para solar e O para outras): " << endl;
   cin >> f;
   
   if(tc=='R')
   contR++;
   
   if(tc=='C')
   contC++;
   
   if(tc=='C' && f=='E')
   contCE++;
   
   if(tc=='R' && f=='S')
   contRS++;
   } while(cc != "S");
//   
   cout << "Numero de pessoas pesquisadas: " << contc << endl;
   cout << "Percentual de consumo residencial: " << (contR/contc)*100. << "%" << endl;
   cout << "Percentual de consumo comercial: " << (contC/contc)*100. << "%" << endl;
   cout << "Percentual de comercios que usam energia eletrica: " << (contCE/contC)*100. << "%" << endl;
   cout << "Percentual de residencias que usam energia solar: " << (contRS/contR)*100. << "%" << endl;
   
   return 0;
   }