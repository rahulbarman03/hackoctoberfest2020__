#include<iostream>
using namespace std;
class Area{
	public:
	void setlen(int len);
	int getlen(void);
	Area();
	private:
		int length;
};
 Area::Area(){
	cout<<"constructor is created";
	
}
void Area::setlen(int len){
	length=len;
}

int Area::getlen(void){
	return length;
}
int main(){
	Area a1;
	
	a1.setlen(4);
	cout<<a1.getlen();}
