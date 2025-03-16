#pragma once
#include <iostream>
#include "WeaponBase.h"

using namespace std;

class THeavyWeapon : public TWeapon
{
protected:
    int weight;
public:
    THeavyWeapon();
    THeavyWeapon(int weight);
    THeavyWeapon(THeavyWeapon& obj);
    ~THeavyWeapon();

    int GetWeight();
    virtual string GetDescription() const override
    {
      return "Heavy Weapon with weight: " + to_string(weight);
    };
    void SetWeight(int weight_);


    friend ostream& operator <<(ostream& output, THeavyWeapon& var);
    friend istream& operator >>(istream& input, THeavyWeapon& var);
};