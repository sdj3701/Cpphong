#include "Monster.h"

void Monster::moveTo(const Position2D& pos_target)
{
	m_location.set(pos_target);
}
