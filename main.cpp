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
	cout << "显示屏1：";
	testObs1->ShowMessage();
	cout << endl;
	cout << "显示屏2：";
	testObs2->ShowMessage();
	cout << endl;
	
	int change;
	while (cin >> change)
	{
		if (change == -1) {
			if (testData->getData() == 0) {
				cout << "停满了" << endl;
				continue;
			}
			testData->minusData();
			cout << "停入一辆车" << endl;
			}
		else if(change == 1)
		{   
			if (testData->getData() == 100) {
				cout << "停车场空了" << endl;
				continue;
			}
			testData->plusData();
			cout << "驶出一辆车" << endl;
		}
		testData->Notify();
		cout << "显示屏1：";
		testObs1->ShowMessage();
		cout << endl;
		cout << "显示屏2：";
		testObs2->ShowMessage();
		cout << endl;
	}*/

	//composite
	
	/*Leaf* jiadingqu = new Leaf("嘉定区");
	Leaf* yangpuqu = new Leaf("杨浦区");
	Leaf* bananqu = new Leaf("巴南区");
	Leaf* fuyangqu = new Leaf("富阳区");
	Leaf* xihuqu = new Leaf("西湖区");
	Composite* shanghaishi = new Composite("上海市");
	Composite* chongqingshi = new Composite("重庆市");
	Composite* zhejiangsheng = new Composite("浙江省");
	Composite* hangzhoushi = new Composite("杭州市");
	Composite* zhongguo = new Composite("中国");
	
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