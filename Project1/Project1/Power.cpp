//תרגיל 20
#include "Power.h"
int powerNum(unsigned int num)
{
	int tmp = 1;
	int sum = 0;

	while (num--) {
		sum += tmp;
		tmp += 2;
	}
	return sum;
}