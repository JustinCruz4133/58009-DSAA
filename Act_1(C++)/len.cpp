#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int num [] = {5, 4, 3, 2, 1};
	int n = 5;
	
	cout<< "Numbers: ";
	for (int i = 0; i < n; i++)
	{
		cout<< num[i]<< " ";
	}
	
	cout<< endl<< "The length of the array is: ";
	cout<< sizeof(num)/sizeof(num[0]);
	return 0;
}
