#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include <vector>
using namespace std;

class Component
{
public:
	virtual void Operation(int n) = 0;
	virtual void Add(Component*);
	virtual void Remove(Component*);
	virtual Component* GetChild(int index);
	virtual ~Component();
protected:
	Component();
private:

};


class Leaf :public Component
{
 public:
     virtual void Operation(int n);
     Leaf(string name);
     ~Leaf();
 private:
	 string name;
 };

 class Composite :public Component
 {
 public:
     Composite(string name);
     ~Composite();
     void Operation(int n);
     void Add(Component*);
     void Remove(Component*);
     Component* GetChild(int index);
 private:
     vector<Component*> _Com;
	 string name;
 };



 #endif