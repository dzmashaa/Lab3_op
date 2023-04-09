#include <iostream>
#include <string>
#include <iomanip>
#include "Plane.h"
using namespace std;

int enterSizeArray();
int correctInputNumberInt(const string);
float correctInputNumberDouble(const string);
void createArray(Plane*, int );
void printArray(Plane *, int);
void findPlaneContainPoint(Plane* arr, int size);