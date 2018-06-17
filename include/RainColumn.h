#ifndef _RAIN_COLUMN_H_
#define _RAIN_COLUMN_H_

#include <list>
#include "Active.h"
#include "RainStreak.h"
#include "Random.h"

class RainColumn : public Active {
	const int x;
	const int Speed;
	int GapTimer;
	bool EmptyRainStreakSlot;
	std::list<RainStreak> RainStreaks;
public:
	RainColumn(int X, int S) : x(X), Speed(S), EmptyRainStreakSlot(true) {
		GapTimer = Random::Random(4, 9);
	}

	void Update();
};

#endif
