#include <iostream>
#include <iomanip>

using namespace std;

struct dado
{
	int n1, n2, n3, n4;
	float md;
};

int main (){
	
	dado *p;
	float med;
	float n1, n2, n3, n4;
	
	cout << fixed << setprecision(2);
	
	cin >> n1 >> n2 >> n3 >> n4;
	
	med = (n1 + n2 + n3 + n4)/4;
	
	p = new dado;
	
	p->n1 = n1;
	p->n2 = n2;
	p->n3 = n3;
	p->n4 = n4;
	p->md = med;
	
	cout << p->md << endl;
	
	delete p;
	
	return 0;
}