#include <iostream>
#include <iomanip>

using namespace std;

main () {
//var	
	int seg, min, h;
	
//entrada	
	cin >> seg;
	
//saida	
	{
	min = seg / 60;
	seg = seg -(min*60);
}
{	h = seg / 3600;
	seg = seg-(h*3600);
	cout << h << ":" << min << ":" << seg << endl;
}
	
	return 0;
	
}