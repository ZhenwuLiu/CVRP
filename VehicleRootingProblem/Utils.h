#pragma once

#include "DataClasses.h"

#include <random>

class InputDataGenerator {
public:
	InputDataGenerator() = default;
public:
	InputData GenInputData(int minDronsCnt, int maxDronsCnt, int minTargetsCnt,
		int maxTargetsCnt, double minMaxDist, double maxMaxDist, double minCoordinate, double maxCoordinate);
private:
	int GenInt(int l, int r);
	double GenDouble(double l, double r);
};

enum class ProblemMode {
	MINSUM,
	MINMAXLEN
};

class Solver {
public:
	Solver() = default;

public:
	static ProblemSolution Run(InputData input, double timeLimit, ProblemMode problemMode) {}
};