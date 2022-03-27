#include<iostream>
#include "round.h"

unsigned int swap(unsigned int num) {
	unsigned int tmp= 0b10101010101010101010101010101010;
	unsigned int odd = num & tmp;
	unsigned int even = num & ~tmp;
	even <<= 1;
	odd >>= 1;
	return even | odd;
}