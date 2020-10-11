#include<stdio.h>
#include<math.h>
double x, y,z,d1,d2, area;

void Square() {

	printf("Square Area \n");
	printf("Input Side length = ");
	scanf_s("%lf", &x);
	printf("Area of Square = %.2lf",area = fabs((x * x)));
}

void Rhombus() {

	printf("Rhombus Area \n");
	printf("Input diagonal 1 = ");
	scanf_s("%lf", &d1);
	printf("Input diagonal 2 = ");
	scanf_s("%lf", &d2);
	printf("Area of Rhombus = %.2lf",area =fabs( 0.5 * (d1 * d2)));
	
}
void Paralellogram() {

	printf("Paralellogram Area \n");
	printf("Input base = ");
	scanf_s("%lf", &z);
	printf("Input high = ");
	scanf_s("%lf", &y);
	printf("Area of Paralellogram = %.2lf", area = fabs(z * y));
	
}
int main() {
	int num;
	printf("1.Square Area\n2.Rhombus Area\n3.Paralellogram  Area\n");
	printf("Enter 1-3: ");
	scanf_s("%d", &num);
	if (num == 1) {

		Square();

	}else if (num == 2) {

		Rhombus();
	}
	else if (num == 3) {

		Paralellogram();

	}
	else {
		printf("enter wrong number");
	}

	return 0;
}