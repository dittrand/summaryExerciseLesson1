#include <iostream>
#include "round.h"
#include "xor_without_operator.h"
#include "Swap_by_even_and_odd.h"
#include "Power.h"
#include "max.h"
using namespace std;
int main() {
	cout<<roundToLeft( 2 , 32)<<'\n';
	cout << selfXor(1, 3) << '\n';
	cout << swap(6) << '\n';
	cout <<"power of 5 "<< powerNum(5) << '\n';
	cout << "max" << returnMax(5, 7) << '\n';
	return 0;
}