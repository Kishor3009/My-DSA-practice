#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <cstdlib>

class Score {
private:
  std::string country;
  int score;
public:
  Score(std::string c, int s) {
        country = c;
        score = s;
        std::cout << c << "," << s << std::endl;
    }

  std::string getCountry() {return country;}
  void unsetCountry() {country = "";}
  int getScore() {return score;}
};

/**
 * Read country: score pairs from infile and return a list of pairs
 * Stop when infile reaches EOF
 */
void readScores(std::istream &infile, std::vector<Score> &scores) {
  while(infile) {
    std::string country;
    infile >> std::ws;
    std::getline(infile, country, ':');
    int runs;
    infile >> runs;
    if (country != "") {
      Score score(country, runs);
      scores.push_back(score);
    } else {
      break; // Stop reading when there are no more scores
    }
  }
}

int noCenturyCountryCount(std::vector<Score> &scores) {
  int noCenturyCount = 0;

  for(int i=0; i<scores.size(); i++) {
    const std::string &country = scores[i].getCountry();

    int centuries = 0;
    for(int j=i; j<scores.size(); j++) {
      if (scores[j].getCountry() == country) {
        if (scores[j].getScore() >= 100) {
          centuries++;
        }
        // disable checking of this same country again
        scores[j].unsetCountry();
      }
    }

    if (centuries == 0) {
      noCenturyCount++;
    }
  }
  return noCenturyCount;
}

int main (void) {
  std::vector<Score> scores;
  readScores(std::cin, scores);
  int noCenturyCount = noCenturyCountryCount(scores);
  std::cout << noCenturyCount << std::endl;
}