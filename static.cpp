#include <iostream>

using namespace std;

class Sample{
	
	private:
		int a;
		static int b;
	
	public:
		Sample(){
			a=0;
		}
		
		void inc(){
			a=a+3;
			b=b+1;
		}
		
		void display(){
			
			std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
			
		}
};

int Sample::b=0;

int main(){
	
	Sample obj1;
	obj1.display();
	
	Sample obj2;
	obj2.display();
	
	obj1.inc();
	obj1.display();
	obj2.display();
	
	obj2.inc();
	obj1.display();
	obj2.display();
	
	Sample obj3;
	obj3.inc();
	obj3.display();
	
	obj2.display();
	obj1.display();
	obj2.inc();
	obj2.display();
	obj3.display();
	return 0;
}