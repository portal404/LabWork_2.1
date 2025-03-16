#include "RocketLauncher.h"
#include <iostream>
using namespace std;

TRockerLauncher::TRockerLauncher() : THeavyWeapon::THeavyWeapon()
{
  countToOperate = 1;
}

TRockerLauncher::TRockerLauncher(int countToOperate_)
{
  if (countToOperate_ < 0)
    throw(1);
  else countToOperate = countToOperate_;
}

TRockerLauncher::TRockerLauncher(TRockerLauncher& obj)
{
  countToOperate = obj.GetCount();
}

TRockerLauncher::~TRockerLauncher()
{}

int TRockerLauncher::GetCount()
{
  return countToOperate;
}

void TRockerLauncher::SetCount(int countToOperate_)
{
  if (countToOperate_ < 0)
    throw("countToOperate cannot be negative");
  countToOperate = countToOperate_;
}


ostream& operator <<(ostream& output, TRockerLauncher& var)
{
  output
          << "Name: " << var.GetName() << " | "
          << "Ammo type: " << var.GetAmmoType() << " | "
          << "MagSize: " << var.GetMagSize() << " | "
          << "Production year: " << var.GetYear() << " | "
          << "Ammo count: " << var.ammoCount << " | "
          << "Weight: " << var.weight << " | "
          << "People to operate: " << var.countToOperate << "\n";
  return output;
}

istream& operator >>(istream& input, TRockerLauncher& var)
{
  cout << "Name: " << "\n";
  input >> var.name;
  cout << "Ammo type: " << "\n";
  input >> var.ammoType;
  cout << "MagSize: " << "\n";
  input >> var.magSize;
  if (var.magSize < 1)
    throw(1);
  cout << "Production year: " << "\n";
  input >> var.productionYear;
  if (var.productionYear < 1364)
    throw(1);
  cout << "Ammo count: " << "\n";
  input >> var.ammoCount;
  if (var.ammoCount < 0)
    throw(1);
  cout << "Weight: " << "\n";
  input >> var.weight;
  if (var.weight < 0)
    throw(1);
  cout << "People to operate: " << "\n";
  input >> var.countToOperate;
  if (var.countToOperate < 0)
    throw(1);
  return input;
}