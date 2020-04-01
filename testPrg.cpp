#include <iostream>
using namespace std;

int main(){
	
	int val =0;
	std::cout<<val;
}

unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
