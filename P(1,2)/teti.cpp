#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
//var
float l, c, a, p, sp;
sp=0;
//saida
do{
cout << "Digite em metros a largura e o comprimento respectivamente (digite 0 para sair!): " << endl;
cin >> l;

if (l==0){
break;
}


else{

cin >> c;
a=l*c;
cout << "Area: " << a << " m^2" << endl;
p=a*18;
cout << "Potencia necessaria para o comodo: " << p << " W" << endl;
sp=sp+p;
}
}while(l!=0);
cout << "Potencia total necessaria para a casa: " << sp << " W" << endl;
return 0;
}