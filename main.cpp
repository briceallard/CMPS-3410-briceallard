#include <iostream>

using namespace std;
void printNumbers(int);

int main() {
	cout << "Hello World\n";
	printNumbers(10);
//	cout << "-----------------------------\n20 23.22341\n";
//	cout << "------------------------\n";
//	cout << "The answer is: 9\n";
	return 0;

}
void printNumbers(int max) 
{
	for (int i = 0; i < max; i++)
		cout << i << endl;
}
