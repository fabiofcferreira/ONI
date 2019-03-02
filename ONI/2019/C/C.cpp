#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, d, k, totalBlocks, counter;
  n = d = k = totalBlocks = counter = 0;
  cin >> n >> d >> k;

  // array to blocks positions
  int* xs = new int[n];
  // array to save each sequence positions
  int seqsArray[n][2];
  size_t seqs = 0;

  // read every block position
  for(int i = 0; i < n; i++) cin >> xs[i];

  for(int i = 0; i < n;) {
    counter = 0;
    
    // loop through every block
    if(xs[i+k] - xs[i] <= d && i+k < n) { // sequence (i to I+K) is good
      // start = i
      // end = i + k
      
      // add number of blocks
      counter += (k + 1);

      int firstBlock = i;
      int lastBlock = i + k;
      int nextBlock = i + k + 1;
      while(true) {
        // there is one more block after the last needed block
        if(xs[nextBlock] - xs[lastBlock] <= d && nextBlock < n) {
          lastBlock = nextBlock;
          counter++;
        } else {
          i = lastBlock;

          if(nextBlock > n) lastBlock = n;
          break;
        }

        nextBlock++;
      }
      
      // if the sequence is over after the array
      // then this sequence is invalid
      if(lastBlock > n) {
        cout << lastBlock << endl;
        counter = 0;
      } else {
        // add all the blocks from this sequence to the
        // total count of blocks in group
        totalBlocks += counter;
      
        // save sequence start and end
        seqsArray[seqs][0] = firstBlock;
        seqsArray[seqs][1] = lastBlock;
        seqs++;
      }
    } else i++;
  }

  if(totalBlocks) {
    cout << totalBlocks << endl;

    for(size_t i = 0; i < seqs; i++) {
      for(int a = seqsArray[i][0]; a <= seqsArray[i][1]; a++) {
        cout << a + 1;
        if(a < seqsArray[i][1]) cout << " ";
      }

      if(i < seqs-1) cout << " ";
    }
  } else cout << "0" << endl;

  cout << endl;
}