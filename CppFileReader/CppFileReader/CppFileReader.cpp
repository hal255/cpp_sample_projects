
#include <iostream>
#include <fstream>

using namespace std;

class MyFileProcessor
{
    // Access specifier 
    public:

        // Data Members 
        string filePath;

        MyFileProcessor(string filePath)
        {
            this->filePath = filePath;
            cout << "filepath: " << this->filePath << endl;
            //printf("filepath: %s \n", this->filePath); -- does not work as intended
        }

        // Member Functions() 
        void openFile()
        {
            ofstream myFile;
            try {
                myFile.open(filePath);
                cout << "Success!! Opened file: " << filePath << endl;
            }
            catch (ifstream::failure & e) {
                cout << "Failed to open file: " << filePath << endl;
            }
        }
};

int main()
{
    MyFileProcessor testFileReader = MyFileProcessor("/resources/test.dat");
    testFileReader.openFile();
}

