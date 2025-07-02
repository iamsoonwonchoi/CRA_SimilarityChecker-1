#include "gmock/gmock.h"
#include "similarity_checker.cpp"

TEST(SimilarityChecker, SameLength)
{
	SimilarityChecker simchecker;
	EXPECT_EQ(60, simchecker.checkSimilarity("ABCDE", "ABCDE"));
}

int main()
{
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}