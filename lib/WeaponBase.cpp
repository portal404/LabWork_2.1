#include "WeaponBase.h"
#include <iostream>
using namespace std;

TWeapon::TWeapon()
{
  name = "Glock 17";
  ammoType = "9mm";
  magSize = 17;
  productionYear = 1989;
  ammoCount = magSize;
}

TWeapon::TWeapon(string name_, string ammoType_, int magSize_, int productionYear_)
{
  if (magSize_ < 1)
    throw(1);
  else magSize = magSize_;
  name = name_;
  ammoType = ammoType_;
  productionYear = productionYear_;
  ammoCount = magSize;
}

TWeapon::TWeapon(TWeapon& obj)
{
  name = obj.GetName();
  ammoType = obj.GetAmmoType();
  magSize = obj.GetMagSize();
  productionYear = obj.GetYear();
  ammoCount = magSize;
}

TWeapon::~TWeapon()
{}


string TWeapon::GetName()
{
  return name;
}

string TWeapon::GetAmmoType()
{
  return ammoType;
}

int TWeapon::GetMagSize()
{
  return magSize;
}

int TWeapon::GetYear()
{
  return productionYear;
}

int TWeapon::GetAmmoCount()
{
  return ammoCount;
}

void TWeapon::SetName(string name_)
{
  name = name_;
}

void TWeapon::SetAmmoType(string ammoType_)
{
  ammoType = ammoType_;
}

void TWeapon::SetMagSize(int magSize_)
{
  if (magSize_ < 0)
    throw("magSize cannot be negative");
  magSize = magSize_;
}

void TWeapon::SetYear(int productionYear_)
{
  if (productionYear_ < 0)
    throw("productionYear cannot be negative");
  productionYear = productionYear_;
}

void TWeapon::SetAmmoCount(int ammoCount_)
{
  if (ammoCount_ < 0)
    throw("ammoCount cannot be negative");
  ammoCount = ammoCount_;
}

ostream& operator <<(ostream& output, TWeapon& var)
{
  output
          << "Name: " << var.name << " | "
          << "Ammo type: " << var.ammoType << " | "
          << "MagSize: " << var.magSize << " | "
          << "Production year: " << var.productionYear << " | "
          << "Ammo count: " << var.ammoCount << "\n";
  return output;
}

istream& operator >>(istream& input, TWeapon& var)
{
  cout << "Name: " << "\n";
  input >> var.name;
  cout << "Ammo type: " << "\n";
  input >> var.ammoType;
  cout << "MagSize: " << "\n";
  input >> var.magSize;
  if (var.magSize < 1)
    throw("magSize cannot be negative");
  cout << "Production year: " << "\n";
  input >> var.productionYear;
  if (var.productionYear < 1364)
    throw("productionYear cannot be negative");
  cout << "Ammo count: " << "\n";
  input >> var.ammoCount;
  if (var.ammoCount < 0)
    throw("Ammo count cannot be negative");
  return input;
}


