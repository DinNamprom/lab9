#include<iostream>
using namespace std;

//Write the function printO() here
int printO(int y,int x) {
	if (x > 0 && y > 0) {
		for (int i=0;i < y;i++) {
			for (int i=0;i < x;i++) {
				cout << "O";
			}
			cout << "\n";
		}
	}else {
		cout << "Invalid input";
	}
	return 0;
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
