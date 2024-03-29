/*
 * lab2.cpp
 *
 *  Created on: Sep 3, 2019
 *      Author: Allie DeAbreu and  Alex Clark
 *
 *      Function numbers correspond to the problem numbers
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
	cout<<b<<"\t"<<&b<<endl;
	return;
}

int func3(){
	int c = 37;
	cout<<c<<"\t"<<&c<<endl;
	return c;
}//p3

void func4(int *d){
	*d = *d * *d * *d;
	cout<<*d<<"\t"<<d<<"\t"<<&d<<endl;
	return;
}

void func5(int &e){
	int x = rand() % 10 + 1;
	e = e + x;
	cout<<x<<"\t"<<e<<"\t"<<&e<<endl;
	return;
}

void func6(int *f, int *g){
	int *h = f;
	*h = 32;
	h = g;
	*h = 42;
	return;
}

void func7(char h, char *i, char &j){
	h = 'c';
	*i = 't';
	j = 'a';
	return;
}

bool func8a(int &k, int &l){
	int x = l;
	if (l>k){
		l = k;
		k = x;
		return true;

	}else{
		return false;
	}
}

void func8b() {
        for (int i = 0; i < 21; i++) {
            int x = rand() % 25 + 1;
            cout << "The first number is " << x << endl;
            int y = rand() % 25 + 1;
            cout << "The second number is " << y << endl;
            cout << "\n" << endl;
            if (func8a(x, y) == true) {
                cout << "The first number is now " << x << endl;
                cout << "The second number is now " << y << endl;
                cout << "The numbers were swapped!" << endl;
                cout << "\n" << endl;
            }
        }
}

int main(){
	 //p1
	 cout<<"Problem 1"<<endl;
	 func1();
	 cout<<"\n"<<endl;//puts 2 lines between this and the next question

	 //p2
	 cout<<"Problem 2"<<endl;
	 int aa = 4;
	 cout<<aa<<"\t"<<&aa<<endl;
	 func2(aa);
	 cout<<"\n"<<endl;//puts 2 lines between this and the next question

	 //p3
	 cout<<"Problem 3"<<endl;
	 int bb = func3();
	 cout<<bb<<"\t"<<&bb<<endl;
	 cout<<"\n"<<endl;

	 //p4
	 cout<<"Problem 4"<<endl;
	 int cc = 4;
	 cout<<cc<<"\t"<<&cc<<endl;
	 func4(&cc);
	 cout<<cc<<"\t"<<&cc<<endl;
	 cout<<"\n"<<endl;


	 //p5
	 cout<<"Problem 5"<<endl;
	 int dd = 4;
	 cout<<dd<<"\t"<<&dd<<endl;
	 func5(dd);
	 cout<<dd<<"\t"<<&dd<<endl;
	 cout<<"\n"<<endl;


	 //p6
	 cout<<"Problem 6"<<endl;
	 int ee = 10;
	 int ff = 20;
	 func6(&ee, &ff);
	 cout<<ee<<"\t"<<ff<<endl;
	 cout<<"\n"<<endl;

	 //p7
	 cout<<"Problem 7"<<endl;
	 char gg = 'c';
	 char hh = 'l';
	 char ii = 'a';
	 char jj = 's';
	 cout<<gg<<hh<<ii<<jj<<jj<<endl;
	 func7(hh, &ii, jj);
	 cout<<gg<<jj<<ii<<endl;
	 cout<<"\n"<<endl;

	 //p8a
	 cout<<"Problem 8a"<<endl;
	 int kk = 4;
	 int ll = 10;
	 cout<<func8a(kk,ll)<<"\t"<<kk<<"\t"<<ll<<endl;
	 int mm = 10;
	 int nn = 4;
	 cout<<func8a(mm,nn)<<"\t"<<mm<<"\t"<<nn<<endl;
	 cout<<"\n"<<endl;

	 //p8b
	 cout << "Problem 8b" << endl;
	 func8b();
	 func8b();
	 cout << "\n" << endl;

	 return 0;
 }
