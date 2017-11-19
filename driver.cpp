#include <iostream>
#include "sterling.h"

using namespace std;

int main()
{
	sterling s1;
	read(&s1);
	print(s1);

	sterling s2;
	read(&s2);
	print(s2);

	sterling total = add(s1, s2);
	print(total);

	//system("pause");
	return 0;
}