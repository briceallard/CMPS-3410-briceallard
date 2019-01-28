#include <iostream>

using namespace std;
void printNumbers(int);
int main() {
	cout << "Enter 2 numbers separated by a space: ";
	int x, y;
	cin >> x >> y;
	cout << "The answer is " << x * y << endl;
	return 0;


}
void printNumbers(int max) 
{
	for (int i = 0; i < max; i++)
		cout << i << endl;
}
