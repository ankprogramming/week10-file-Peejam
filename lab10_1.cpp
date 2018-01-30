#include <iostream>
#include <fstream>
 using namespace std;
int main() {
        ofstream myfile ("exaple.txt");
        if (myfile.is_open())
        {
            myfile << "This ids a line.\n";
            myfile << "This ids another line.\n";
            myfile.close();
        }
        else cout <<"Unble to open file";
        return 0;
}
