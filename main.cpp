#include <stdio.h>


template<typename T1, typename T2>
class Box {
public: 
	T1 height;
	T2 width;

	//Box(T1 height, T2 width) : height(height), width(width) {}

   T1 Min(T1 height, T2 width) {
		if (height <= width)
		{
			return height;
		}

		if (height >= width)
		{
			return width;
		}
	}



	//template <>
	//Box Min(Box num, Box num2) {

	//	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ\n");
	//	return 0;
	//}

	T1 Size() {
		return static_cast<T1>(height * width);
	}

};


int main() {

	Box<float, int> b1;
	Box<double, float> b2;
	Box<double, int> b3;
	Box<double, double> b4;
	Box<int, int> b5;
	Box<float, float> b6;

	float A = b1.Min(0.1f, 1);
	float B = b2.Min(0.01f, 0.1f);
	double C = b3.Min(0.01f, 1);
	double D = b4.Min(0.01f, 0.02f);
	int E = b5.Min(2, 1);
	float F = b6.Min(0.1f, 0.2f);

	printf("%f\n", A);
	printf("%f\n", B);
	printf("%lf\n", C);
	printf("%lf\n", D);
	printf("%d\n", E);
	printf("%f\n", F);


	return 0;
}