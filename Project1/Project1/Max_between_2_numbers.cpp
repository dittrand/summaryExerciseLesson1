#include"max.h"

int returnMax(int n1, int n2) {
	return n1 ^ ((n1 ^ n2) & -(n1 < n2));
}
int returnMin(int n1, int n2) {
	return n2 ^ ((n1 ^ n2) & -(n1<n2));
}