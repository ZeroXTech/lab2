#include <stdio.h>

int main(void)
{
  int inputNumber;
  int number[100];
  int arrayCount = 0;
  int averageCount = 0;
  int containerOne;
  int containerTwo;
  float average;
  float aboveAverage;

  puts("Please enter integers to find the average. Max 100 spaces available.");
  puts("To stop, enter a negative value instead.");

  do
    {
      scanf("%d", &inputNumber);
      if(inputNumber > 0)
	{
	  number[arrayCount] = inputNumber;
	  arrayCount++;
	}
    }
  while(inputNumber > 0);

  for(int i=0; i<arrayCount; i++)
    {
      containerOne += number[i];
    }

  average = containerOne/arrayCount;

  for(int x=0; x<arrayCount; x++)
    {
      if(number[x] > average)
	{
	  containerTwo += number[x];
	  averageCount++;
	}
    }

  aboveAverage = containerTwo/averageCount;

  printf("The above-average-mean of the input is: ");
  printf("%f", aboveAverage);
  printf("\n");

  return 0;
}
