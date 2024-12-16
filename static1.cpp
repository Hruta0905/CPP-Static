#include<iostream>

using namespace std;

class Sample{
	private:
		int a;
		static int b;
		
	public:
	
	Sample(){
		a=2;
	}
	
	void display(){
		std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
	}
	
	void inc(){
		a=a+1;
		b=b+3;
	}
};

int Sample::b=1;

int main(){
	
	Sample obj1;
	obj1.display();
	obj1.inc();
	obj1.display();
	
	Sample obj2;
	obj2.inc();
	obj2.display();
	
	obj1.inc();
	obj2.display();
	obj2.inc();
	
	Sample obj3;
	obj3.inc();
	obj3.display();
	
	obj2.display();
	obj1.display();
	
	obj2.display();
	obj3.inc();
	obj3.display();
	return 0;
}