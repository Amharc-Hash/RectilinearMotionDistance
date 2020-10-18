#include<stdio.h>
#include<math.h>
#include<conio.h>
typedef struct {
	double sth, keneticEnerygy, potentialEnergy;
}Value;

void inputch();
Value calculateDistance1(double, double, double);
Value calculateDistance2(double, double, double);
Value calculateDistance3(double, double, double);

int main()
{
	printf("Please press Enter every time after typing\n\n");
	printf("s = distance(m)\nu = early speed(m/s)\nv = late velocity(m/s)\na = acceleration(m/s^2)\nt = time(s)\n\n");
	inputch();

	return 0;
}

void inputch()
{
	char checkCh1[8] = { 'u','a','t' };
	char checkCh2[8] = { 'u','v','t' };
	char checkCh3[8] = { 'u','v','a' };
	float constant[100];
	int i = 0, check;
		printf("\nInput your number of data that you want from choice below\n\n");
		printf("1. u,a,t\n2. u,v,t\n3. u,v,a\nyour chioce is : ");
		scanf_s("%d", &check);
		if (check == 1)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c = ", checkCh1[j]);
				scanf_s("%f", &constant[j]);
			}
			Value r = calculateDistance1(constant[0], constant[1], constant[2]);
			printf("Your Distance is : %.2lf\n", r.sth);
			printf("Your Kenetic Energy is : %.2lf\n", r.keneticEnerygy);


		}
		else if (check == 2)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c = ", checkCh2[j]);
				scanf_s("%f", &constant[j]);
			}
			Value r = calculateDistance1(constant[0], constant[1], constant[2]);
			printf("Your Distance is : %.2lf\n", r.sth);
			printf("Your Kenetic Energy is : %.2lf\n", r.keneticEnerygy);

		}
		else if (check == 3)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%c = ", checkCh3[j]);
				scanf_s("%f", &constant[j]);
			}
			Value r = calculateDistance1(constant[0], constant[1], constant[2]);
			printf("Your Distance is : %.2lf\n", r.sth);
			printf("Your Kenetic Energy is : %.2lf\n", r.keneticEnerygy);

		}
		else
		{
			printf("\nError please try again");
		}
	
}

Value calculateDistance1(double a, double b, double c)
{
	Value k;
	char ch;
	double m;
	k.sth = (a * c) + (0.5 * (b * pow(c, 2)));
	printf("You want to calculate Kenetic Enerygy (y/n) : ");
	scanf_s("%[^\n]c", &ch);
	if (ch == 'y')
	{
		printf("Enter your weight(kg) : ");
		scanf_s("%lf", &m);

		k.keneticEnerygy = 0.5 * m * pow(b / c, 2);
	}
	else {}
	return k;
}

Value calculateDistance2(double a, double b, double c)
{
	Value k;
	char ch;
	double m;
	k.sth = ((a + b) / 2) * c;
	printf("You want to calculate Kenetic Enerygy (y/n) :");
	scanf_s("%[^\n]c",&ch);

	if (ch == 'y')
	{
		printf("Enter your weight(kg) : ");
		scanf_s("%lf", &m);

		k.keneticEnerygy = 0.5 * m * pow(b, 2);
	}
	else {}
	return k;
}

Value calculateDistance3(double a, double b, double c)
{
	Value k;
	char ch;
	double m;
	k.sth = (pow(a, 2) - pow(b, 2)) / (2 * c);
	printf("You want to calculate Kenetic Enerygy (y/n) :");
	scanf_s("%[^\n]c", &ch);

	if (ch == 'y')
	{
		printf("Enter your weight(kg) : ");
		scanf_s("%lf", &m);
		k.keneticEnerygy = 0.5 * m * pow(b, 2);
	}
	else {}
	return k;
}