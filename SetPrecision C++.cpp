#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int amt;
	float balance;
	cin>>amt>>balance;
	//to format the decimal values after decimal 
  cout<<setprecision(2)<<fixed;
  cout <<amt << endl;
  cout <<balance << endl;
	return 0;
}

