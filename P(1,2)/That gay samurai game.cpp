#include <iostream>
#include <cstring>

using namespace std;

int main(){
setlocale(LC_ALL,"Portuguese");
char j[21] = {"Jetstream Sam"};
char j2[21] = {"Sam"};
char r[21] = {"Raiden"};
char s[21] = {"Sundowner"};
char se[21] = {"Senator"};
char escolha[21];

	cout << "Jetstream Sam, Raiden, Sundowner, Senator? " << endl;
	cin.getline(escolha, 21);
	if(strcmp(escolha, j) == 0 || strcmp(escolha, j2) == 0){
		cout << endl << endl;
		cout << "\t" << "THE ONLY THING I KNOW FOR REAL" << endl;
		cout << "\t" << "THERE WILL BE BLOOD" << endl;
		cout << "\t" << "~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "\t" << "SHED" << endl;
		cout << "\t" << "~~~~~~~~~~~~~~~~~~~~" << endl;
		cout << "\t" << "THE MAN IN THE MIRROR NODS HIS HEAD" << endl;
	}
	if(strcmp(escolha, r) == 0){
		cout << endl << endl;
		cout << "\t" << "RULES OF NATURE" << endl;
		cout << "\t" << "AND THEY RUN WHEN THE SUN COMES UP" << endl;
		cout << "\t" << "WITH THEIR LIVES ON THE LINE" << endl;
		cout << "\t" << "====================" << endl;
		cout << "\t" << "ALIIIIIIIVE" << endl;
		cout << "\t" << "====================" << endl;
	}
	if(strcmp(escolha, s) == 0){
		cout << endl << endl;
		cout << "\t" << "RED SUN, RED SUN OVER PARADISE" << endl;
		cout << "\t" << "RED SUN, RED SUN OVER PARADISE" << endl;
		cout << "\t" << "GOLDEN RAYS OF THE GLORIOUS SUNSHINE" << endl;
		cout << "\t" << "SENDING DOWN SUCH A BLOOD-RED LIGHT" << endl;
	}
	if(strcmp(escolha, se) == 0){
		cout << endl << endl;
		cout << "\t" << "ииииииииииииииииииииии" << endl;
		cout << "\t" << "STANDING HERE I REALIZE" << endl;
		cout << "\t" << "ииииииииииииииииииииии" << endl;
		cout << "\t" << "YOU ARE JUST LIKE ME" << endl;
		cout << "\t" << "TRYING TO MAKE HISTORY" << endl;
		cout << "\t" << "BUT WHO'S TO JUDGE THE RIGHT FROM WRONG" << endl;
		cout << "\t" << "WHEN OUR GUARD IS DOWN I THINK WE'LL BOTH AGREE" << endl;
		cout << "\t" << "THAT VIOLENCE BREEDS VIOLENCE" << endl;
		cout << "\t" << "BUT IN THE END IT HAS TO BE THIS WAY" << endl;
	}
	return 0;
}