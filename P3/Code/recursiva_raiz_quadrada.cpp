#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float funcao_raiz_quadrada(float numero_base, float estimativa_inicial, float limitante_superior)
{
   if(fabs(pow(estimativa_inicial, 2) - numero_base) <= limitante_superior)
   {
      return estimativa_inicial;
   }

   else
   {
      return funcao_raiz_quadrada(numero_base,(pow(estimativa_inicial, 2) + numero_base)/(2*estimativa_inicial), limitante_superior);
   }
}

int main()
{
 //variaveis   
    float numero_base;
    float estimativa_inicial;
    float limitante_superior;
 //   
    cout << fixed << setprecision(4);

    cin >> numero_base;
    cin >> estimativa_inicial;
    cin >> limitante_superior;
 //   
    
    cout << funcao_raiz_quadrada(numero_base, estimativa_inicial, limitante_superior) << endl;
    
    return 0;
}