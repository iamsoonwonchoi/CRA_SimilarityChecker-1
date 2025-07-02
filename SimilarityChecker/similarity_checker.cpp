#include <string>

using std::string;

class LengthChecker
{
public:
	int getLengthSimilarity(int len1, int len2)
	{
		if (len1 == len2) return 60;
		return 0;
	}
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