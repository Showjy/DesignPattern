#ifndef _UNREDO_H_
#define _UNREDO_H_ 

#include <iostream>  
#include <vector>  
#include <string>  

using namespace std;
class Text
{
public:
	Text() {}
	virtual ~Text() {}
    virtual void PrintT() = 0;
};


class NewText : public Text
{
public:

	NewText(const std::string &input)
	{
		mInput = input;
	}
	~NewText()
	{}

	void PrintT()
	{
		printf("%s", mInput.c_str());
	}

private:

	string mInput;
};

class Operation
{
public:
	Operation()
	{  
	}
	~Operation()
	{
		if (false == mUndo.empty())
		{
			vector<NewText*>::iterator iter, temp;
			for (iter = mUndo.begin(); iter != mUndo.end();)
			{
				temp = iter;
				iter++;
				mUndo.erase(temp);
			}
			mUndo.clear();
		}
		if (false == mRedo.empty())
		{
			vector<NewText*>::iterator iter, temp;
			for (iter = mRedo.begin(); iter != mRedo.end();)
			{
				temp = iter;
				iter++;
				mRedo.erase(temp);
			}
			mRedo.clear();
		}
	}

	void AddText(NewText *pCmd)
	{
		cout << "当前内容：";
		pCmd->PrintT();
		mUndo.push_back(pCmd);
		PrintAll();
	}

	void Undo()
	{
		if (mUndo.empty())
		{
			//无法后退撤销没有数据  
			printf("没有更前的操作\n");
			return;
		}

		printf("undo操作");
		//保存当前命令  
		mRedo.push_back(*(mUndo.end()-1));

		//弹出  
		mUndo.pop_back();

		PrintAll();
	}

	void Redo()
	{
		if (mRedo.empty())
		{
			//无法前进重做没有数据  
			printf("没有更前的操作\n");
			return;
		}

		printf("redo操作");
		
		mUndo.push_back(*(mRedo.end()-1));
		
		mRedo.pop_back();

		PrintAll();
	}

	void PrintAll() {
		cout << "\n所有内容：";
		vector< NewText* >::iterator iter;
		for (iter = mUndo.begin(); iter != mUndo.end(); iter++)
		{
			(*iter)->PrintT();
		}
		cout << endl;

	}

private:
	vector< NewText* > mUndo;
	vector< NewText* > mRedo;
};

#endif