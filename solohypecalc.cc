#include <cstdlib>
#include <iostream>
using namespace std;

//using cmd line args bc faster
//^[div] [placement] [elims]

int get_divvalue(int div);
int get_placementvalue(int placement);
//no need for get_elimvalue since you simply multiply by 20

int main (int argc, char *argv[])
{
    if (argc != 4) //check to make sure i put the CLAs in correctly ~;|
    {
        cout << "Format: /a.exe [div] [placement] [elims] \n \ntry again buddy \n";
        exit(0);
    }

    //populate the CLAs into the 3 variables 
    int div = atoi(argv[1]); //start at 1 bc 0 is the [./a.exe]
    int placement = atoi(argv[2]);
    int elims = atoi(argv[3]);

    cout << "\n";
    cout << " division: " << div << "\n";
    cout << "placement: " << placement << "\n";
    cout << "    elims: " << elims << "\n\n";

    cout << "Total Hype Earned: " << (elims * 20) + get_divvalue(div) + get_placementvalue(placement) << "\n\n";

    return 0;
}

int get_divvalue(int div)
{
    switch (div)
    {
    case 1:
        return 0;
        break;
    case 2:
        return 0;
        break;
    case 3:
        return 0;
        break;
    case 4:
        return -10;
        break;
    case 5:
        return -20;
        break;
    case 6:
        return -30;
        break;
    case 7:
        return -40;
        break;
    case 8:
        return -60;
        break;
    case 9:
        return -60;
        break;
    case 10:
        return -70;
        break;
    
    default:
        break;
    }
    return 0;
}

int get_placementvalue(int placement)
{
    switch (placement)
    {
    case 51 ... 100:
        return 0;
        break;
    case 36 ... 50:
        return 10;
        break;
    case 31 ... 35:
        return 20;
        break;
    case 26 ... 30:
        return 30;
        break;
    case 21 ... 25:
        return 45;
        break;
    case 16 ... 20:
        return 55;
        break;
    case 11 ... 15:
        return 65;
        break;
    case 6 ... 10:
        return 80;
        break;
    case 4 ... 5:
        return 95;
        break;
    case 3:
        return 105;
        break;
    case 2:
        return 130;
        break;
    case 1:
        return 180;
        break;
    
    default:
        break;
    }
    return 0;
}