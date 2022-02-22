//macro_def.h
#define MAX 256
#define MIN -255
#define LENGTH 22
#include <string.h>
#include <stdio.h>
int char2hex(char chr){
	//字符转数字
	return chr;
}

int *charlist2hexlist(char *str){
	//字符串转数字
	static int urt[22];
    int len = strlen(str);
	if(len>MAX || len<MIN){
		return NULL;
	}
	for(int i=0; i<len; i++){
		urt[i]=char2hex(str[i]);
	}
	//返回数组指针
	return urt;
}

int cutten(int *point){
	int b=0;
	for(int i=5; i<22;i++){
		b+=point[i];
	}
	return b;
}

//Sink
bool explode(int passcode){
	//运行到此处爆炸
	if(passcode==2022){ //Sanitizer
		std::cout<<"PWNED!!!!!!"<<std::endl; //Sink
		return true;
	}
	else
		return false;
}