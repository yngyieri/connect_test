#include "iostream"
using namespace std;

class Father
{
public:
	virtual void func()//�ܵ���
	{
		cout << "������麯��" << endl;
	}
	//void func1()
	//{
	//	cout << "����ķ���" << endl;
	//}

};
class Son : public  Father //���м̳й�ϵ
{
public:
	virtual void func()//�ܵÿ�
	{
		cout << "������д������麯��" << endl;
	}
	virtual void func1()//����֮��Ҳ�в����ص��麯����father->func1()˼����
	{
		cout << "����ķ���" << endl;
	}
};


void func(int x, char y)
{
	cout << "����ķ���" << endl;
}

void  func(int x, int y)
{

}
//����һ�β����ύ
int main()
{
	Son son;
	Father* father;
	father = &son;
	father->func();
	son.func1();
	return 0;
}