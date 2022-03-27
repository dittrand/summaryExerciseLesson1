//תרגיל 24
#include<iostream>
#include "round.h"

unsigned int selfXor(unsigned int num1, unsigned int num2) {
	unsigned int tmpAnd = num1 & num2;
	unsigned int tmpOr = num1 | num2;
	return ~tmpAnd & tmpOr;
}