#pragma once
#include <iostream>
#include "HeavyWeapon.h"

using namespace std;

class TMachineGun : public THeavyWeapon
{
protected:
    string magType;
public:
    TMachineGun();
    TMachineGun(string magType);
    TMachineGun(TMachineGun& obj);
    ~TMachineGun();

    string GetMagType();
    void SetMagType(string magType_);

    friend ostream& operator <<(ostream& output, TMachineGun& var);
    friend istream& operator >>(istream& input, TMachineGun& var);
};