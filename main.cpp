#include<iostream>
#include<stdio.h>
#include<string>
#include<stdlib.h>
#include<vector>
using namespace std;

class lab1
{
public:
	bool leap(int);
	string zodiac(int);
	int findMin(vector<int>arr);
	float average(vector<vector<int> >);
	int process(string);

};
	int main()
	{
		int choice, year,number,value,rows,cols;
		bool flag = false;
		string str;
		vector<int> array;
		vector<vector<int> > v2d;
		lab1 lab1;
		while (1)
		{
			cout << "1.Check Leap Year" << endl;
			cout << "2.Chinese Zodiac year" << endl;
			cout << "3.Minumum value" << endl;
			cout << "4.Process string" << endl;
			cout << "5.Average" << endl;
			cout << "Enter your choice : ";
			cin >> choice;
			switch (choice)
			{
			case 1:
				cout << "Enter the year: ";
				cin >> year;
				cout << endl;
				flag = lab1.leap(year);
				if (flag == true)
					cout << "Leap Year" << endl;
				else
					cout << "Not a Leap Year" << endl;
				cout << endl;
				cout << endl;
				break;
			case 2:
				cout << "Enter the year: ";
				cin >> year;
				cout << endl;
				cout << "Zodiac sign for the given year is : ";
				cout<<lab1.zodiac(year);
				cout << endl;
				cout << endl;
				break;
			case 3:
				cout << "How many numbers you want to enter: ";
				cin >> number;
				cout << endl;
				cout << "Enter numbers ";
				cout << endl;
				for (int i = 0; i < number; i++)
				{
					cin >> value;
					array.push_back(value);
				}
				cout << endl;
				cout << "Minumum integer is :";
				cout<<lab1.findMin(array);
				cout << endl;
				cout << endl;
				break;
			case 4:
				cout << "Enter string to process : ";
				cin >> str;
				cout << endl;
				cout << "Result after computation is : ";
				cout<<lab1.process(str);
				cout << endl << endl;
				break;
			case 5:
				cout << "Enter number of rows in 2D vector : ";
				cin >> rows;
				cout << "\nEnter number of columns in 2D vector : ";
				cin >> cols;
				v2d.assign(rows, vector < int >(cols, 0));
				cout << "Enter numbers :";
				cout << endl;
				cout << endl;
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < cols; j++)
					{
						cin >> value;
						v2d[i][j] = value;
					}
				}
				cout << endl;
				cout << "Average is : ";
				cout<<lab1.average(v2d);
				cout << endl << endl;
				break;
			default:
				cout << "Wrong choice" << endl;
			}
		}
		return 0;

	}

	bool lab1:: leap(int year)
	{
		if (year % 4 == 0)
		{
			if (year % 100 == 0)
			{
				if (year % 400 == 0)
					return true;
				else
					return false;
			}
			else
				return true;
		}
		else
			return false;


	}

	string lab1::zodiac(int year)
	{

		year = year - ((year / 12) * 12);

		if (year == 0) {
			return "Monkey";
		}
		else if (year == 1) {
			return "Rooster";
		}
		else if (year == 2) {
			return "Dog";
		}
		else if (year == 3) {
			return "Pig";
		}
		else if (year == 4) {
			return "Rat";
		}
		else if (year == 5) {
			return "Ox";
		}
		else if (year == 6) {
			return "Tiger";
		}
		else if (year == 7) {
			return "Rabbit";
		}
		else if (year == 8) {
			return "Dragon";
		}
		else if (year == 9) {
			return "Snake";
		}
		else if (year == 10) {
			return "Horse";
		}
		else if (year == 11) {
			return "Goat";
		}
	}

	int lab1::findMin(vector<int> array)
	{
		int min = array.front();
		for (int n : array)
		{
			if (n < min)
				min = n;
		}
		return min;

	
	}

	float lab1::average(vector <vector<int> > v2d)
	{
		int sum = 0;
		float average;
		int size = v2d.size() *v2d[0].size();
		for (int i = 0; i < v2d.size();i++)
		{
			
			for (int j = 0; j < v2d[i].size(); j++)
			{
				
				sum = sum + v2d[i][j];
			}
		}
		average =(float) sum / size;
		return average;
	}
	int lab1::process(string str)
	{
		int num1, num2;
		char op;
		bool sign = false;
		string str1, str2;
		for (int i = 0; i < str.size(); i++)
		{
			if (str[i] == '+' || str[i] == '*' || str[i] == '-' || str[i] == '/')
			{
				op = str[i];
				sign = true;
				continue;
			}
			if (!sign)
				str1+= str[i];
			else
				str2+= str[i];
		}
		num1 = stoi(str1);
		num2 = stoi(str2);
		if (op == '+')
		{
			num1 = num1 + num2;
		}
		if (op == '-')
		{
			num1 = num1 - num2;
		}
		if (op == '*')
		{
			num1 = num1 * num2;
		}
		if (op == '/')
		{
			num1 = num1 / num2;
		}
		return num1;

	}


	

