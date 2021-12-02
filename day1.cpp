#include <iostream>
#include <fstream>

int main()
{

    char file[] = "nums.txt";

    std::ifstream myfile(file);
    int num;
    int firstnum = 0;
    int secnum = 0;
    int thirdnum = 0;

    int sum1;
    int count = 0;
    int totalNums = 0;

    if (myfile.is_open())
    {
        sum1 = 0;
        myfile >> firstnum >>secnum >> thirdnum;
        while (myfile >> num)
        {   
            int sum2 = thirdnum + secnum + firstnum;
            //std::cout << "reading: " << sum1 << "and" << sum2 << std::endl;
            std::cout << firstnum << " " << secnum << " " << thirdnum << std::endl;
            if(sum1 < sum2){
                std::cout << sum1 << ">" << sum2 << std::endl;
                count++;
            }
            sum1 = sum2;
            firstnum = secnum;
            secnum = thirdnum;
            thirdnum = num;
        }
        myfile.close();
    }
    else
    std::cout << "Unable to open file";
    std::cout << count << std::endl;
    std::cout << totalNums;
}