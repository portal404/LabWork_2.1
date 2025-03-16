#include "MachineGun.h"
#include <iostream>
using namespace std;

TMachineGun::TMachineGun() : THeavyWeapon::THeavyWeapon()
{
  magType = "Standard";
}

TMachineGun::TMachineGun(string magType_)
{
  magType = magType_;
}

TMachineGun::TMachineGun(TMachineGun& obj)
{
  magType = obj.GetMagType();
}

TMachineGun::~TMachineGun()
{}

string TMachineGun::GetMagType()
{
  return magType;
}

void TMachineGun::SetMagType(string magType_)
{
  magType = magType_;
}

ostream& operator <<(ostream& output, TMachineGun& var)
{
  output
          << "Name: " << var.GetName() << " | "
          << "Ammo type: " << var.GetAmmoType() << " | "
          << "MagSize: " << var.GetMagSize() << " | "
          << "Production year: " << var.GetYear() << " | "
          << "Ammo count: " << var.ammoCount << " | "
          << "Weight: " << var.weight << " | "
          << "Magazine type: " << var.magType << "\n";
  return output;
}

istream& operator >>(istream& input, TMachineGun& var)
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
  cout << "Magazine type: " << "\n";
  input >> var.magType;
  return input;
}