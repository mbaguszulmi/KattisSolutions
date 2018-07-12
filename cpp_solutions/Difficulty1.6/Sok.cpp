// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/sok
// http://www.mbaguszulmi.com

#include <iostream>
#include <iomanip>

using namespace std;

size_t runOutJuice(int ratio[], int volume[]) {
    size_t pos = 0;
    for (size_t i = 1; i < 3; i++)
    {
        if ((float)ratio[pos]/(float)volume[pos] < (float)ratio[i]/(float)volume[i]) {
            pos = i;
        }
    }
    return pos;
}

int main(int argc, char const *argv[])
{
    int volume[3], ratio[3];
    float leftover[3];
    cin >> volume[0] >> volume[1] >> volume[2] >> ratio[0] >> ratio[1] >> ratio[2];
    // size_t maxRatioPos = maxRatio(ratio, volume, minVolume(volume));
    size_t zeroJuice = runOutJuice(ratio, volume);
    for (size_t i = 0; i < 3; i++)
    {
        if (i == zeroJuice) {
            leftover[i] = 0.0;
        }
        else {
            leftover[i] = volume[i] - ((float)(volume[zeroJuice]*ratio[i])/(float)ratio[zeroJuice]);
        }
    }
    cout << fixed;
    cout.precision(6);
    for (size_t i = 0; i < 3; i++)
    {
        cout << leftover[i] << ' ';
    }
    cout << endl;
    return 0;
}
