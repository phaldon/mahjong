﻿#ifndef AGENT_H
#define AGENT_H

#include "Action.h"
#include "TableStatus.h"
// abstract class of Agent

// For Action Phase
// Agent gets the std::vector<SelfAction> as input,
// outputs its choice (in integer);

// For Response Phase
// Agent gets the std::vector<ResponseAction> as input,
// outputs its choice (in integer)

// Except the choice, agent could get all informations
// from the table if needed. This is a struct called
// TableStatus.

// Abstract base class
class Agent {
public:
	virtual inline int get_self_action(TableStatus status, std::vector<SelfAction> actions) {
		return 0;
	}
	
	virtual inline int get_response_action(TableStatus status, std::vector<ResponseAction> actions) {
		return 0;
	}
};

class RealPlayer : public Agent {
public:
	int get_self_action(TableStatus status, std::vector<SelfAction> actions) {

	}
};

#endif