#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> garbage = {"G", "P", "GP", "GG"};
    vector<int> travel = {2, 4, 3};

    // P truck
    int pickP = 0;
    int travelP = 0;
    int lastHouseP = 0;
    // M truck
    int pickM = 0;
    int travelM = 0;
    int lastHouseM = 0;
    // G truck
    int pickG = 0;
    int travelG = 0;
    int lastHouseG = 0;

    // travel to houses
    for (int i = 0; i < garbage.size(); i++)
    {
        // ith house
        string currHouse = garbage[i];
        // now travell into the current house to see if garbage is present or not
        for (int j = 0; j < currHouse.length(); j++)
        {
            char garbageType = currHouse[j];
            if (garbageType == 'P')
            {
                pickP++;
                lastHouseP = i;
            }
            if (garbageType == 'M')
            {
                pickM++;
                lastHouseM = i;
            }
            if (garbageType == 'G')
            {
                pickG++;
                lastHouseG = i;
            }
        }
    }
    // calculate travel time
    for (int i = 0; i < lastHouseP; i++)
    {
        travelP = travelP + travel[i];
    }
    for (int i = 0; i < lastHouseM; i++)
    {
        travelM = travelM + travel[i];
    }
    for (int i = 0; i < lastHouseG; i++)
    {
        travelM = travelM + travel[i];
    }
    int totalPicking = pickP + pickM + pickG;
    int totalTravel = travelP + travelM + travelG;

    int totalTime = totalPicking + totalTravel;

    // return totalTime;
    cout << "Total time for collecting the garbage is: " << totalTime;

    return 0;
}