#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int n1, n2, i;
	
///////	
	
	for (i=1; i<=3; i++)
{
	cin >> n1 >> n2;
	int md = (n1+n2)/2;
	cout << "Media: " << md << endl;
		if ( md>=50)
		cout << "APROVADO" << endl;
		else 
		cout << "REPROVADO" << endl;
}
	
	return 0;
}