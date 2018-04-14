#include <iostream>
#include "stdafx.h"

using namespace std;

struct Journal
{
	char name[50];
	int val;
	float price;
};

float func(Journal *J);