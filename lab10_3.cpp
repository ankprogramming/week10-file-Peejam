#include <iostream>
#include <fstream>
#include <string>
 using namespace std;
int main() {
      int cmd;
      string name;
      string line;
      ofstream writeFile ;
      ifstream readFile ;
      do {
        cout << "Menu" << endl;
        cout << "1. add student." <<endl;
        cout << "2. List student." <<endl;
        cout << "3. Quit." <<endl;
        cout << "4.Please enter menu :";
        cin >> cmd;
         if (cmd == 1) {
            cout << "Enter std name : ";
            cin >>name;
                writeFile.open ("std.txt", fstream::app);
             if(writeFile.is_open()) {
                writeFile << name << endl;
                writeFile.close();

             }
             else { cout  << "Unble to open file" ;

            }
         } else if (cmd==2){
             readFile.open ("std.txt");
             if (readFile.is_open()) {
                while (getline (readFile,line)) {
                        cout << line <<endl;
             }
             readFile.close();
             }

         }else {
             break;
         }

      }while (1);


        return 0;
}
