//main.cpp
#include <iostream>
#include "macro_def.h"
#include "class_def.h"
using namespace std;
int main(){
	Unsafe_OBJECT_CLASS udf;
	char input[22];
	//Source
	cout<<"输入初始化加载参数:";
    cin >>input;
    //Sanitizer
	if(strlen(input)>LENGTH){
		cout<<"Invalid Length"<<endl;
		return 0;
	}
	//explode main check 1
	explode(input[0]);
	int *data_perpare=charlist2hexlist(input);
	int cutten_string_lencal=cutten(data_perpare);
	udf.set_cpid(cutten_string_lencal);
	udf.set_name(input);
	//explode main check 2
	explode(udf.get_cpid());
	cout<<"初始化完成,对象id:"<<udf.get_cpid()<<"\t对象名:"<<udf.get_name()<<endl;
    getchar();
    return 0;
}