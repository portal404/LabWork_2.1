#include <iostream>
#include "HeavyWeapon.h"
#include "WeaponBase.h"
#include "LightWeapon.h"
#include "AssaultRifle.h"
#include "Pistol.h"
#include "RocketLauncher.h"
#include "MachineGun.h"
using namespace std;


int main()
{
  TPistol gun1;
  TMachineGun gun2;
  cin >> gun1;
  cout << gun1.GetDescription() << "\n";
  cout << gun2.GetDescription() << "\n";
  cout << gun1;
  cout << gun2;
  return 0;
}
