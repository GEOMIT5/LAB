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
	
	cout << "������ ������:" << endl;
	
	cin.getline(str, 255);
	
	while (str[i]) {
		if ((unsigned char)str[i] >= 0x00 && (unsigned char)str[i] <= 0xFF) 
		{
			str[i] = (unsigned char)str[i] + 0x20;
		}
		else if (isupper(str[i])) str[i] = tolower(str[i]);
		n = (int)str;
		
		cout << str << " " << n << " " << hex << n << " " << oct << endl;
		i++;
		
	}
	return 0;
}
