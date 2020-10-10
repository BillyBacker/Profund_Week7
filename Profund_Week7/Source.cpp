#define _CRT_SECURE_NO_WARNINGS
#include<conio.h>
#include<string>
#include<math.h>

bool onGraph(float Param[3], float x, float y) {
	if ((-Param[0]) * pow(x, 2) + Param[1] * x - Param[2] == y) {
		return true;
	}
	return false;
}

int main() {
	float Param[3];
	for (int i = 0; i < 3; i++) {
		printf("From Ax^2+Bx+C = Y\n");
		printf("Enter %c :", 'A'+ i);
		scanf("%f", &Param[i]);
	}
	for (float colum = -20; colum <= 20; colum+=1) {
		for (float row = 20; row >= -20; row-=1) {
			if (colum == 0 || row == 0) {
				printf("+");
			}
			else {
				printf(" ");
			}
			if (onGraph(Param, row/2, colum/2)) {
				printf("0");
			}
			else {
				printf(" ");
			}

		}
		printf("\n");
	}
	_getch();
	

	return 0;
}