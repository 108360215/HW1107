#include<stdio.h>
#include<stdlib.h>

char a,b;

int main()
{
	printf("輸入字母:");
	scanf_s("%c", &a);
	while (a!=-1)
	{
		if (a >= 65 && a <= 90)
		{
			b = a + 32;
		}
		else if (a >= 97 && a <= 122)
		{
			b = a - 32;
		}
		printf("轉換結果:%c\n",b);
		printf("輸入字母:");
		scanf_s(" %c", &a);
		
	}
	
	system("pause");
	return 0;

}