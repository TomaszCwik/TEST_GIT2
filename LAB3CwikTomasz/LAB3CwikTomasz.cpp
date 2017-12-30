// LAB3CwikTomasz.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "Punkt.h"
#include <iostream>
using namespace std;

int main()
{

//operator += Begin
	cout << "operator+=" << endl;
	Punkt p1(1,2);
	p1.drukuj();
	Punkt p2(3,4);
	p2.drukuj();
	p1 += p2;
	p1.drukuj();
	cout << endl;
//operator += end

//operator = Begin
	cout << "operator=" << endl;
	Punkt p3(1, 2);
	p3.drukuj();
	Punkt p4(3, 4);
	p4.drukuj();
	p3 = p4;
	p3.drukuj();
	cout << endl;
	//operator = end

	//operator == Begin
	cout << "operator==" << endl;
	Punkt p5(1, 2);
	p5.drukuj();
	Punkt p6(3, 4);
	p6.drukuj();
	Punkt p7(3, 4);
	p7.drukuj();
	if (p5 == p6){cout << "p5==p6" << endl;}
	else{cout << "p5!=p6" << endl;}
	if (p6 == p7){cout << "p6==p7" << endl;}
	else{cout << "p6!=p7" << endl;}
	cout << endl;
	//operator == end	

	//operator a=b+c Begin
	cout << "operator a=b+c" << endl;
	Punkt p8(1, 2);
	p8.drukuj();
	Punkt p9(3, 4);
	p9.drukuj();
	Punkt p10;
	p10.drukuj();
	p10=p8 + p9;		
	p8.drukuj();
	p9.drukuj();
	p10.drukuj();
	cout << endl;

	//operator a=b+c end	

	//operator << end	
	cout << "operator <<" << endl;
	Punkt p11(10, 20);
	cout << p11 << endl;
	cout << endl;

	Tablica t1(10);

	int temp;
	cin >> temp;
	return 0;
}

