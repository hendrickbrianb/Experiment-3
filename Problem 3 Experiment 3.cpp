#include<iostream>
#include<conio.h>
using namespace std;
int main ()
{
	
	int d,e,f;
	char myWord[3] = {'e','n','g'};
	int myNum[4] = {1,9,0,7};
	cout <<myNum[3]<<""<<myNum[2]<<""<<myNum[1]<<""<<myNum[0]<<""<<myWord[2]<<""<<myWord[1]<<""<<myWord[0];
	d = sizeof (myWord);
	e = sizeof (myNum);

	cout << "\nThe size of myWord is: "<< d << endl;
	cout << "The size of myNum is: " << e << endl;
	getch();
	return 0;
}
