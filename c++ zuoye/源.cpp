#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class circle {
//public:
//	circle();
//	void input_r(double x);
//	double l();
//	double s();
//private:
//	double r;
//};
//circle:: circle()
//{
//	r = 0;
//}
//void circle::input_r(double x)
//{
//	r = x;
//}
//double circle::l()
//{
//	return r * 2 * 3.14;
//}
//double circle::s()
//{
//	return r * r * 3.14;
//}
//int main()
//{
//	circle s;
//	double i;
//	cout << "请输入圆的半径：" << endl;
//	cin >> i;
//	s.input_r(i);
//	cout << "该圆的周长为" << s.l() << endl;
//	cout << "该圆的面积为" << s.s() << endl;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//typedef struct student {
//	char name[18];
//	int mathstudy;
//	int chinese;
//}student;
//class Stustudy {
//public:
//	void stuin(student* p)
//	{
//		allmathstudy = allmathstudy + p->mathstudy;
//		allchinese = allchinese + p->chinese;
//	}
//	static void  ShowStatic()
//	{
//		cout << "人数：" << num << "\t";
//		cout << "数学总成绩：" <<allmathstudy<< "\t";
//		cout << "语文总成绩：" <<allchinese<< endl;
//	}
//	void ShowBase(student* p)
//	{
//		cout << "名字：" << p->name << "\t";
//		cout << "数学成绩：" << p->mathstudy << "\t";
//		cout << "语文成绩：" << p->chinese << endl;
//	}
//	void StuInput()
//	{
//		num++;
//	}
//private:
//	static int num;
//	static int allmathstudy;
//	static int allchinese;
//};
//int Stustudy::num = 0;
//int Stustudy::allchinese = 0;
//int Stustudy::allmathstudy = 0;
//int main()
//{
//	Stustudy s;
//	int i = 3;
//	student arr[3];
//	for (int m = 0; m < i; m++)
//	{
//		scanf("%s %d %d", &arr[m].name, &arr[m].chinese, &arr[m].mathstudy);
//		s.StuInput();
//		s.stuin(&arr[m]);
//	}
//	for (int m = 0; m < i; m++)
//	{
//		s.ShowBase(&arr[m]);
//	}
//	s.ShowStatic();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//class People {
//private:
//	static int num;
//	int age;
//	double height;
//	double weight;
//	
//public:
//	People()
//	{
//		age = 0;
//		height = 0;
//		weight = 0;
//	}
//	void input(int age, double height, double weight)
//	{
//		this->age = age;
//		this->height = height;
//		this->weight = weight;
//		num++;
//	}
//	void Eatting()
//	{
//		this->weight++;
//	}
//	void Sporting()
//	{
//		this->height++;
//	}
//	void Sleeping()
//	{
//		this->age++;
//		this->height++;
//		this->weight++;
//	}
//	void Show()
//	{
//		cout << "年龄：" << this->age << "\t";
//		cout << "身高：" << this->height << "\t";
//		cout << "体重：" << this->weight << endl;
//	}
//	static void ShowNum()
//	{
//		cout <<"人数："<< num << endl;
//	}
//};
//int People::num = 0;
//int main() {
//	People arr[2];
//	int a = 0;
//	double b, c;
//	for (int m = 0; m < 2; m++)
//	{
//		scanf("%d %lf %lf", &a, &b, &c);
//		arr[m].input(a, b, c);
//		arr[m].Eatting();
//		arr[m].Sleeping();
//		arr[m].Sporting();
//	}
//	for (int m = 0; m < 2; m++)
//	{
//		arr[m].Show();
//	}
//	People::ShowNum();
//	return 114514;
//}

#include <iostream>
using namespace std;
//client.h
class CLIENT {
public:
	static void ChangeServerName();
	void coutSN()
	{
		cout << this->ServerName << endl;
	}
private:
	static char ServerName[100];
	static int ClientNum;
};
//#include"client.h"
//client.cpp
void CLIENT::ChangeServerName()
{
	scanf("%s", &ServerName);
}
char CLIENT::ServerName[100] = "sb";
int CLIENT::ClientNum = 0;
//#include"client.h"
//test.cpp
int main()
{
	CLIENT a;
	a.coutSN();
	a.ChangeServerName();
	a.coutSN();
	return 0;
}
