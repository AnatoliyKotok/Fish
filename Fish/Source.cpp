#include "Fish.h"
#include<iostream>
#include<string>
using namespace std;

int main() {
	Fish f1("Cat fish", 3, 2,4);
	f1.setType(Fish::Type::lake);
	f1.print();
	Fish f2("Bas", 4, 2, 1);
	f2.setType(Fish::Type::lake);
	f2.print();
    Fish::GetCount();
	cout<<"Compresion->"<<Fish::Compresion(f1, f2);
	cout << endl;
	cout << "Check type->";
	Fish::CheckType(f1, f2);
	cout << endl;
}