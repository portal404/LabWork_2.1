#pragma once
#include <iostream>
#include "LightWeapon.h"

using namespace std;

class TPistol : public TLightWeapon
{
protected:
    string silencer;
public:
    TPistol();
    TPistol(string silencer);
    TPistol(TPistol& obj);
    ~TPistol();

    string GetSilencer();
    void SetSilencer(string silencer_);

    friend ostream& operator <<(ostream& output, TPistol& var);
    friend istream& operator >>(istream& input, TPistol& var);
};