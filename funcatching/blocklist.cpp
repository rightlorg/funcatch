#include "blocklist.h"

BlockList::BlockList(QObject *parent) : QObject(parent)
{
	//	blocklist[tr("NULL")]			= 0;
	blocklist[tr("Cobble Stone")]			= 1;
	blocklist[tr("Sand")]			= 2;
	blocklist[tr("Oak Wood")]		= 3;
	blocklist[tr("Glass")]			= 4;
	blocklist[tr("Birch")]			= 5;
	blocklist[tr("Mushroom")]		= 6;
	blocklist[tr("Black Wool")]		= 7;
	blocklist[tr("Dark Gary Wool")]		= 8;
	blocklist[tr("Red Wool")]		= 9;
	blocklist[tr("Pink Wool")]		= 10;
	blocklist[tr("Dark Green Wool")]	= 11;
	blocklist[tr("Green Wool")]		= 12;
	blocklist[tr("Brown Wool")]		= 13;
	blocklist[tr("TNT")]			= 14;
	blocklist[tr("Yellow Woll")]			= 15;
	blocklist[tr("Blue Woll")] = 16;
	blocklist[tr("Light Blue Woll")] = 17;
	blocklist[tr("Purple Woll")] = 18;
	blocklist[tr("Dark Pink Woll")] = 19;
	blocklist[tr("Cayn Woll")] = 20;
	blocklist[tr("Orange Woll")] = 21;
	blocklist[tr("Grey Woll")] = 22;
	blocklist[tr("Stone")] = 23;
	blocklist[tr("STUPID")] = 24;
	// blocklist[tr("Square Wood")] = 24;
	// blocklist[tr("STUPID")] = 24;
	// blocklist[tr("STUPID")] = 24;
	// blocklist[tr("STUPID")] = 24;

	//	blocklist[tr("Sand")]= 37;

}

//quint8 BlockList::getValue(QString key)
//{
//	return blocklist.value(key);
//}

//QString BlockList::getKey(quint8 value)
//{
//	return blocklist.key(value);
//}

BlockList::~BlockList()
{

}
