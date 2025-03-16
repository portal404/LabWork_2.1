#include "Pistol.h"
#include <iostream>
using namespace std;

TPistol::TPistol() : TLightWeapon::TLightWeapon()
{
  silencer = "On";
}

TPistol::TPistol(string silencer_)
{
  silencer = silencer_;
}

TPistol::TPistol(TPistol& obj)
{
  silencer = obj.GetSilencer();
}

TPistol::~TPistol()
{}

string TPistol::GetSilencer()
{
  return silencer;
}

void TPistol::SetSilencer(string silencer_)
{
  silencer = silencer_;
}


ostream& operator <<(ostream& output, TPistol& var)
{
  output
          << "Name: " << var.GetName() << " | "
          << "Ammo type: " << var.GetAmmoType() << " | "
          << "MagSize: " << var.GetMagSize() << " | "
          << "Production year: " << var.GetYear() << " | "
          << "Ammo count: " << var.ammoCount << " | "
          << "Recoil: " << var.recoil << " | "
          << "Silencer: " << var.silencer << "\n";
  return output;
}

istream& operator >>(istream& input, TPistol& var)
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
  cout << "Silencer: " << "\n";
  input >> var.silencer;
  return input;
}