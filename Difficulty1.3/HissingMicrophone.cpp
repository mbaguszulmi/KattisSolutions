#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    string sound;
    bool hiss = false;
    cin >> sound;
    
    for(size_t i = 0; i < sound.size(); i++)
    {
        
        if (sound[i] == 's' && i+1 != sound.size() && sound[i+1] == 's') {
            cout << "hiss" << endl;
            hiss = true;
            break;
        }
        
    }
    
    if (!hiss) {
        cout << "no hiss" << endl;
    }
    
    return 0;
}
