#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
//char	
	int M[1][100];//matriz
	int n;//quantidade de numeros na matriz
	int i, j;//aux
	int T;//quantidade de testes
	int s = 0;//soma dos valores antes de x
	bool r = false;//resultado
//	
	cin >> T;//insere a quantidade de testes
	
	for(i=0; i<T; i++)
	{
		cin >> n;
		
		for(j=0; j<n; j++)
		{
			cin >> M[0][j];
		}
		
		for(j=1; j<n; j++)
		{
			 s = s + M[0][j-1];
			 if(s == M[0][j+1])
			 {
			 	 r = true;
			 }
		}
		
		if(r)
		{
			cout << "YES" << endl;
		}
		
		if(r == false)
		{
		cout << "NO" << endl;
	    }
	    s = 0;
	}
	
	
	return 0;
}
