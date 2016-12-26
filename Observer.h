#ifndef _OBSERVER_H_
#define _OBSERVER_H_
#include <iostream>
#include <list>
using namespace std;
class Observer;

//Subject��
class Subject
{
public:
	Subject();
	virtual ~Subject();
	virtual void Regist(Observer* obv);//ע��
	virtual void Delete(Observer* obv);//ȡ��ע��
	virtual void Notify();//֪ͨ
	void changeData(){}

private:

};




//Observer��
class Observer
{
public:
	Observer() {};
	void virtual Update(int value)//���º���
	{

	}
	void virtual ShowMessage() = 0;//�뱻�۲�����غ���
protected:

};

//Subject����Data
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

	list<Observer* >* _obs;  //�۲����б�
	int value;
};




//Observer����Subscriber
class Subscriber :public Observer
{
public:
	void virtual Update(int given_value);
	void ShowMessage();
private:
	int value;
};



#endif