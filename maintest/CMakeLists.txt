set(target WeaponsTest)

file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../gtest")

add_executable(${target} ${srcs} ${hdrs}
        Test_MachineGun.cpp
        Test_Pistol.cpp
        Test_AssaultRifle.cpp
        Test_Heavy.cpp
        Test_Light.cpp
        Test_Base.cpp)
target_link_libraries(${target} gtest ${library})