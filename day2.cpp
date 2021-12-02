#include <string>
#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char file[] = "sub.txt";

    int num = 0;
    int depth = 0;
    int pos = 0;
    int aim = 0;
    std::ifstream f1(file);
    if (f1.is_open())
    {
        string word;

        while (f1 >> word >> num)
        {
           // cout << "reading " << word << num << endl;

            if (word == "forward")
            {
                
                pos += num;
                depth += (aim * num);
            } 

            else if (word == "down")
            {
                aim += num;
            }

            else if (word == "up")
            {
                aim -= num;
            }
        }
        f1.close();
        cout << "depth: " << depth << endl;
        cout << "pos: " << pos << endl;
        cout << pos * depth;
    }
    return 0;
}