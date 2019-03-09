#pragma once
#include <memory>
#include "../Shapes/Shape.h"

#define WINDOW_WIDTH 360
#define WINDOW_HEIGHT 640

void renderPlayingField(std::vector<std::shared_ptr<Shape>> shapes);