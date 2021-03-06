//
// Created by donat on 5/31/2021.
//

#include "Wall.h"

Wall::Wall(Vector2f position, Vector2f size) {
    wallShape.setSize(size);
    wallShape.setFillColor(Color::White);
    wallShape.setPosition(position);
}

RectangleShape Wall::getShape() {
    return wallShape;
}
