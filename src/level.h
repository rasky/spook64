#ifndef SPOOK64_LEVEL
#define SPOOK64_LEVEL
#include "path.h"
#include "dragon.h"

typedef struct {
	vector2_t position;
	float radius;
} level_light_t;

typedef struct {
	const uint16_t width;
	const uint16_t height;

	const path_graph_t *path_graph;

	const uint8_t *data;

	const uint8_t light_count;
	const level_light_t *lights;
} level_t;

extern const level_t level0;

#endif
