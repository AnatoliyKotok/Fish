#include "Fish.h"
#include<iostream>
#include<string>
using namespace std;
int Fish::count;
void Fish::SetName(const string& name)
{
	this->name = name;
}

void Fish::SetSize(const float& width, float& length, float& depth)
{
	this->width = width;
	this->length = length;
	this->depth = depth;
}



string Fish::GetName()
{
	return name;
}

int Fish::GetWidth()
{
	return width;
}

int Fish::GetLength()
{
	return length;
}

int Fish::GetDepth()
{
	return depth;
}

int Fish::amout()
{

	return (width*length*depth);
}

int Fish::area()
{
	_area=(width*length);
	return _area;
}

void Fish::print()
{
	cout << "Name->" << name << endl;
	cout << "\tAmout of reservoirs->" << amout() << endl;
	cout << "\tArea of reservoirs->" << area() << endl;
	cout<<"\tType of rservoirs->" << getNametype() << endl;
}

void Fish::setType(Type position)
{
	
		if (position >=Type::none && position <=Type::sea) {
			this->type = position;
		}
		
	
}

const char* Fish::getNametype() const
{
	
		const char* namePos[] = { "none","ocean","lake","rivers","sea" };
		return namePos[type];
	
}

int Fish::GetCount()
{
	return count;
}

int Fish::Compresion(const Fish& other1, const Fish& other2)
{
	if (other1._area > other2._area) {
		
		return 1;
	}
	else if(other1._area < other2._area) {
		
		return -1;
	}
	else if (other1._area == other2._area) {
		
		return 0;
	}
}
bool Fish::operator!=(const Fish& other) const
{
	return !(*this==other);
}

bool Fish::operator==(const Fish& other) const
{
	return (*this==other);
}
void Fish::CheckType(const Fish& other1, const Fish& other2)
{
	if (other1.type == other2.type) {
		cout << "The same type: " << other1.getNametype() << endl;
		return;
	}
	else {
		cout << "Types are difrend" << endl;
		return;
	}
}



