#include <iostream>

using namespace std;

class Sample{
	
	private:
		int a;
		static int b;
	
	public:
		Sample(){
			a=9;
		}
		
		void dec(){
			a=a-1;
			b=b-2;
		}
		
		void display(){
			
			std::cout<<"a: "<<a<<" b: "<<b<<std::endl;
			
		}
};

int Sample::b=11;

int main(){
	
	Sample obj1;
	obj1.display();
	
	Sample obj2;
	obj2.display();
	
	obj1.dec();
	obj1.display();
	obj2.display();
	
	obj2.dec();
	obj1.display();
	obj2.display();
	
	Sample obj3;
	obj3.dec();
	obj3.display();
	
	obj2.display();
	obj1.display();
	obj2.dec();
	obj2.display();
	obj3.display();
	return 0;
}