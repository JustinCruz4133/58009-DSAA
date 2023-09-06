#include<iostream>
using namespace std;
int main()
{
	int num [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout<< "Numbers (Without Insert): ";
	for (int i = 0; i < 10; i++)
	{
		cout<< num[i]<< " ";
	}
	
	int x, p;
	cout<< endl<< "Enter number to Insert: ";
	cin>> x;
	cout<< endl<< "At what Position: ";
	cin>> p;
	for (int i = 10; i >= p; i--)
		num[i] = num[i-1];
	num[p] = x;
	
	cout<< "Numbers (With Insert): ";
	for (int i = 0; i < 11; i++)
		{
		cout<< num[i]<< " ";
		}
	
	return 0;
}
