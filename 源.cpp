#include "iostream"
using namespace std;

class Father
{
public:
	virtual void func()//跑的慢
	{
		cout << "父类的虚函数" << endl;
	}
	//void func1()
	//{
	//	cout << "父类的方法" << endl;
	//}

};
class Son : public  Father //具有继承关系
{
public:
	virtual void func()//跑得快
	{
		cout << "子类重写父类的虚函数" << endl;
	}
	virtual void func1()//假如之类也有不重载的虚函数，father->func1()思考？
	{
		cout << "子类的方法" << endl;
	}
};


void func(int x, char y)
{
	cout << "子类的方法" << endl;
}

void  func(int x, int y)
{

}
//这是一次测试提交
int main()
{
	Son son;
	Father* father;
	father = &son;
	father->func();
	son.func1();
	return 0;
}