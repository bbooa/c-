//#include<iostream>
//#include<string>
//#include<memory>
//
//using namespace std;
//
//class AA
//{
//public:
//	AA(const string s)
//	{
//		str= s;
//		cout<<"AA()"<<endl;
//	}
//	~AA()
//	{
//		cout<< "~AA()"<<endl;
//	}
//	void say()
//	{
//		cout<<str<<endl;
//	}
//private:
//	string str;
//};
//
//int main()
//{
//	//初始化指针指针 auto_ptr
//	//初始化方法1
//	//{
//	//	std::auto_ptr<AA> ap1(new AA("using auto_ptr")); //ap1 就是智能指针
//	//	ap1->say();  //对象生命结束, 指针回收对象是自动的.
//	//}
//	//cout<<"------------------"<<endl;
//	////初始化方法2 可以通过reset()方法
//	//{
//	//	std::auto_ptr<AA> ap1;
//	//	ap1.reset( new AA("using auto_ptr"));
//	//	ap1->say(); 
//	//}
//	//cout<<"------------------"<<endl;
//	//可以赋值
//	{
//		std::auto_ptr<AA> ap1(new AA("using auto_ptr"));   //有可能 已经被unique_ptr取代了
//		std::auto_ptr<AA> ap2;  // unique_ptr
//	 	ap2 = ap1;  // ap2获取ap1的对象
//		ap1->say(); // ap2获取ap1的对象, ap1里面没对象,再调用就出问题.
//	}
//
//	system("pause");
//	return 0;
//}