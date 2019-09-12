/*
 * lab2.cpp
 *
 *  Created on: Sep 3, 2019
 *      Author: Allie DeAbreu and  Alex Clark
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

void func1(){
	int a=3;
	cout<<a<<endl;
	cout<<&a<<endl;
	return;
}//p1

void func2(int b){
	b+=4;
	cout<<b<<endl;
	cout<<&b<<endl;
	return;
}//need to add the variable to the main function; see second part of problem 2

int func3(){
	int c = 37;
	cout<<c<<endl;
	cout<<&c<<endl;
	return c;
}//p3; Need to complete the parts for the main function

void func4(int &d){
	int *y=&d;
	*y = (*y)*(*y)*(*y);

}
 int main(){


	 return 0;

 }


