#include <iostream>
using namespace std;

void func1(){
    int variable1 = 10;
    cout<<variable1<<endl;
}

void func2(){
    int variable2 = 20;
    cout<<variable2<<endl;
}

int main(){
    func1();
    func2();
    for(int i=0;i<20;i++){
	cout<<"the current variable i is: "<<i<<endl;
    }
    int variable_main = 20;
    cout<<variable_main<<endl;
}
