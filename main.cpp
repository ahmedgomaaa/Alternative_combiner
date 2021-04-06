#include <iostream>

#include <fstream>

#include <string>

using namespace std;
int uni = 0;
string line;
string aa, forth;
int cnt = 0;
int ctr = 0;


int DiffInc(int ctr) {
  uni++;
  return ctr + 2;
}

string third(string aa) {

  string holder;

  ifstream myfile("2.txt");
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      if (cnt == ctr) {
        aa = aa + "\n" + line;

        ctr++;
      } else {
        cnt++;
        continue;
      }
      ctr = ctr + uni;
      break;
      break;
    }
    cout << "After======" + aa << endl;
    return aa;
  }
}

int main() {
  string line;
  string newaa;
  string aa;
  ifstream myfile("1.txt");
  if (myfile.is_open()) {
    while (getline(myfile, line)) {
      aa = newaa + "\n" + line;
      cout << "before third  = " + aa << endl;
      newaa = third(aa);
      DiffInc(ctr);
      ofstream writetolast("3.txt");
      writetolast << aa;

    }

    myfile.close();
  }

  return 0;
}
