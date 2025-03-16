#pragma once
#include <iostream>
using namespace std;

class TWeapon
{
protected:
    string name;
    string ammoType;
    int magSize;
    int productionYear;
    int ammoCount;
public:
    TWeapon();
    TWeapon(string name_, string ammoType_, int magSize_, int productionYear_);
    TWeapon(TWeapon& obj);
    ~TWeapon();

    string GetName();
    string GetAmmoType();
    int GetMagSize();
    int GetYear();
    int GetAmmoCount();
    virtual string GetDescription() const
      {
        return "Basic Weapon";
      };

    void SetName(string name_);
    void SetAmmoType(string ammoType_);
    void SetMagSize(int magSize_);
    void SetYear(int productionYear_);
    void SetAmmoCount(int ammoCount_);

    friend ostream& operator <<(ostream& output, TWeapon& var);
    friend istream& operator >>(istream& input, TWeapon& var);
};
