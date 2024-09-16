#include <gtest/gtest.h>
#include "Soundex.h"
 
TEST(SoudexTestsuite, checkforEmptyStrings) {
//AAA
  char soundex[5];
  generateSoundex(" ", soundex);
  ASSERT_EQ(soundex," ");
}
