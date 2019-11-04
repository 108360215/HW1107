#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main() {

	float circle = 0;

	while (1) {

		printf("How many disks are there?(-1 to end)  ");
		scanf_s("%f", &circle);

		if (circle == -1)
			break;

		printf("at least need %.0f times\n\n", pow(2, circle) - 1);		

	}
	system("pause");
	return 0;

}