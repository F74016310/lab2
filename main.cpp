#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include<iomanip>
#include"count_BIM.h"

using namespace std;

int main(){
	double mass,height;
	double bmi;
	
	BMI u1;

	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr << "Failed opening"<<endl;
		exit(1);	
	}
	
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr << "Failed opening"<<endl;
		exit(1);
	}
	
	while( inFile >> height >> mass){
		if(height == 0 && mass ==0)
			break;
		bmi = u1.calculate(height , mass);
		outFile.width(8);outFile << setprecision(4) << left << bmi;	
		outFile << u1.category() << endl;
	}
	inFile.close();
	outFile.close();
	return 0;
}
