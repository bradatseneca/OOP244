namespace bmi {
	double bmi_lbs(double height, double weight){
		return (weight / (height * height)) * 703;
	}
	double bmi_kgs(double height, double weight){
		return weight / (height * height);
	}
}