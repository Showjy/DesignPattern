#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include <iostream>
#include <list>
using namespace std;
class Observer;

//Subject类
class Subject
{
public:
	Subject();
	virtual ~Subject();
	virtual void Regist(Observer* obv);//注册
	virtual void Delete(Observer* obv);//取消注册
	virtual void Notify();//通知
	void changeData(){}

private:

};




//Observer类
class Observer
{
public:
	Observer() {};
	void virtual Update(int value)//更新函数
	{

	}
	void virtual ShowMessage() = 0;//与被观察者相关函数
protected:

};

//Subject子类Data
class Data :public Subject
{
public:
	Data();
	Data(int given_value) { value = given_value; }
	~Data();
	void Regist(Observer* obv);
	void Delete(Observer* obv);
	void Notify();
	int getData() { return value; }
	void minusData() { value -= 1; }
	void plusData() { value += 1; }

private:

	list<Observer* >* _obs;  //观察者列表
	int value;
};




//Observer子类Subscriber
class Subscriber :public Observer
{
public:
	void virtual Update(int given_value);
	void ShowMessage();
private:
	int value;
};



#endif