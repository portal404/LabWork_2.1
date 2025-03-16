#include "HeavyWeapon.h"
#include <iostream>
using namespace std;

THeavyWeapon::THeavyWeapon() : TWeapon::TWeapon()
{
  weight = 2;
}

THeavyWeapon::THeavyWeapon(int weight_)
{
  if (weight_ < 0)
    throw(1);
  else weight = weight_;
}

THeavyWeapon::THeavyWeapon(THeavyWeapon& obj)
{
  weight = obj.GetWeight();
}

THeavyWeapon::~THeavyWeapon()
{}

int THeavyWeapon::GetWeight()
{
  return weight;
}

void THeavyWeapon::SetWeight(int weight_)
{
  if (weight_ < 0)
    throw("Weight cannot be negative");
  weight = weight_;
}


ostream& operator <<(ostream& output, THeavyWeapon& var)
{
  output
          << "Name: " << var.GetName() << " | "
          << "Ammo type: " << var.GetAmmoType() << " | "
          << "MagSize: " << var.GetMagSize() << " | "
          << "Production year: " << var.GetYear() << " | "
          << "Ammo count: " << var.ammoCount << " | "
          << "Weight: " << var.weight << "\n";
  return output;
}

istream& operator >>(istream& input, THeavyWeapon& var)
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
  return input;
}


