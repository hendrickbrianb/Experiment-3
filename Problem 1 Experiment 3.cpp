#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
	int num[15] = {1,3,5,7,9,10,13,14,18,22,28,33,40,42,50};
	float ave;
	float n;
	cout <<"The Smallest Integer is: "<< num[0] << endl;
	cout <<"The Largest Integer is: " << num[14] << endl;
	cout <<"The Total is: " << num[0]+num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8]+num[9]+num[10]+num[11]+num[12]+num[13]+num[14] << endl;
	n = num[0]+num[1]+num[2]+num[3]+num[4]+num[5]+num[6]+num[7]+num[8]+num[9]+num[10]+num[11]+num[12]+num[13]+num[14];
	ave= n / 15;
	cout <<"The Average is: " <<setprecision(4)<< ave << endl;
	getch();
	return 0;
}
