

#include <iostream>
using namespace std;
int compGuess = 100;
int Min = 1;
int Max = 1000;
int Mid;
int main()
{
	cout << " pick a random number between 1 and 1000 and i will guess it press 1 for higher press 2 for lower press 0 for thats right" << endl;
	for (int A=1  ; A>0 ; )
	{
		cout << "is your number " << Mid << "?" << endl;
		cin >> A;
		Mid = (Min + Max) / 2;
		switch (A)
		{
		case 1:
				Max = Mid;
			break;
		case 2:
				Min = Mid;
				break;
		}
		
		compGuess = Mid / 2;


	
	}
	cout << "oh i knew it gg :)" << endl;
}