
#include <iostream>
#include <fstream>
#include <string>

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
        }

        // Member Functions() 
        void writeToFile(string text)
        {
            ofstream myFileStream;
            myFileStream.open(filePath, ios_base::app);

            if (myFileStream.is_open())
            {
                myFileStream << text;
                myFileStream.close();
            }
            else {
                cout << filePath << " is not opened." << endl;
            }
        }
};

int main()
{
    MyFileProcessor testFileReader = MyFileProcessor("test.dat");
    for (int i = 0; i < 3; i++) {
        string text = to_string(i) + "\n";
        testFileReader.writeToFile(text);
    }
}

