// 12S23016 - Frank Niroy Siahaan

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int n,temp,temp2,g,total;
  float totalakhir;
  scanf("%d", &n);
  int p[n];
  p[0] = 0;
  p[1] = 0;
  total = 0;
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

for (int c = 0; c < n; c++)
{
  total = total + p[c];
}

totalakhir = total/n;


printf("%d\n", temp2);
printf("%d\n", temp);
printf("%.2f", totalakhir);
printf("%d", temp-temp2);
  



  return 0;
}
