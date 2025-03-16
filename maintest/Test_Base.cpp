#include <gtest.h>
#include "WeaponBase.h"

TEST(TWeaponTest, DefaultConstructor)
{
TWeapon w;
EXPECT_EQ(w.GetName(), "Glock 17");
EXPECT_EQ(w.GetAmmoType(), "9mm");
EXPECT_EQ(w.GetMagSize(), 17);
EXPECT_EQ(w.GetYear(), 1989);
EXPECT_EQ(w.GetAmmoCount(), 17);
}

TEST(TWeaponTest, ParameterizedConstructorValid)
{
TWeapon w("AK-47", "7.62mm", 30, 1947);
EXPECT_EQ(w.GetName(), "AK-47");
EXPECT_EQ(w.GetAmmoType(), "7.62mm");
EXPECT_EQ(w.GetMagSize(), 30);
EXPECT_EQ(w.GetYear(), 1947);
EXPECT_EQ(w.GetAmmoCount(), 30);
}

TEST(TWeaponTest, ParameterizedConstructorInvalid)
{
EXPECT_THROW(TWeapon("Test", "ammo", 0, 2020), int);
}

TEST(TWeaponTest, CopyConstructor)
{
TWeapon original("M4", "5.56mm", 30, 1994);
TWeapon copy(original);
EXPECT_EQ(copy.GetName(), original.GetName());
EXPECT_EQ(copy.GetAmmoType(), original.GetAmmoType());
EXPECT_EQ(copy.GetMagSize(), original.GetMagSize());
EXPECT_EQ(copy.GetYear(), original.GetYear());
EXPECT_EQ(copy.GetAmmoCount(), original.GetMagSize());
}

TEST(TWeaponTest, SetMethods)
{
TWeapon w;
w.SetName("Desert Eagle");
w.SetAmmoType(".50 AE");
w.SetMagSize(7);
w.SetYear(2023);
w.SetAmmoCount(5);

EXPECT_EQ(w.GetName(), "Desert Eagle");
EXPECT_EQ(w.GetAmmoType(), ".50 AE");
EXPECT_EQ(w.GetMagSize(), 7);
EXPECT_EQ(w.GetYear(), 2023);
EXPECT_EQ(w.GetAmmoCount(), 5);
}

TEST(TWeaponTest, SetMagSizeInvalid)
{
TWeapon w;
EXPECT_THROW(w.SetMagSize(-5), const char*);
}

TEST(TWeaponTest, SetYearInvalid)
{
TWeapon w;
EXPECT_THROW(w.SetYear(-2023), const char*);
}

TEST(TWeaponTest, SetAmmoCountInvalid)
{
TWeapon w;
EXPECT_THROW(w.SetAmmoCount(-10), const char*);
}

TEST(TWeaponTest, EdgeCases)
{
TWeapon w;
w.SetMagSize(0);
w.SetYear(0);
w.SetAmmoCount(0);

EXPECT_EQ(w.GetMagSize(), 0);
EXPECT_EQ(w.GetYear(), 0);
EXPECT_EQ(w.GetAmmoCount(), 0);
}