
#pragma once

#ifndef __REDFLOWERMGR_H__

#include "GameObject.h"
	class CRedFlower;

class CRedFlowerMgr :public ENGINE::CGameObject
{
private:
	explicit CRedFlowerMgr(LPDIRECT3DDEVICE9 pGraphicDev);
public:
	virtual ~CRedFlowerMgr();
public:
	virtual int Update() override;
	virtual void LateUpdate() override;
	virtual void Render() override;

private:
	virtual HRESULT Initialize() override;
	virtual HRESULT AddComponent() override;
	virtual void Release() override;
	virtual ENGINE::SAVE_INFO GetSaveInfo() override;
public:
	static CRedFlowerMgr* Create(LPDIRECT3DDEVICE9 pGraphicDev, D3DXVECTOR3 vPos, D3DXVECTOR3 vSize, float fAngleY);

public:
	virtual D3DXVECTOR3 GetPos();

private:
	ENGINE::CKeyMgr*			m_pKeyMgr;
	ENGINE::CTimeMgr*			m_pTimeMgr;
	ENGINE::CResourceMgr*		m_pResourceMgr;
	ENGINE::CSubjectMgr*		m_pSubjectMgr;

	ENGINE::VTX_CUBETEX*	m_pOriginVtx;
	ENGINE::VTX_CUBETEX*	m_pConvertVtx;
	ENGINE::INFO			m_tInfo;

	CRedFlower*					m_pFlower;
	float						m_fAngleY;
};

#define  __REDFLOWERMGR_H__
#endif
