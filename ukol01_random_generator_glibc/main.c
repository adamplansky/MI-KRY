#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define STATELEN 31
int main(void)
{
  int seed_number = 5;
  int randNumber = 0;
  int i = 0;
  char randomStateBuffer[STATELEN];
  struct random_data randData;
  memset(randomStateBuffer, 0, sizeof(randomStateBuffer));
  memset(&randData, 0, sizeof(struct random_data));

  initstate_r(seed_number, randomStateBuffer,sizeof(randomStateBuffer), &randData);
  setstate_r(randomStateBuffer, &randData);
  srandom_r(seed_number, &randData);
  
  for(i = 0; i < 20; i++ )  
  {
  	random_r(&randData, &randNumber);
  	printf("%d\n", randNumber);
  }

  return 0;
}
