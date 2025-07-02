#include "gmock/gmock.h"
#include "similarity_checker.cpp"

TEST(SimilarityChecker, SameLength)
{
	SimilarityChecker simChecker;
	EXPECT_EQ(60, simChecker.checkSimilarity("ABCDE", "ABCDE"));
}

int main()
{
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}