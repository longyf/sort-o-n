#ifndef sort_h
#define sort_h
#include <iostream>
#include <stdexcept>
using namespace std;
template <class T>
void sort(T num[], int length) {
	if (num==nullptr||length<=0)
		throw invalid_argument("Pay attention to the input array.");

	if (length==1)
		return;

	int length_temp=100;
	int *temp=new int [length_temp];
	for (int i=0; i!=length_temp; ++i) {
		temp[i]=0;
	}

	for (int i=0; i!=length; ++i) {
		if (num[i]<0||num[i]>99) 
			throw out_of_range("The elements in the array are out of range.");
	
		temp[num[i]]++;
	}

	int count=0;
	int index=0;
	for (int j=0; j!=length_temp; ++j) {
		count=temp[j];
		while (count!=0) {
			num[index]=j;
			index++;
			count--;
		}
	}	

	delete []temp;
}
#endif		
