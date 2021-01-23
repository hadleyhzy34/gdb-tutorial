#include <iostream>
#include <vector>
using namespace std;

void func1(){
    int variable1 = 10;
    cout<<variable1<<endl;
}

void func2(){
    int variable2 = 20;
    cout<<variable2<<endl;
}

int  func3(int n){
    int sum = 0;
    for(int i=0;i<=n;i++){
 	sum+=i;
    }
    return sum;
}

int main(){
    vector<int> array(5);
    //cout<<"test"<<array[10]<<endl;
    cout<<array.max_size()<<endl;
    cout<<"the current array size is: "<<array.size()<<endl;
    cout<<"test for index out of range "<<array[-1]<<" "<<&array[-1]<<endl;
    for(int i=0;i<20;i++){
	cout<<i<<"test "<<array[i]<<&array[i]<<endl;
    }
    for(int i=0;i<6;i++){
	array[i]=i;
	cout<<i<<" "<<array[i]<<endl;
    }
    func1();
    func2();
    for(int i=0;i<20;i++){
	cout<<"the current variable i is: "<<i<<endl;
    }
    int variable_main = 20;
    cout<<variable_main<<endl;
    cout<<func3(variable_main);
}
