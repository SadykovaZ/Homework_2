#include<stdio.h>
#include<stdlib.h>
#include <iostream>	

using namespace std;

void main()
{

	setlocale(LC_ALL, "rus");

	int n = 0;
	start:
	cout << "Выберите фигуру: 1-а, 2-б, 3-в, 4-г, 5-д, 6-е, 7-ж, 8-з, 9-и, 10-к." << endl;
	cin >> n;

	if (n == 1)
	{
		int a = 10;
		int i = 1;
		int j = 11;

		do
		{
			j++;

			if (j <= a)
			{
				if (j >= i)
					cout << "*";
				else cout << " ";
			}
			else
			{
				cout << endl;
				j = 1;
				i++;
			}
		} while (i <= a);
		cout << endl;
	}
	else if (n == 2)
	{
		int i = 1;
		int j = 1;
		int a = 11;

		do
		{
			j++;

			if (j <= a)
			{
				if (j >= i)
					cout << " ";
				else
					cout << "*";
			}
			else
			{
				cout << endl;
				j = 1;
				i++;
			}
		} while (i <= a);
		cout << endl;

	}
	else if (n == 3)
	{

		cout << endl;

		int i = 1;
		int j = 1;
		int a = 10;

		do
		{
			i++;

			do
			{
				j++;
				if (i <= 6)
				{
					if ((j <= a && j >= i))
						cout << "*";
					else
						cout << " ";
				}
				else
					cout << " ";
			} while (j <= 11);

			if (i > 5)
				a++;
			else a--;

			cout << endl;

			j = 1;

		} while (i <= 9);
		cout << endl;
	}
	else if (n == 4)
	{
		int i = 1;
		int j = 1;
		int a = 10;
		int b = 6;

		do
		{
			i++;

			do
			{
				j++;
				if (i >= 6)
				{
					if ((j <= a && j >= i) || (j >= b && j <= i))
						cout << "*";
					else
						cout << " ";
				}
			} while (j <= 10);
			if (i > 5)
				b--;
			else
				a--;

			cout << endl;

			j = 1;

		} while (i <= 9);
		cout << endl;
	}
	else if (n == 5)
	{
		cout << endl;
		int i = 1;
		int j = 1;
		int a = 10;
		int b = 6;
		do
		{
			i++;
			do
			{
				j++;
				if ((j <= a && j >= i) || (j >= b && j <= i))
					cout << "*";
				else
					cout << " ";
			} while (j <= 10);

			if (i > 5)
				b--;
			else
				a--;
			cout << endl;

			j = 1;
		} while (i <= 9);
		cout << endl;
	}
	else if (n == 6)
	{
		cout << endl;
		int	i = 1;
		int j = 1;
		int a = 10;
		int	b = 6;

		do
		{
			i++;
			do
			{
				j++;
				if ((j <= a && j >= i) || (j >= b && j <= i))
					cout << " ";
				else
					cout << "*";
			} while (j <= 9);

			if (i > 5)
				b--;
			else
				a--;

			cout << endl;

			j = 1;
		} while (i <= 9);
		cout << endl;
	}
	else if (n == 7)
	{
		int i = 1;
		int j = 1;
		int a = 10;
		int	b = 6;

		do
		{
			i++;

			do
			{
				j++;
				if (j <= 6)
				{
					if ((j <= a && j >= i) || (j >= b && j <= i))
						cout << " ";
					else
						cout << "*";
				}
				else
					cout << " ";
			} while (j <= 9);

			if (i > 5)
				b--;
			else
				a--;

			cout << endl;

			j = 1;

		} while (i <= 9);
		cout << endl;
	}
	else if (n == 8)
	{
		int i = 1;
		int j = 1;
		int a = 10;
		int b = 6;

		do
		{
			i++;

			do
			{
				j++;
				if (j >= 6)
				{
					if ((j <= a && j >= i) || (j >= b && j <= i))
						cout << " ";
					else
						cout << "*";
				}
				else
					cout << " ";
			} while (j <= 9);

			if (i > 5)
				b--;
			else
				a--;

			cout << endl;

			j = 1;

		} while (i <= 9);
		cout << endl;

	}
	else if (n==9)
	{
		cout << endl;

		int i = 1;
		int j = 1;
		int a = 10;

		do
		{
			i++;
			if (i <= a)
				cout<<"*";
			else 
			{
				cout<<endl;
				i = 1;
				j++;
				a = a - 1;
			}

		} while (j <= 10);
		cout<<endl;
	}
	else if (n==10)
	{
		int a = 9;
		int i = 10;
		int j = 0;

		do
		{
			j++;

			if (j <= a) 
			{
				if (j >= i)
					cout<<"*"; 
				else 
					cout<<" ";
			}
			else 
			{
				cout<<endl;
				j = 0;
				i--;
			}
		} while (i >= 1);
		cout<<endl;
	}
	else
	{
		cout << "Выберите другой номер" << endl;
	}
	goto start;

}
