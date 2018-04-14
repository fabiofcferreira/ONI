#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N = 0, Zboxprice = 0, score = 0, booknum = 0;

  scanf("%d %d", &N, &Zboxprice);
  vector<int> pages(N);

  for(int i = 0; i < N; i++)
    scanf(" %d", &pages[i]);

  sort(pages.begin(), pages.end());

  for(size_t i = 0; i < pages.size(); i++) {
    // weee points
    score += pages[i];
    booknum++;

    if(score >= Zboxprice)
      break;
  }

  printf("%d\n", booknum);
  return 0;
}
