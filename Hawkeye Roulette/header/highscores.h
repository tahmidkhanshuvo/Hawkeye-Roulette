// HighScores.h
#pragma once

#include <vector>
#include <string>
#include <algorithm>

struct Score {
	std::string name;
	int value;
};

class HighScores {
public:
	HighScores();
	void loadScores();
	void saveScores() const;
	void addScore(const std::string& name, int value);
	void displayScores() const;

private:
	void createFile() const;

private:
	std::vector<Score> scores;
};
