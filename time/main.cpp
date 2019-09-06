#include <iostream>
#include "time.h"
using namespace std;


int main()
{
	Time t;
	t.setTime(16,22,24);
	t.printUniversal();
	t.printStandard();
}