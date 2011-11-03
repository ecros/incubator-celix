/*
 * shape_component.h
 *
 *  Created on: Aug 22, 2011
 *      Author: operator
 */

#ifndef SHAPE_COMPONENT_H_
#define SHAPE_COMPONENT_H_

#include "paint_frame.h"

typedef struct shape_component *SHAPE_COMPONENT;

struct shape_component {
	char *shapeName;
	PAINT_FRAME m_frame;
	gdouble x, y, w, h;
	void (*shapeComponent_paintComponent)(SHAPE_COMPONENT shapeComponent, PAINT_FRAME frame,
			GdkPixmap *pixMap, GtkWidget *widget);
};

extern SHAPE_COMPONENT shapeComponent_create(PAINT_FRAME frame, SIMPLE_SHAPE sshape,
		gdouble x, gdouble y);

#endif /* SHAPE_COMPONENT_H_ */
