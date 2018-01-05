#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream fin("data.txt");
    ofstream fout("data.txt",fstream::app);
    int x,y;
    fin >> x >> y;
    fin.close();
    fout << x+y;
    fout.close();
    return 0;
}
