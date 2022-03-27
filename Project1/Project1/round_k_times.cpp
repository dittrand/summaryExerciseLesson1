//תרגיל 23
#include<iostream>
#include "round.h"
using namespace std;
unsigned int roundToLeft(unsigned int num,int k) {
	int size = sizeof(int)*8;
	int tmp = num >> (size - k) ;
	num <<= k;
	return (tmp | num);
}
unsigned int roundToRight(unsigned int num, int k) {
	int size = sizeof(int) * 8;
	int tmp = num << (size - k);
	num >>= k;
	return (tmp | num);
}

