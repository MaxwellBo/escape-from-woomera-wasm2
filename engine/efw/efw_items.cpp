#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "monsters.h"
#include "weapons.h"
#include "player.h"

class CEfwItem : public CBasePlayerWeapon
{
public:
	void Spawn();
	void Precache();
	int GetItemInfo(ItemInfo *p);
	int AddToPlayer(CBasePlayer *pPlayer);
	BOOL Deploy();
	void Holster(int skiplocal = 0);
	void PrimaryAttack() {}
	virtual const char *WorldModel() = 0;
	virtual int WeaponId() = 0;
	virtual int SlotPos() = 0;
};

void CEfwItem::Precache()
{
	PRECACHE_MODEL((char *)WorldModel());
}

void CEfwItem::Spawn()
{
	Precache();
	m_iId = WeaponId();
	m_iPrimaryAmmoType = -1;
	m_iSecondaryAmmoType = -1;
	SET_MODEL(ENT(pev), WorldModel());
	m_iClip = -1;
	FallInit();
}

int CEfwItem::GetItemInfo(ItemInfo *p)
{
	p->pszName = STRING(pev->classname);
	p->pszAmmo1 = NULL;
	p->iMaxAmmo1 = -1;
	p->pszAmmo2 = NULL;
	p->iMaxAmmo2 = -1;
	p->iMaxClip = -1;
	p->iSlot = 1;
	p->iPosition = SlotPos();
	p->iId = WeaponId();
	p->iWeight = 0;
	p->iFlags = 0;
	return 1;
}

int CEfwItem::AddToPlayer(CBasePlayer *pPlayer)
{
	if (CBasePlayerWeapon::AddToPlayer(pPlayer)) {
		MESSAGE_BEGIN(MSG_ONE, gmsgWeapPickup, NULL, pPlayer->pev);
			WRITE_BYTE(m_iId);
		MESSAGE_END();
		return TRUE;
	}
	return FALSE;
}

BOOL CEfwItem::Deploy()
{
	m_pPlayer->pev->viewmodel = 0;
	m_pPlayer->pev->weaponmodel = 0;
	return TRUE;
}

void CEfwItem::Holster(int skiplocal)
{
	if (m_pPlayer) {
		m_pPlayer->pev->viewmodel = 0;
		m_pPlayer->pev->weaponmodel = 0;
	}
}

#define EFW_ITEM(cls, exportname, id, pos, model) \
class cls : public CEfwItem { \
public: \
	const char *WorldModel() { return model; } \
	int WeaponId() { return id; } \
	int SlotPos() { return pos; } \
	int iItemSlot() { return 1; } \
}; \
LINK_ENTITY_TO_CLASS(exportname, cls)

EFW_ITEM(CEfwIDTag, weapon_efw_IDTag, 16, 0, "models/p_idtag.mdl")
EFW_ITEM(CEfwPliers, weapon_efw_Pliers, 17, 1, "models/p_pliers.mdl")
EFW_ITEM(CEfwBranch, weapon_efw_Branch, 18, 2, "models/p_branch.mdl")
EFW_ITEM(CEfwLever, weapon_efw_Lever, 19, 3, "models/p_lever.mdl")
EFW_ITEM(CEfwPhone, weapon_efw_MobilePhone, 20, 4, "models/p_mobilephone.mdl")
EFW_ITEM(CEfwBlue, weapon_efw_BluePhoneCard, 21, 0, "models/p_bluephonecard.mdl")
EFW_ITEM(CEfwGreen, weapon_efw_GreenPhoneCard, 22, 1, "models/p_greenphonecard.mdl")
EFW_ITEM(CEfwRed, weapon_efw_RedPhoneCard, 23, 2, "models/p_redphonecard.mdl")
EFW_ITEM(CEfwPowder, weapon_efw_WashingPowder, 24, 3, "models/p_washingpowder.mdl")
