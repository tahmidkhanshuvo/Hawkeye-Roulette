// HighScores.cpp
#include "header/highscores.h"
#include <iostream>
#include <fstream>

HighScores::HighScores() {
	loadScores();
}

void HighScores::createFile() const {
	std::ofstream file("scores.txt");
	if (file.is_open()) {
		file.close();
	}
}

void HighScores::loadScores() {
	if (!std::ifstream("scores.txt").good()) {
		createFile();
	}

	std::ifstream file("scores.txt");

	if (file.is_open()) {
		scores.clear();
		Score tempScore;
		while (file >> tempScore.name >> tempScore.value) {
			scores.push_back(tempScore);
		}

		file.close();
	}
}

void HighScores::saveScores() const {
	std::ofstream file("scores.txt");

	if (file.is_open()) {
		for (const auto& score : scores) {
			file << score.name << " " << score.value << std::endl;
		}

		file.close();
	}
}

void HighScores::addScore(const std::string& name, int value) {
	scores.push_back({ name, value });
	std::sort(scores.begin(), scores.end(), [](const Score& a, const Score& b) {
		return a.value > b.value;
	});

	if (scores.size() > 10) {
		scores.pop_back();
	}

	saveScores();
}

void HighScores::displayScores() const {
	std::cout << "High Scores:" << std::endl;
	for (const auto& score : scores) {
		std::cout << score.name << ": " << score.value << std::endl;
	}
	std::cout << std::endl;
}
