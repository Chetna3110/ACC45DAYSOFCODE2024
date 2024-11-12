#include <iostream>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	 int X , Y;
	 cin >> X >> Y;
	 
	 int Det = Y * 2;
	 
	 if(Det > X){
	     cout << "0"<< endl;
	 }else {
	     cout << X / Det << endl;
	 }
}
	return 0;
}