#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    char ClassId;
    vector <string> d;
    int t;

    cin >> t;

    for(int i = 0; i < t; i++)
    {
        cin >> ClassId;

        if(ClassId == 'B' || ClassId ==  'b')
        {
            d.push_back("BattleShip");
        }
        else if(ClassId == 'C' || ClassId == 'c')
        {
            d.push_back("Cruiser");
        }
        else if(ClassId == 'D' || ClassId == 'd')
        {
            d.push_back("Destroyer");
        }
        else if(ClassId == 'F' || ClassId ==  'f')
        {
            d.push_back("Frigate");
        }
        else
        {
            d.push_back("None");
        }
    }
    for(int i = 0; i < d.size(); i++)
    {
        cout << d[i] << "\n";
    }

    return 0;
}