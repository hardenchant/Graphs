#ifndef TEXTITEM_H
#define TEXTITEM_H
#include <QGraphicsTextItem>
#include "circleItem.h"
#include <QPointF>

class textItem : public QGraphicsTextItem
{
public:
	textItem();
	QGraphicsItem* circle;
	textItem(QString a, QGraphicsItem* c);
	void movement();
	~textItem();
};

#endif // TEXTITEM_H
