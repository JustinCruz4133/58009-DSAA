#include <iostream>
using namespace std;
int main(){
    int i, j, temp;
    int n = 5;
    int num [] = {5, 4, 3, 2, 1};
    
    cout<< "The array without Sorting: ";
	for (i = 0; i < n; i++){
		cout<< num[i]<< " ";
	}

    for (i = 0; i < n; i++){
        for (j = i; j < n; j++){
            if (num[i] > num[j+1]){
                temp = num[i];
                num[i] = num[j+1];
                num[j+1] = temp;
            }
        }
    }

    cout << endl<< "Elements sorted in the ascending order are: " << endl;
    for (i = 1; i <= n; i++){
     cout << num[i]<< " ";   
    }
    return 0;
}
