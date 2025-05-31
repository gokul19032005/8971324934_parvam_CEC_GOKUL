#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream Myfile("C:\\parvam\\8971324934_parvam_CEC_GOKUL\\cpp_training\\day_1\\sample.txt");
    Myfile << "Hello, World!" << endl;
    Myfile<<"i am Gokul.S"<<endl;
    Myfile.close();
    return 0;
}