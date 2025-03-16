#include <gtest.h>
#include "LightWeapon.h"

TEST(TLightWeaponTest, DefaultConstructor)
{
TLightWeapon lw;
EXPECT_EQ(lw.GetRecoil(), 2);
}

TEST(TLightWeaponTest, ParameterizedConstructorValid)
{
TLightWeapon lw(5);
EXPECT_EQ(lw.GetRecoil(), 5);
}

TEST(TLightWeaponTest, ParameterizedConstructorInvalid)
{
EXPECT_THROW(TLightWeapon(-1), int);
}

TEST(TLightWeaponTest, CopyConstructor)
{
TLightWeapon original(7);
TLightWeapon copy(original);
EXPECT_EQ(copy.GetRecoil(), original.GetRecoil());
}

TEST(TLightWeaponTest, SetGetRecoilValid)
{
TLightWeapon lw;
lw.SetRecoil(10);
EXPECT_EQ(lw.GetRecoil(), 10);
}

TEST(TLightWeaponTest, SetRecoilInvalid)
{
TLightWeapon lw;
EXPECT_THROW(lw.SetRecoil(-3), const char*);
}

TEST(TLightWeaponTest, EdgeCaseZeroRecoil)
{
TLightWeapon lw(0);
EXPECT_EQ(lw.GetRecoil(), 0);

TLightWeapon lw2;
lw2.SetRecoil(0);
EXPECT_EQ(lw2.GetRecoil(), 0);
}