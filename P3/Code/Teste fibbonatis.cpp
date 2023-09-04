#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int fibbos(int x, int seq[])
{
//char	
	int i;
	
//	
	for(i = 0; i < x; i++)
	{
		seq[i+2] = seq[i] + seq[i+1];
		
	}
	
	return seq[x];
}
int main()
{
 //char
    int x;
    int seq[100000];
    seq[0] = 0;
    seq[1] = 1;
    int x1;
    int e;
 //
    cin >> x;

    cout << fibbos(x, seq)<< endl;

    cout << "Quer achar outro?" << endl;
    cout << "1 sim, 0 nao" << endl;
    
	cin >> e;
    
	if(e == 1)
	{
		cout << "Qual?" << endl;
		
		cin >> x1;
		
		cout << seq[x1] << endl;
	    
	    cout << "Quer fazer denovo?" << endl;
	    
	    cin >> e;
	    
	    do
	    {
		cout << "Qual?" << endl;
		
		cin >> x1;
		
		if(x1 > x)
		{
			fibbos(x1, seq);
			x = x1;
		}
		
		cout << seq[x1] << endl;
		
		cout << "Quer fazer denovo?" << endl;
		
		cin >> e;
		
		}while(e == 1);
		
		if(e != 1)
		{
		cout << "falou" << endl;
	    }
	}
	
	
	else
	{
		cout << "Joia" << endl;
	}
	
	return 0;
}
