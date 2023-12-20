#include <fstream>
using namespace std;
int main()
{
  ifstream f("adiacenta.in");
  int n, m;
  f >> n >> m;
  int** a = new int*[n];
  for (int i = 0; i < n; i++)
  {
    a[i] = new int[n];
    for (int j = 0; j < n; j++)
      a[i][j] = 0;
  }
  while (m > 0)
  {
    int i, j;
    f >> i >> j;
    i--, j--; // retin indicii de la 0
    a[i][j] = a[j][i] = 1;
    m--;
  }
  f.close();
  ofstream g("adiacenta.out");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      g << a[i][j] << ' ';
    g << '\n';
  }
  g.close();
  return 0;
}

