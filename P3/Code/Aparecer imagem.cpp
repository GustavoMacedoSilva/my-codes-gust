#include <iostream>
#include <cstring>
#include <graphics.h>

using namespace std;

int main()
{
	char r1[2] = {"s"};
	char r2[2] = {"n"}
	char e[2];
	
	cout << "Are you pigma? (s to yes, n to no)" << endl;
	cin.getline(e, 2);
	
	if(strcmp(r1, e) == 0){
	initwindow(680,581,"Code4xU");
	readimagefile("fetchimage.webp", 0, 0, 200, 200)
	getch();
	closegraph();
	}
	
	else if (strcmp(r2, e) == 0){
		initwindow(500, 594, "Code4xU");
		readimagefile("86a0f8bc84b64e77daf632d57f80a1be.jpg", 0, 0, 200, 200);
		getch();
		closegraph();
	}
	
	return 0;
}