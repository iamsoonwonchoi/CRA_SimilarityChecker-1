#include "gmock/gmock.h"
#include "similarity_checker.cpp"

class SimilarityCheckerFixture : public testing::Test
{
public:
	void getSimilarityScore(int expected, const string& input1, const string& intput2)
	{
		EXPECT_EQ(expected, simChecker.checkSimilarity(input1, intput2));
	}

	SimilarityChecker simChecker;
};

TEST_F(SimilarityCheckerFixture, SameLength)
{
	getSimilarityScore(60, "ABCDE", "ABCDE");
	getSimilarityScore(60, "ABC", "ABC");
	getSimilarityScore(60, "A", "A");
}

TEST_F(SimilarityCheckerFixture, DifLength)
{
	getSimilarityScore(0, "A", "ABCDE");
	getSimilarityScore(40, "AAA", "BCDE");
	getSimilarityScore(45, "ILGR", "ABCDE");
	getSimilarityScore(5, "IELJFLASDF", "IELJFLASDFIELJFLASD");
}

int main()
{
	testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}