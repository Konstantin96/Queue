#pragma once
#include "Libery.h"

class Ex
{
public:
	Ex(int er)
	{
		switch (er)
		{
		case 1: {cerr << "\nError: Queue is full\n"; break; }
		case 2: {cerr << "\nError: Queue is empty\n"; break; }
		}
	}
};