#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Book
{
	string name;
	string author;
	int countLists;
public:
	Book() : name(""), author(""), countLists(0) {}
	Book(string n, string a, int c) : name(n), author(a), countLists(c) {}
	void Print()
	{
		cout << "The name: " << name << " ,Author: " << author << ",Count of lists: " << endl;
	}
	double GetBal()
	{
		return countLists;
	}
};
int main()
{
	list<Book> num1;
	num1.push_back(Book("Metro 2033", "Strashkov", 245));
	num1.push_back(Book("Metro 2039", "Babenko", 287));
	num1.push_back(Book("Metro 2034", "Ivanov", 90));
	num1.push_back(Book("c++ Elite Pograming", "Kristina", 1215));
	for (auto iter = num1.begin(); iter != num1.end(); ++iter)
	{
		iter->Print();
	}
	cout << endl;
	int iter;
	cin >> iter;
	if (iter == 1 || iter == 2 || iter == 3 || iter == 4 || iter == 5)
	{
		auto it = num1.begin();
		if (iter == 1)
		{
			num1.erase(next(num1.begin(), 0));
			cout << "The booknumber 1 is deleted...\n" << endl;
		}
		else if (iter == 2)
		{
			num1.erase(next(num1.begin(), 1));
			cout << "The booknumber 2 is deleted...\n" << endl;
		}
		else if (iter == 3)
		{
			num1.erase(next(num1.begin(), 2));
			cout << "The booknumber 3 is deleted...\n" << endl;
		}
		else if (iter == 4)
		{
			num1.erase(next(num1.begin(), 3));
			cout << "The booknumber 4 is deleted...\n" << endl;
		}
		for (auto iter = num1.begin(); iter != num1.end(); ++iter)
		{
			iter->Print();
		}
	}
}