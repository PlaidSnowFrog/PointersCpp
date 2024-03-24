#include <iostream>
#include <ctime>

int multiplyToRandomNumByValue(int x);
void multiplyToRandomNumByPointer(int * pX);
void multiplyToRandomNumByReference(int &x);

int main()
{
	int x = 5;
	int * pX = &x;

	srand(time(NULL));

	for (int i = 0; i < 10000000; i++) {	
		// x = multiplyToRandomNumByValue(x);
		// multiplyToRandomNumByPointer(pX);
		multiplyToRandomNumByReference(x);

		std::cout << "Variable: " << x << '\n';
		std::cout << "Pointer:  " << pX << "	" << *pX << '\n';

		// x = 5;
	}

}

int multiplyToRandomNumByValue(int x)
{
	return x * ((rand() % 5) + 1);
}

void multiplyToRandomNumByPointer(int * pX)
{
	*pX * ((rand() % 5) + 1);
}

void multiplyToRandomNumByReference(int &x)
{
	// x * ((rand() % 5) + 1);
	x += 5;
}
