#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>

int main() {
  int length = 0;

  scanf("%d", &length);
  char chain[length];

  scanf("%s", chain);
  
  for(size_t i = 0; i < (strlen(chain)/2); i++) {
    if(chain[i] == '?') chain[i] = 'A';
  }

  for(size_t i = (strlen(chain)/2); i < strlen(chain); i++) {
    if(chain[i] == '?') chain[i] = 'T';
  }

  int score = 0, buffer = 0;

  for(size_t i = 0; i < strlen(chain); i++) {
    if(chain[i] == 'A') buffer++;
    if(chain[i] == 'T') score+=buffer;
  }

  printf("%d\n", score);

  return 0;
}
