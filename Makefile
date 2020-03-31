timesplit: timesplit.cpp
	g++ $< -I ./compile-time-regular-expressions/single-header/ --std=c++17 -o $@
