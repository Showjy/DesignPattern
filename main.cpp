#include<iostream>
#include"Observer.h"
#include"Composite.h"
#include"UnRedo.h"
using namespace std;
void main()
{  //observer
	
   /* Data *testData = new Data();
	Subscriber *testObs1 = new Subscriber();
	Subscriber *testObs2 = new Subscriber();
	testData->Regist(testObs1);
	testData->Regist(testObs2);
	testData->Notify();
	cout << "��ʾ��1��";
	testObs1->ShowMessage();
	cout << endl;
	cout << "��ʾ��2��";
	testObs2->ShowMessage();
	cout << endl;
	
	int change;
	while (cin >> change)
	{
		if (change == -1) {
			if (testData->getData() == 0) {
				cout << "ͣ����" << endl;
				continue;
			}
			testData->minusData();
			cout << "ͣ��һ����" << endl;
			}
		else if(change == 1)
		{   
			if (testData->getData() == 100) {
				cout << "ͣ��������" << endl;
				continue;
			}
			testData->plusData();
			cout << "ʻ��һ����" << endl;
		}
		testData->Notify();
		cout << "��ʾ��1��";
		testObs1->ShowMessage();
		cout << endl;
		cout << "��ʾ��2��";
		testObs2->ShowMessage();
		cout << endl;
	}*/

	//composite
	
	/*Leaf* jiadingqu = new Leaf("�ζ���");
	Leaf* yangpuqu = new Leaf("������");
	Leaf* bananqu = new Leaf("������");
	Leaf* fuyangqu = new Leaf("������");
	Leaf* xihuqu = new Leaf("������");
	Composite* shanghaishi = new Composite("�Ϻ���");
	Composite* chongqingshi = new Composite("������");
	Composite* zhejiangsheng = new Composite("�㽭ʡ");
	Composite* hangzhoushi = new Composite("������");
	Composite* zhongguo = new Composite("�й�");
	
	zhongguo->Add(shanghaishi);
	zhongguo->Add(chongqingshi);
	zhongguo->Add(zhejiangsheng);
	shanghaishi->Add(jiadingqu);
	shanghaishi->Add(yangpuqu);
	chongqingshi->Add(bananqu);
	zhejiangsheng->Add(hangzhoushi);
	hangzhoushi->Add(xihuqu);
	hangzhoushi->Add(fuyangqu);

	zhongguo->Operation(1);*/

//undo redo
	
	/*Operation *p = new Operation();
	string str;
	while (cin >> str) {
		if (str == "redo")
		{ 
			p->Redo(); 
		}
		else if (str=="undo")
		{
			p->Undo();
			}
		else
		{
			p->AddText(new NewText(str));
		}
			
	}*/
		
	while (1);
}