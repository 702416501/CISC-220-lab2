/*
 * Lab2TOC.cpp
 *
 *  Created on: Sep 3, 2019
 *      Author: Allie and Alex Clark
 */

#include <iostream>
#include <stdlib.h>

using namespace std;


int main(){
	/*int a=14;
	cout<<a<<endl;
	cout<<&a<<endl;
	//Must use address to find the specific variable  name
	int b=4;
	int *c=&b;
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<&b<<endl;
	cout<<&c<<endl;
	*c=*c**c;
	cout<<b<<endl;*/


// Memory/Arrays Try on Computer
	int arr[5] = {1,2,3,4,5};
  	cout << &arr[0] << endl; //Printing using method 1, given the address of first value in array
  	cout << arr <<endl; //Printing using method 2, printing the address of the array (aka where first value in array is)
  	for(int i = 0; i < sizeof(arr); i++) {
  		cout << &arr[i] << endl;
  	}
/*
  	int main() {
  		int arr[7] = {10,20,30,40,50,60,70};
  		func(arr,7);
  		func(&arr[0],7);
  		func(&arr[2],5);
  		return 0;
  	}

  	void func(int *x, int size) {
  		for (int i = 0; i < size; i++) {
  			cout <<x[i] << “, “;
  		}
  		cout << endl;
  		return;
  	}

  	This prints out:
  	10, 20, 30, 40, 50, 60, 70,
	10, 20, 30, 40, 50, 60, 70,
	30, 40, 50, 60, 70,
	This is due to the address of the 1st element (position 0, value = 10) being passed in for the starting point of the second call (same
	as starting from the beginning of the array) and the address of the 3rd element (position 2, value = 30) for the starting point of the
	third call.
*/
}

