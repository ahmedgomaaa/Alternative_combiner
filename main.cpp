#include <fstream>
#include <string>
// using namespace std;

int main()
{
    std::ifstream file1, file2;
    std::ofstream output;
    file1.open("1.txt");
    file2.open("2.txt");
    output.open("output.txt");
    std::string line1, line2;
    while(file1&&file2) // you can use || depending on what you want to do
    {
        getline(file1, line1);
        getline(file2, line2);
        output << (file1?line1+"\n":"");
        output << (file2?line2+"\n":"");
    }
    file1.close();
    file2.close();
    output.close();
    return 0;
}
