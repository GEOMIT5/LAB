#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <cstring>
#include<Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int n;
	int i = 0;
	char str[256];
	
	cout << "Âåäèòå ñèìâîë:" << endl;
	
	cin.getline(str, 255);
	
	while (str[i]) {
		
		n = (int)str[i];
		
		cout << str << " " << n << " " << hex << n << " " << oct << endl;
		i++;
		
	}
	return 0;
}
