#include<iostream>

using namespace std;

class A{
	
	public:
		
		void fun(){
			
			cout<<"HOE ARE YOU "<<endl;
		}
};

class B : public A{
	
	public:
		
		void fun(){
			
			cout<<"I M FINE ";
		}
};

main(){
	
	B obj;
	
	obj.A::fun();
	obj.B::fun();
}
