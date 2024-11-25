// bai19_insonguyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
using namespace std;
int main()
{
	cout << "Kiem Tra So co Phai So Nguyen To Khong!\n";
	int so;
	cout << "NHapSo:"; cin >> so;
	int dem = 0;
	for (int i = 1; i <= so; i++)
	{
		//neu chia het thi tang dem len1:so%i ==0
		if (so % i == 0)
		{
			dem++;
		}
	}
	cout << "so dem=" << dem << endl;
	if (dem == 2)
	{
		cout << "so" << so << "la so nguyen to\n";
	}
	else {
		cout << "so" << so << "khong phai so nguyen to\n";
	}
	return 0;
}

