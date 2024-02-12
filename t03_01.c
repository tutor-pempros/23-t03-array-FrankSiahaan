// 12S23016 - Frank Niroy Siahaan

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int n,temp,temp2;
  scanf("%d", &n);
  int p[n];
  temp = 0;
  temp2 = 999;


for (int f = 0; f < n; f++)
{
  scanf("%d", &p[f]);
}

for (int i = 0; i < n; i++)
  {
    if (p[i] > temp)
    {
      temp = p[i];
    }
  }

for (int s = 0; s < n; s++)
{
  if (p[s] < temp2 )
  {
    temp2 = p[s];
  }
  
}

  printf("%d\n", temp2);
  printf("%d", temp);
  



  return 0;
}
