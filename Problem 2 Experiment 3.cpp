#include <iostream>
#include <conio.h>
using namespace std;

const int province = 3;
const int week = 7;

int main()
{
    int temp[province][week];
  

    cout << "Enter The Values of Temperature: "<<"\n";


    for (int x = 0; x < province; ++x)
    {
        for(int y = 0; y < week; ++y)
        {
            cout << "Province " << x + 1 << ", Day " << y + 1 << " : ";
            cin >> temp[x][y];
        }
    }

    cout << "\n\nDisplaying Values: " << "\n";

    for (int x = 0; x < province; ++x)
    {
        for(int y= 0; y< week; ++y)
        {
            cout << "Province " << x + 1 << ", Day " << y + 1 << " = " << temp[x][y] << endl;
        }
    }
	getch();
    return 0;
}
