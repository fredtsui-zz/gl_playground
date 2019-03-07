#pragma once
#include <memory>
#include "../Shapes/Shape.h"

#define WINDOW_WIDTH 640
#define WINDOW_HEIGHT 480

void renderPlayingField(std::vector<std::shared_ptr<Shape>> shapes);