
#include"count_BIM.h"

using namespace std;

BMI::BMI(){value_BMI= 0.0;}

double BMI::calculate(double height,double mass){
	value_BMI = mass / ((height/100)*(height/100));
	return value_BMI;
}

string BMI::category(){
	if(value_BMI < 15)
		return "Very severely underweight";
	if(value_BMI > 15 && value_BMI < 16)
		return "Severely underweight";
	if(value_BMI > 16 && value_BMI < 18.5)
		return "Underweight";
	if(value_BMI > 18.5 && value_BMI < 25)
		return "Normal"; 
	if(value_BMI > 25 && value_BMI < 30)
		return "Overweight";
	if(value_BMI > 30 && value_BMI < 35)
		return "Obese Class I (Moderately obese)";
	if(value_BMI > 35 && value_BMI < 40)
		return "bese Class II (Severely obese)";
	if(value_BMI >= 40 )
		return "Obese Class III (Very severely obese)";
}
