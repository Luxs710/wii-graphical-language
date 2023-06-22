#include "VisualElement.h"

VisualElement::VisualElement(){;}
VisualElement::VisualElement(position pos, u32 color, bool filled){
	this.pos = pos;
	this.color = color;
	this.filled = filled;
}

void VisualElement::setPosition(position pos){
	this.pos = pos;
}

void VisualElement::setColor(u32 color){
	this.color = color;
}

void VisualElement::setFilled(bool filled){
	this.filled = filled;
}


position VisualElement::getPosition(){return pos;}
u32 VisualElement::getColor(){return color;}
bool VisualElement::getFilled(){return filled;}

