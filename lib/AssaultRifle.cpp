#include "AssaultRifle.h"
#include <iostream>
using namespace std;

TAssaultRifle::TAssaultRifle() : TLightWeapon::TLightWeapon()
{
  scopeType = "1x";
}

TAssaultRifle::TAssaultRifle(string scopeType_)
{
  scopeType = scopeType_;
}

TAssaultRifle::TAssaultRifle(TAssaultRifle& obj)
{
  scopeType = obj.GetScopeType();
}

TAssaultRifle::~TAssaultRifle()
{}

string TAssaultRifle::GetScopeType()
{
  return scopeType;
}

void TAssaultRifle::SetScopeType(string scopeType_)
{
  scopeType = scopeType_;
}


ostream& operator <<(ostream& output, TAssaultRifle& var)
{
  output
          << "Name: " << var.GetName() << " | "
          << "Ammo type: " << var.GetAmmoType() << " | "
          << "MagSize: " << var.GetMagSize() << " | "
          << "Production year: " << var.GetYear() << " | "
          << "Ammo count: " << var.ammoCount << " | "
          << "Recoil: " << var.recoil << " | "
          << "Scope type: " << var.scopeType << "\n";
  return output;
}

istream& operator >>(istream& input, TAssaultRifle& var)
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
  cout << "Recoil: " << "\n";
  input >> var.recoil;
  if (var.recoil < 0)
    throw(1);
  cout << "Scope Type: " << "\n";
  input >> var.scopeType;
  return input;
}