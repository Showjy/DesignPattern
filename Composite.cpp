#include"composite.h"
#include<iostream>
#include<string>
using namespace std;
Component::Component()
{}

Component::~Component()
{}

void Component::Add(Component* com)
{
	cout << "add" << endl;
	
}

void Component::Remove(Component* com)
{
}

void Component::Operation(int n)
{
	cout << "Component::Operation" << endl;
}

Component* Component::GetChild(int index)
{
	return NULL;
}


Leaf::Leaf(string name)
{
	this->name = name;
}

Leaf::~Leaf()
{

}

void Leaf::Operation(int n)
{
	
	cout << name << endl;
}

Composite::Composite(string name)
{
	this->name = name;
}

Composite::~Composite()
{
}

void Composite::Add(Component* com)
{
	this->_Com.push_back(com);
}

void Composite::Remove(Component* com)
{
}

void Composite::Operation(int n)
{
	cout << name << endl;
	vector<Component*>::iterator iter = this->_Com.begin();
	for (; iter != this->_Com.end(); iter++)
	{
		for (int i = 1; i <= n; i++) {
			cout << "  ";
		}
		(*iter)->Operation(n+1);
	}
}

Component* Composite::GetChild(int index)
{
	if (index < 0 || index > this->_Com.size())
	{
		return NULL;
	}
	return this->_Com[index];
}
