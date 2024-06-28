// ConsoleApplication4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "RectangleX.h"
#include "circle.h"
#include "squre.h"

using namespace std;

int main()
{
    double l, w, r,l1,w1,s;

    l1 = 10;
    w1 = 18;
    l = 2;
    w = 7;
    r = 5;
    s = 4;


    class RectangleX lr;
    RectangleX sr;
    circle c;
    squre s1;

    lr.setlength(l1);
    lr.setwidth(w1);
    sr.setlength(l);
    sr.setwidth(w);
    c.setRadius(r);
    s1.setlength(s);


    cout << lr.calcarea() -sr.calcarea()-c.calcArea()-s1.calcarea()<< endl;





}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
