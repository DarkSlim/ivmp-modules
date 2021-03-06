//============== Copyright � 2011 IV:MP Team. All rights reserved. ==============
// File: CPickupManagerInterface.h
//======================================================================

#pragma once

#include "InterfaceCommon.h"

class CPickupManagerInterface
{
public:
	virtual EntityId Create(DWORD dwModelHash, unsigned char ucType, unsigned int uiValue, float fX, float fY, float fZ, float fRX, float fRY, float fRZ) = 0;
	virtual void Delete(EntityId pickupId) = 0;
	virtual bool DoesExist(EntityId pickupId) = 0;
	virtual EntityId GetPickupCount() = 0;

	virtual DWORD GetModel(EntityId objectId) = 0;
	virtual unsigned char GetType(EntityId pickupId) = 0;
	virtual unsigned int GetValue(EntityId pickupId) = 0;
	virtual bool SetPosition(EntityId pickupId, Vector3 vecPosition) = 0;
	virtual bool GetPosition(EntityId pickupId, Vector3* vecPosition) = 0;
	virtual bool SetRotation(EntityId pickupId, Vector3 vecRotation) = 0;
	virtual bool GetRotation(EntityId pickupId, Vector3* vecRotation) = 0;
};