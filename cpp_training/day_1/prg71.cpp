#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string text;
    ifstream Myfile("C:\\parvam\\8971324934_parvam_CEC_GOKUL\\cpp_training\\day_1\\sample.txt");
    getline(Myfile,text);
    cout<<text;
    Myfile.close();
    return 0;
}