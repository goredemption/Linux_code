#include<iostream>
using namespace std;
class person{
public:
	virtual void buy_ticket(){
		cout<<"full price"<<endl;
	}

};
class student : public person{
public:
	virtual void buy_ticket(){
		cout<<"half price"<<endl;
	}
};
int main(){
	int i=0;
	static int j=1;
	int* ptr=new int;
	const char* str="xxxx";
	student s;
	person p;
	person* pptr=&p;
	student* sptr=&s;
	printf("frame: %p\n",&i);
	printf("static: %p\n",&j);
	printf("heap: %p\n",ptr);
	printf("constant %p\n",str);
	printf("virtual table: %p\n",*(long long*)pptr);
	printf("virtual table: %p\n",*(long long*)sptr);
	return 0;
}

