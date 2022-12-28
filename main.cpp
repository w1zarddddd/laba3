#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n = 0;
    int i;
    string str, s;
    ifstream file;
    file.open("f1.txt");
    cout << "Vvedite stroku kotoryu nuzhno najti: ";
    cin >> s;
    while (!file.eof()) {
        n++;
        getline(file,str);
        i = str.find(s);
        if (i != -1)
        {
            cout << n << endl;
        }


    }
    file.close();
    return 0;


}
