#include <iostream>

using namespace std;
void printNumbers(int);
int main() {

	for (int x = 1; x < 10; x++) {
		cout << x << endl;
		cout << x + 1 << endl;
	}
	printNumbers(5);	
	cout << "Testng spaces     python trimming";
	return 0;


}
void printNumbers(int max) 
{
	for (int i = 0; i < max; i++)
		cout << i << endl;
}
