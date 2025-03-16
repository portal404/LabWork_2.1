#pragma once
#include <iostream>
#include "WeaponBase.h"

using namespace std;

class TLightWeapon : public TWeapon
{
protected:
    int recoil;
public:
    TLightWeapon();
    TLightWeapon(int recoil);
    TLightWeapon(TLightWeapon& obj);
    ~TLightWeapon();
    virtual string GetDescription() const override
    {
      return "Light Weapon with recoil: " + to_string(recoil);
    }

    int GetRecoil();
    void SetRecoil(int recoil_);

    friend ostream& operator <<(ostream& output, TLightWeapon& var);
    friend istream& operator >>(istream& input, TLightWeapon& var);
};