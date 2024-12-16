#include<iostream>

using namespace std;

class Sample{
	private:
		int a;
		static int b;
		
	public:
	
	Sample(){
		a=15;
	}
	
	void display(){
		std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
	}
	
	void dec(){
		a=a-3;
		b=b-2;
	}
};

int Sample::b=17;

int main(){
	
	Sample obj1;
	obj1.display();      //a=15 b=17
	obj1.dec();			//a=12  b=15
	obj1.display();		//a=12 b=15
	
	Sample obj2;
	obj2.dec();			//a=12 b=13
	obj2.display();		//a=12 b=13
	
	obj1.dec();			//a=9 b=11
	obj2.display();		//a=12 b=11
	obj2.dec();			//a=9 b=9
	
	Sample obj3;
	obj3.dec();			//a=12 b=7
	obj3.display();		//a=12 b=7
	
	obj2.display();		//a=9 b=7
	obj1.display();		//a=9 b=7
	
	obj2.display();		//a=9 b=7
	obj3.dec();			//a=9 b=5
	obj3.display();		//a=9 b=5
	return 0;
}