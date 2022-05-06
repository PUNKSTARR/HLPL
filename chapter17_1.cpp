//chapter 17,part 1
#include "std_lib_facilities.h"


void print_array10(ostream& os, int* a)
{
	for(int i=0; i<10; i++)
		os << a[i] << endl;
delete[] a;  // chapter 17, drill 9
	
}
// chapter 17, drill 6
void print_array11(ostream& os, int* a)
{
	for(int i=0; i<11; i++)
		os << a[i] << endl;

delete[] a; // chapter 17, drill 9
}

void print_array(ostream& os, int* a, int n)//chapter 17, drill 7
{
	for(int i=0; i<n; i++)
		os << a[i] << endl;
delete[] a;  // chapter 17, drill 9
}


void printVector(vector<int*> v)//function needed for chapter 17, drill 10
{

for (int i = 0; i < v.size(); ++i)
		cout << *v[i] << endl;
//delete v[i]; chapter 17, drill 9


}

vector<int*> VectorAllocate(int n)//function needed for chapter 17, drill 10
{
	vector<int*> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(new int{counter++});
	
	return temp;
}


int main()
{

	int* ten_i = new int[10];//chapter 17, drill 1
	for(int i=0; i<10; i++)
		cout << ten_i[i] << ' ';//chapter 17, drill 2
	cout << endl;
	delete[] ten_i;//chapter 17, drill 3
	
	// chapter 17, drill 4
	//print_array10(cout, ten_i);
	
	
	
	int* ten_a2 = new int[10] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109};//chapter 17, drill 5
	print_array10(cout, ten_a2);
	//delete[] ten_i2 chapter 17, drill 9
	
	
	int* eleven_a = new int[11] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};//chapter 17, drill 6
	print_array11(cout, eleven_a);
	//delete[] eleven_i; chapter 17, drill 9
	
	
	int* twenty_a = new int[20] {100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119};//chapter 17, drill 8
	print_array(cout, twenty_a, 20);
	//delete[] twenty_i ; chapter 17, drill 9
	
	// chapter 17, drill 10
	cout << "with Vector 10" << endl;
	vector<int*> vec_ten_i = VectorAllocate(10);
	printVector(vec_ten_i);
	
	cout << "with Vector 11" << endl;
	vector<int*> vec_eleven_i = VectorAllocate(11);
	printVector(vec_eleven_i);
	
	cout << "with Vector 20" << endl;
	vector<int*> vec_twenty_i = VectorAllocate(20);
	printVector(vec_twenty_i);
	
	

return 0;
}
