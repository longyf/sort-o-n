#include <iostream>
#include "sort.h"
#include "../rank-sort/output.h"
using namespace std;

void test1() {
	const int length=10;
	int array[length]={45,36,21,54,23,32,60,22,30,31};
	output(array,length);
	sort(array,length);
	output(array,length);
	cout<<endl;
}

void test2() {
    const int length=10;
    int array[length]={1,2,3,4,5,6,7,8,9,10};
    output(array,length);
    sort(array,length);
    output(array,length);
    cout<<endl;
}

void test3() {
    const int length=10;
    int array[length]={40,39,38,37,36,35,34,33,32,31};
    output(array,length);
    sort(array,length);
    output(array,length);
    cout<<endl;
}

void test4() {
    const int length=10;
    int array[length]={45,36,21,21,21,33,33,40,40,50};
    output(array,length);
    sort(array,length);
    output(array,length);
    cout<<endl;
}

void test5() {
    const int length=10;
    int array[length]={45,36,21,54,105,32,60,22,30,31};
    output(array,length);
    sort(array,length);
    output(array,length);
    cout<<endl;
}

void test6() {
    const int length=10;
    int *array=nullptr;
    output(array,length);
    sort(array,length);
    output(array,length);
    cout<<endl;
}

void test7() {
    const int length=1;
    int array[length]={40};
    output(array,length);
    sort(array,length);
    output(array,length);
    cout<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	try {
		test5();
	}
	catch (out_of_range e) {
		cout<<"test5"<<endl;
		cout<<e.what()<<endl;
		cout<<endl;
	}
    try {
        test6();
    }
    catch (invalid_argument f) {
		cout<<"test6"<<endl;
        cout<<f.what()<<endl;
		cout<<endl;
    }
	test7();
	return 0;
}
