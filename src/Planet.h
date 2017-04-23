#ifndef PLANET_H
#define PLANET_H

#include "CubeMap.h"
#include "ColorTable.h"

class Mesh;
class Object;

class Planet
{
public:
	Planet(const CubeMap &cubeMap, const ColorTable &colorTable, int octreeDepth = 4);
	~Planet();

	void addMeshesToObject(Object* object);
	void createPlanetSide(Side side);

private:

	CubeMap m_cubeMap;
	ColorTable m_colorTable;
	int m_octreeDepth;

	std::vector<Mesh*> m_meshes;
};

#endif // PLANET_H