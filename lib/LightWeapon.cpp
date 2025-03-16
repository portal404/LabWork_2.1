#include "LightWeapon.h"
#include <iostream>
using namespace std;

TLightWeapon::TLightWeapon() : TWeapon::TWeapon()
{
  recoil = 2;
}

TLightWeapon::TLightWeapon(int recoil_)
{
  if (recoil_ < 0)
    throw(1);
  else recoil = recoil_;
}

TLightWeapon::TLightWeapon(TLightWeapon& obj)
{
  recoil = obj.GetRecoil();
}

TLightWeapon::~TLightWeapon()
{}

int TLightWeapon::GetRecoil()
{
  return recoil;
}

void TLightWeapon::SetRecoil(int recoil_)
{
  if (recoil_ < 0)
    throw("Recoil cannot be negative");
  recoil = recoil_;
}


ostream& operator <<(ostream& output, TLightWeapon& var)
{
  output
          << "Name: " << var.GetName() << " | "
          << "Ammo type: " << var.GetAmmoType() << " | "
          << "MagSize: " << var.GetMagSize() << " | "
          << "Production year: " << var.GetYear() << " | "
          << "Ammo count: " << var.ammoCount << " | "
          << "Recoil: " << var.recoil << "\n";
  return output;
}

istream& operator >>(istream& input, TLightWeapon& var)
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
  return input;
}


