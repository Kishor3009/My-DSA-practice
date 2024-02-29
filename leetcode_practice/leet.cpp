#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <fstream>
#include <cstdlib>

class Score {
private:
  std::string country;
  int score;
public:
  Score(std::string c, int s) : country(c), score(s) {
    std::cout << c << "," << s << std::endl;
  }
  std::string getCountry() const { return country; }
  int getScore() const { return score; }
};
void readScores(std::istream& infile, std::vector<Score>& scores) {
  while (infile) {
    std::string country;
    infile >> std::ws;
    std::getline(infile, country, ':');
    int runs;
    infile >> runs;
    if (country != "") {
      Score score(country, runs);
      scores.push_back(score);
    } else {
      break;
    }
  }
}

int noCenturyCountryCount(std::vector<Score>& scores) {
  int noCenturyCount = 0;

  std::unordered_map<std::string, int> highestScores;

  for (const Score& score : scores) {
    const std::string& country = score.getCountry();
    int currentScore = score.getScore();
    if (highestScores.find(country) == highestScores.end() || currentScore > highestScores[country]) {
      highestScores[country] = currentScore;
    }
  }
  for (const Score& score : scores) {
    const std::string& country = score.getCountry();
    int currentScore = score.getScore();
    if (highestScores[country] < 100) {
      noCenturyCount++;
    }
  }

  return noCenturyCount;
}

int main(void) {
  std::vector<Score> scores;
  readScores(std::cin, scores);
  int noCenturyCount = noCenturyCountryCount(scores);
  std::cout << noCenturyCount << std::endl;
  return 0;
}