#include <iostream>
using namespace std; 
int main(void) 
{ 
int arr[10]; 
int arr_num; 
int num,i;
cout << "Enter the count of numbers? "; 
cin >> num;
try 
{ 
	for (i = 0; i < num; i++) 
	{ 
	//cout << "Enter a number to be stored: "; 
	//cin >> arr_num;
		if(num>=10)
		{ 
			throw 5;
		} 
		else arr[i]= i;
	} 
	for (i = 0; i < num; i++) 
	{ 
	cout <<arr[i]<<endl;
	} 
} 
	catch (int x ) 
	{ 
	cout << "Exception_Identified \n"; 
	system("/bin/sh"); 
	} 
	return 0;
}
