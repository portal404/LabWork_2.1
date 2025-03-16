#pragma once
#include <iostream>
#include "LightWeapon.h"

using namespace std;

class TAssaultRifle : public TLightWeapon
{
protected:
    string scopeType;
public:
    TAssaultRifle();
    TAssaultRifle(string scopeType);
    TAssaultRifle(TAssaultRifle& obj);
    ~TAssaultRifle();

    string GetScopeType();
    void SetScopeType(string scopeType_);

    friend ostream& operator <<(ostream& output, TAssaultRifle& var);
    friend istream& operator >>(istream& input, TAssaultRifle& var);
};