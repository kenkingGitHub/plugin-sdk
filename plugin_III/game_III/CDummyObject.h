/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CDummy.h"

class CDummyObject : public CDummy {
public:
    CDummyObject(class CObject* object);
    CDummyObject();

    CDummyObject(const CDummyObject &) = delete;
    CDummyObject &operator=(const CDummyObject &) = delete;
};

VALIDATE_SIZE(CDummyObject, 0x68);