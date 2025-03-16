#include <gtest.h>
#include "HeavyWeapon.h"

TEST(THeavyWeaponTest, DefaultConstructor)
{
THeavyWeapon hw;
EXPECT_EQ(hw.GetWeight(), 2);
}

TEST(THeavyWeaponTest, ParameterizedConstructorValid)
{
THeavyWeapon hw(5);
EXPECT_EQ(hw.GetWeight(), 5);
}

TEST(THeavyWeaponTest, ParameterizedConstructorInvalid)
{
EXPECT_THROW(THeavyWeapon(-1), int);
}

TEST(THeavyWeaponTest, CopyConstructor)
{
THeavyWeapon original(10);
THeavyWeapon copy(original);
EXPECT_EQ(copy.GetWeight(), original.GetWeight());
}

TEST(THeavyWeaponTest, SetGetWeightValid)
{
THeavyWeapon hw;
hw.SetWeight(15);
EXPECT_EQ(hw.GetWeight(), 15);
}

TEST(THeavyWeaponTest, SetWeightInvalid)
{
THeavyWeapon hw;
EXPECT_THROW(hw.SetWeight(-5), const char*);
}

TEST(THeavyWeaponTest, EdgeCaseZeroWeight)
{
THeavyWeapon hw(0);
EXPECT_EQ(hw.GetWeight(), 0);

THeavyWeapon hw2;
hw2.SetWeight(0);
EXPECT_EQ(hw2.GetWeight(), 0);
}