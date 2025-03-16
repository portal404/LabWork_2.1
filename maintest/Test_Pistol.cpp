#include <gtest.h>
#include "Pistol.h"

TEST(TPistolTest, DefaultConstructor)
{
TPistol pistol;
EXPECT_EQ(pistol.GetSilencer(), "On");
}

TEST(TPistolTest, ParameterizedConstructor)
{
TPistol pistol1("Off");
EXPECT_EQ(pistol1.GetSilencer(), "Off");

TPistol pistol2("Integrated");
EXPECT_EQ(pistol2.GetSilencer(), "Integrated");
}

TEST(TPistolTest, CopyConstructor)
{
TPistol original("Suppressed");
TPistol copy(original);
EXPECT_EQ(copy.GetSilencer(), original.GetSilencer());
}

TEST(TPistolTest, SetGetSilencer)
{
TPistol pistol;

pistol.SetSilencer("Detachable");
EXPECT_EQ(pistol.GetSilencer(), "Detachable");

pistol.SetSilencer("");
EXPECT_EQ(pistol.GetSilencer(), "");
}

TEST(TPistolTest, EdgeCases)
{
TPistol pistol1("VeryLongSilencerTypeName12345");
EXPECT_EQ(pistol1.GetSilencer(), "VeryLongSilencerTypeName12345");

TPistol pistol2("12345!@#$%");
EXPECT_EQ(pistol2.GetSilencer(), "12345!@#$%");
}