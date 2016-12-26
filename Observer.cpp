#include"Observer.h"
#include<iostream>
using namespace std;
Subject::Subject()
{

}
Subject::~Subject()
{

}
void Subject::Regist(Observer *obv)
{

}
void Subject::Delete(Observer *obv)
{

}
void Subject::Notify()
{

}
Data::Data()
{
	value = 100;
	_obs = new list<Observer*>;
}
Data::~Data()
{
	list<Observer*>::iterator iter, temp;
	for (iter = _obs->begin(); iter != _obs->end();)
	{
		temp = iter;
		iter++;
		_obs->erase(temp);
	}
	_obs->clear();
}
void Data::Regist(Observer* obv)
{
	_obs->push_back(obv);
}
void Data::Delete(Observer* obv)
{
	list<Observer*>::iterator iter;
	iter = std::find(_obs->begin(), _obs->end(), obv);
	if (iter != _obs->end())
	{
		_obs->erase(iter);
		
	}
}
void Data::Notify()
{
	list<Observer*>::iterator iter;
	for (iter = _obs->begin(); iter != _obs->end(); iter++)
	{   
		(*iter)->Update(this->value);
	    

	}
}
void Subscriber::Update(int given_value)
{   
	this->value = given_value;
   
}
void Subscriber::ShowMessage()
{
	cout << "ʣ�೵λ" << value << endl;
}