#include <string>
#include <iostream>

using std::string;

class LengthChecker
{
public:
	int getLengthSimilarity(int len1, int len2)
	{
		if (isSameLength(len1, len2)) return MAX_SCORE_LENGTH;
		
		int bigger = selectBigger(len1, len2);
		int smaller = selectSmaller(len1, len2);
		return getScoreInDifLength(bigger, smaller);
	}

private:
	static const int MAX_SCORE_LENGTH = 60;

	int getScoreInDifLength(int bigger, int smaller)
	{
		if (bigger >= smaller * 2) return 0;

		int gap = bigger - smaller;
		return (1 - static_cast<double>(gap) / smaller) * MAX_SCORE_LENGTH;
	}

	inline bool isSameLength(int a, int b) { return a == b; }
	inline int selectBigger(int a, int b) { return (a > b) ? a : b; }
	inline int selectSmaller(int a, int b) { return (a < b) ? a : b; }
};

class SimilarityChecker
{
public:
	int checkSimilarity(string input1, string input2)
	{
		int score_length = lenChecker.getLengthSimilarity(input1.length(), input2.length());

		return score_length;
	}
private:
	LengthChecker lenChecker;
};