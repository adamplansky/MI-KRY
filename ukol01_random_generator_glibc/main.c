#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define STATELEN 200
int main(void)
{
  int seed_number = 5;
  char randomStateBuffer[STATELEN];
  struct random_data randData;
  memset(randomStateBuffer, 0, sizeof(randomStateBuffer));
  memset(&randData, 0, sizeof(struct random_data));
  initstate_r(seed_number, randomStateBuffer,sizeof(randomStateBuffer), &randData);
  printf("%d\n", seed_number);
  
  return 0;
}
