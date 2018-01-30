#include <iostream>
#include <fstream>
 using namespace std;
int main() {
    string line;
    ifstream myfile ("example.txt");
    if(myfile.is_open())
    {

        while (getline (myfile.line))
        {
            cout <<line<<'\n';
        }
        myfile.close();
        }
    else cout << "unble to open file";

        return 0;
}
