#pragma once
#include<string>
using namespace std;
class Fish
{
public:
	
	Fish() = default;
	Fish( string name,float width, float length, float depth) {
		SetName(name);
		SetSize(width, length, depth);
		++count;
	}
	enum Type{none,ocean,lake,river,sea};
	void SetName(const string& name);
	void SetSize(const float& width, float& length, float& depth);
	string GetName();
	int GetWidth();
	int GetLength();
	int GetDepth();
	int amout();
	int area();
	void print();
	void setType(Type position);
	const char* getNametype() const;
	static int GetCount();
	static int Compresion(const Fish& other1, const Fish& other2);
	static void CheckType(const Fish& other1, const Fish& other2);
	bool operator==(const Fish& other) const;
	bool operator!=(const Fish& other) const;
private:
	static int count;
	
	string name;
	float width;
	float _area;
	float length;
	float depth;
	Type type = Type::none;
};

