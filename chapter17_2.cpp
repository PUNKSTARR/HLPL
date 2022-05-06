#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for(int i=0; i<n; i++)
		os << a[i] << endl;
//delete[] a;
}


int main ()
{
// chapter 17, drill 1
int n = 7;
int* p1 = &n;
cout << "p1: " << p1 << " " << " n: " << n << endl ;// chapter 17, drill 2

int seven_i [7] {1, 2, 4, 8, 16, 32, 64};// chapter 17, drill 3
int* p2 = seven_i;


cout << p2 << endl;// chapter 17 drill 4
print_array (cout, p2, 7);

int* p3 = p2;//chapter 17, drill 5

p1 = p2;// chapter 17, drill 6

p3 = p2;// chapter 17, drill 7

// chapter 17, drill 8
cout << "p1"  << ' ' << p1 <<" it points to " << *p1 << endl;  // p1 points to first value in the array
print_array (cout, p2, 7);

// Q 9 we didn't use any free space we used int which is in the stack 

int ten_i [10] {1, 2, 4, 8, 16, 32, 64, 128, 256,512};// chapter 17, drill 10
p1 = ten_i;

int ten2_i [10] {1, 2, 4, 8, 16, 32, 64, 128, 256,512};// chapter 17, drill 11
p2 = ten2_i;

// chapter 17, drill 12
for (int i = 0; i<10; i++)
	p2[i] = p1[i];
		
		
// chapter 17, drill 13

vector<int> v_ten_i{1, 2, 4, 8, 16, 32, 64, 128, 256,512};
	p1 = &v_ten_i[0];
	
vector<int> v_ten_i2 {1, 2, 4, 8, 16, 32, 64, 128, 256,512};
	p2 = &v_ten_i2[0];
	

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

return 0;
}
