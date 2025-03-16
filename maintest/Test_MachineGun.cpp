#include <gtest.h>
#include "MachineGun.h"

TEST(TMachineGunTest, DefaultConstructor)
{
  TMachineGun mg;
  EXPECT_EQ("Standard", mg.GetMagType());
}

TEST(TMachineGunTest, ParameterizedConstructor)
{
  TMachineGun mg("Drum");
  EXPECT_EQ("Drum", mg.GetMagType());
}

TEST(TMachineGunTest, CopyConstructor)
{
  TMachineGun original("Belt-fed");
  TMachineGun copy(original);
  EXPECT_EQ(original.GetMagType(), copy.GetMagType());
}

TEST(TMachineGunTest, SetGetMagType)
{
  TMachineGun mg;

  mg.SetMagType("Box");
  EXPECT_EQ("Box", mg.GetMagType());

  mg.SetMagType("");
  EXPECT_EQ("", mg.GetMagType());
}

TEST(TMachineGunTest, EdgeCases)
{
  TMachineGun mg1("VeryLongMagazineTypeName12345");
  EXPECT_EQ("VeryLongMagazineTypeName12345", mg1.GetMagType());

  TMachineGun mg2("12345");
  EXPECT_EQ("12345", mg2.GetMagType());
}