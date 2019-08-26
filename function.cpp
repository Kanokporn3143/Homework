#include<iostream>
#include<string>
#include<time.h>
using namespace std;
int checknum(int , int);
int n1 , round = 1 ;
int main()
{
	int num;
	cout << " ###Welcome to guessing number game### \n";
	cout << " Secret number has been chosen \n";
	srand(time(0));
			n1 = 1 + rand() % 10;
			do{
				cout << " Guess the number (1 to 10): ";
	            cin >> num;
				round ++;
				 checknum (num,n1);
			}while (n1 != num);
			cout << " The secret number is " << n1 << endl;
			cout << " You made " << round << " guesses \n";
}
int checknum(int r1 , int r2)
{
	if(r1 < r2)
	{
		cout << " The secret number is lower \n";
	}
	else if(r1 > r2)
	{
		cout << " The secret number is higher \n";
	}
	else
	{
		cout << " Congratulations! \n";
	}
	return(r1,r2);
}