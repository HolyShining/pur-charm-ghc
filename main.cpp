#include <iostream>
#include <php>
#include <fstream>

using namespace std;

int main() {
    struct ride{
        int xStart, yStart, xFinish, yFinish, earStart, latFinish;
    };

    int rows, colums, vehicles, rides, bonus, steps, currentSteps;
    ride a[10];

    cin>>rows>>colums>>vehicles>>rides>>bonus>>steps;
    for (int i = 0; i < rides; ++i) {
        cin>>a[i].xStart>>a[i].yStart>>a[i].xFinish>>a[i].yFinish>>a[i].earStart>>a[i].latFinish;
    }

    cout<<"1 0"<<endl<<"2 2 1";

    ifstream



    return 0;
}