// Program by Muhammad Bagus Zulmi
// Url to problem : https://open.kattis.com/problems/karte
// http://www.mbaguszulmi.com

#include <iostream>

using namespace std;

bool twin(string cards[], size_t numOfCard) {
    for (size_t i = 0; i < numOfCard; i++)
    {
        int num = 0;
        for (size_t j = 0; j < numOfCard; j++)
        {
            if (cards[i] == cards[j]) {
                num++;
            }
        }
        if (num == 2) return true;
    }
    return false;
}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    size_t numOfCard = s.length()/3;
    string cards[numOfCard], suits = "PKHT";
    size_t pkht[4] = {13, 13, 13, 13};
    for (size_t i = 0; i < numOfCard; i++)
    {
        for (size_t j = i*3; j < (i*3)+3; j++)
        {
            cards[i]+=s[j];
        }
    }
    if (twin(cards, numOfCard)) cout << "GRESKA" << endl;
    else {
        for (size_t i = 0; i < numOfCard; i++)
        {
            size_t suit = suits.find(cards[i][0]);
            pkht[suit]-=1;
        }
        cout << pkht[0] << ' ' << pkht[1] << ' ' << pkht[2] << ' ' << pkht[3] << endl;
    }
    return 0;
}
