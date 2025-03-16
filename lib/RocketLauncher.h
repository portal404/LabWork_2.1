#pragma once
#include <iostream>
#include "HeavyWeapon.h"

using namespace std;

class TRockerLauncher : public THeavyWeapon
{
protected:
    int countToOperate;
public:
    TRockerLauncher();
    TRockerLauncher(int weight);
    TRockerLauncher(TRockerLauncher& obj);
    ~TRockerLauncher();

    int GetCount();
    void SetCount(int countToOperate_);

    friend ostream& operator <<(ostream& output, TRockerLauncher& var);
    friend istream& operator >>(istream& input, TRockerLauncher& var);
};