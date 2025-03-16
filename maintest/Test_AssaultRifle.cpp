#include <gtest.h>
#include "AssaultRifle.h"

TEST(TAssaultRifleTest, DefaultConstructor)
{
TAssaultRifle rifle;
EXPECT_EQ(rifle.GetScopeType(), "1x");
}

TEST(TAssaultRifleTest, ParameterizedConstructor)
{
TAssaultRifle rifle1("4x ACOG");
EXPECT_EQ(rifle1.GetScopeType(), "4x ACOG");

TAssaultRifle rifle2("Red Dot");
EXPECT_EQ(rifle2.GetScopeType(), "Red Dot");
}

TEST(TAssaultRifleTest, CopyConstructor)
{
TAssaultRifle original("Holographic");
TAssaultRifle copy(original);
EXPECT_EQ(copy.GetScopeType(), original.GetScopeType());
}

TEST(TAssaultRifleTest, SetGetScopeType)
{
TAssaultRifle rifle;

rifle.SetScopeType("Night Vision");
EXPECT_EQ(rifle.GetScopeType(), "Night Vision");

rifle.SetScopeType("");
EXPECT_EQ(rifle.GetScopeType(), "");
}

TEST(TAssaultRifleTest, EdgeCases)
{
TAssaultRifle rifle1("VeryLongScopeTypeName12345!@#$%");
EXPECT_EQ(rifle1.GetScopeType(), "VeryLongScopeTypeName12345!@#$%");

TAssaultRifle rifle2("3-9x40mm");
EXPECT_EQ(rifle2.GetScopeType(), "3-9x40mm");
}