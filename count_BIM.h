#include<string>
#ifndef COUNT_BIM_h
#define COUNT_BIM_h

using namespace std;

class BMI{
	public:
		BMI();
		double calculate(double height,double mass);
		string category();
	private:
		double value_BMI;

};
#endif
