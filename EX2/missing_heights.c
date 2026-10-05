#include <stdio.h>

int main()
{
	float h1,h2,h3,average;
	float total,missingHeight;

	printf("Enter Height of 1st Person :");
	scanf("%f",&h1);

	printf("Enter Height of 2nd Person :");   
	scanf("%f",&h2);

	printf("Enter Height of 3rd Person :");   
	scanf("%f",&h3);

	printf("Enter Average Height :");   
	scanf("%f",&average);

	total = average * 5;

	missingHeight = (total-h1-h2-h3)/2;
	
	printf("First Missing Height = %.2f\n",missingHeight);
	printf("Second Missing Height = %.2f\n",missingHeight);

	return 0;
}	
