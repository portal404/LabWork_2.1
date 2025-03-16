#include <gtest.h>
#include "RocketLauncher.h"

TEST(TRockerLauncherTest, DefaultConstructor)
{
  TRockerLauncher rl;
  EXPECT_EQ(1, rl.GetCount());
}

TEST(TRockerLauncherTest, ParameterizedConstructorValid)
{
  TRockerLauncher rl(3);
  EXPECT_EQ(3, rl.GetCount());
}

TEST(TRockerLauncherTest, ParameterizedConstructorInvalid)
{
  EXPECT_THROW(TRockerLauncher(-1), int);
}

TEST(TRockerLauncherTest, CopyConstructor)
{
  TRockerLauncher original(5);
  TRockerLauncher copy(original);
  EXPECT_EQ(original.GetCount(), copy.GetCount());
}


TEST(TRockerLauncherTest, EdgeCases)
{
  TRockerLauncher rl(0);
  EXPECT_EQ(0, rl.GetCount());

  TRockerLauncher rl2(10000);
  EXPECT_EQ(10000, rl2.GetCount());
}