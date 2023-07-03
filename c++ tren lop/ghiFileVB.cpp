#include<string.h>
#include<iostream>
#include<fstream>
using namespace std;

main(){
	char fileName[30];
	cout << "Ten tep tin: ";
	cin >> fileName;
	cin.ignore();
	ofstream fileOut(fileName, ios::out);
	if(!fileOut){  
		cout << "Khong the tao duoc tep tin "<< fileName << endl; 
		exit(1);
	}
	string s;	
	getline(cin, s);
	fileOut<< s;
	fileOut << endl; 
	fileOut.close();

}
