/*****************************************************************************
 *
 *  PROJECT:     Multi Theft Auto v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/CVehicleColorManager.h
 *  PURPOSE:     Vehicle entity color manager class
 *
 *  Multi Theft Auto is available from http://www.multitheftauto.com/
 *
 *****************************************************************************/

#ifndef __CVEHICLECOLORMANAGER_H
#define __CVEHICLECOLORMANAGER_H

#include <list>

class CVehicleColors
{
public:
    void         AddColor(const CVehicleColor& colVehicle) { m_Colors.push_back(colVehicle); };
    unsigned int CountColors(void) { return static_cast<unsigned int>(m_Colors.size()); };
    void         RemoveAllColors(void) { m_Colors.clear(); };

    CVehicleColor GetRandomColor(void);

private:
    list<CVehicleColor> m_Colors;
};

class CVehicleColorManager
{
public:
    bool Load(const char* szFilename);
    bool Generate(const char* szFilename);
    void Reset(void);

    void          AddColor(unsigned short usModel, const CVehicleColor& colVehicle);
    CVehicleColor GetRandomColor(unsigned short usModel);

private:
    SFixedArray<CVehicleColors, 212> m_Colors;
};

#endif
