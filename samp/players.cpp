#include "fakeamx.h"
#include "samp.h"
#include "wrapper.h"

#include <algorithm>
#include <iterator>
#include <string>

#define PARAMS(n) ((n) * sizeof(cell))

#ifdef _MSC_VER
    #pragma warning(push)
    // forcing value to bool 'true' or 'false' (performance warning)
    #pragma warning(disable: 4800)
#endif

namespace samp {

bool SetSpawnInfo(int playerid, int team, int skin, float x, float y, float z, float rotation, int weapon1, int weapon1_ammo, int weapon2, int weapon2_ammo, int weapon3, int weapon3_ammo) {
    static auto native = Wrapper::GetInstance()->GetNative("SetSpawnInfo");
    cell params[] = {
        PARAMS(13),
        playerid,
        team,
        skin,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z),
        amx_ftoc(rotation),
        weapon1,
        weapon1_ammo,
        weapon2,
        weapon2_ammo,
        weapon3,
        weapon3_ammo
    };
    return native(&::fakeAmx, params);
}

bool SpawnPlayer(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("SpawnPlayer");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerPos(int playerid, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerPos");
    cell params[] = {
        PARAMS(4),
        playerid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerPosFindZ(int playerid, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerPosFindZ");
    cell params[] = {
        PARAMS(4),
        playerid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerPos(int playerid, float &x, float &y, float &z) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerPos");
    cell params[] = {
        PARAMS(4),
        playerid,
        reinterpret_cast<cell>(&x),
        reinterpret_cast<cell>(&y),
        reinterpret_cast<cell>(&z)
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerFacingAngle(int playerid, float angle) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerFacingAngle");
    cell params[] = {
        PARAMS(2),
        playerid,
        amx_ftoc(angle)
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerFacingAngle(int playerid, float &angle) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerFacingAngle");
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(&angle)
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerInRangeOfPoint(int playerid, float range, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerInRangeOfPoint");
    cell params[] = {
        PARAMS(4),
        playerid,
        amx_ftoc(range),
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerStreamedIn(int playerid, int forplayerid) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerStreamedIn");
    cell params[] = {
        PARAMS(2),
        playerid,
        forplayerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerInterior(int playerid, int interiorid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerInterior");
    cell params[] = {
        PARAMS(2),
        playerid,
        interiorid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerInterior(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerInterior");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerHealth(int playerid, float health) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerHealth");
    cell params[] = {
        PARAMS(2),
        playerid,
        amx_ftoc(health)
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerHealth(int playerid, float &health) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerHealth");
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(&health)
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerArmour(int playerid, float armour) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerArmour");
    cell params[] = {
        PARAMS(2),
        playerid,
        amx_ftoc(armour)
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerArmour(int playerid, float &armour) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerArmour");
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(&armour)
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerAmmo(int playerid, int weaponslot, int ammo) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerAmmo");
    cell params[] = {
        PARAMS(3),
        playerid,
        weaponslot,
        ammo
    };
    return native(&::fakeAmx, params);
}

int GetPlayerAmmo(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerAmmo");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerWeaponState(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerWeaponState");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerTeam(int playerid, int teamid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerTeam");
    cell params[] = {
        PARAMS(2),
        playerid,
        teamid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerTeam(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerTeam");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerScore(int playerid, int score) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerScore");
    cell params[] = {
        PARAMS(2),
        playerid,
        score
    };
    return native(&::fakeAmx, params);
}

int GetPlayerScore(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerScore");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerDrunkLevel(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerDrunkLevel");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerDrunkLevel(int playerid, int level) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerDrunkLevel");
    cell params[] = {
        PARAMS(2),
        playerid,
        level
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerColor(int playerid, long color) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerColor");
    cell params[] = {
        PARAMS(2),
        playerid,
        color
    };
    return native(&::fakeAmx, params);
}

long GetPlayerColor(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerColor");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerSkin(int playerid, int skinid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerSkin");
    cell params[] = {
        PARAMS(2),
        playerid,
        skinid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerSkin(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerSkin");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool GivePlayerWeapon(int playerid, int weaponid, int ammo) {
    static auto native = Wrapper::GetInstance()->GetNative("GivePlayerWeapon");
    cell params[] = {
        PARAMS(3),
        playerid,
        weaponid,
        ammo
    };
    return native(&::fakeAmx, params);
}

bool ResetPlayerWeapons(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("ResetPlayerWeapons");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerArmedWeapon(int playerid, int weaponid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerArmedWeapon");
    cell params[] = {
        PARAMS(2),
        playerid,
        weaponid
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerWeaponData(int playerid, int slot, int &weapon, int &ammo) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerWeaponData");
    cell params[] = {
        PARAMS(4),
        playerid,
        slot,
        reinterpret_cast<cell>(&weapon),
        reinterpret_cast<cell>(&ammo),
    };
    return native(&::fakeAmx, params);
}

bool GivePlayerMoney(int playerid, long money) {
    static auto native = Wrapper::GetInstance()->GetNative("GivePlayerMoney");
    cell params[] = {
        PARAMS(2),
        playerid,
        money
    };
    return native(&::fakeAmx, params);
}

bool ResetPlayerMoney(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("ResetPlayerMoney");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

int SetPlayerName(int playerid, const std::string &name) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerName");
    cstring name_(name.begin(), name.end());
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(name_.c_str())
    };
    return native(&::fakeAmx, params);
}

long GetPlayerMoney(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerMoney");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerState(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerState");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

std::string GetPlayerIp(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerIp");
    cstring name_(16, '\0');
    cell params[] = {
        PARAMS(3),
        playerid,
        reinterpret_cast<cell>(name_.data()),
        name_.length()
    };
    native(&::fakeAmx, params);
    return std::string(name_.begin(), name_.end());
}

int GetPlayerPing(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerPing");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerWeapon(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerWeapon");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerKeys(int playerid, int &keys, int &updown, int &leftright) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerKeys");
    cell params[] = {
        PARAMS(4),
        playerid,
        reinterpret_cast<cell>(&keys),
        reinterpret_cast<cell>(&updown),
        reinterpret_cast<cell>(&leftright),
    };
    return native(&::fakeAmx, params);
}

std::string GetPlayerName(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerName");
    cstring name_(MAX_PLAYER_NAME, '\0');
    cell params[] = {
        PARAMS(3),
        playerid,
        reinterpret_cast<cell>(name_.data()),
        name_.length()
    };
    native(&::fakeAmx, params);
    return std::string(name_.begin(), name_.end());
}

bool SetPlayerTime(int playerid, int hour, int minute) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerTime");
    cell params[] = {
        PARAMS(3),
        playerid,
        hour,
        minute
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerTime(int playerid, int &hour, int &minute) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerTime");
    cell params[] = {
        PARAMS(3),
        playerid,
        reinterpret_cast<cell>(&hour),
        reinterpret_cast<cell>(&minute)
    };
    return native(&::fakeAmx, params);
}

bool TogglePlayerClock(int playerid, bool toggle) {
    static auto native = Wrapper::GetInstance()->GetNative("TogglePlayerClock");
    cell params[] = {
        PARAMS(2),
        playerid,
        toggle
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerWeather(int playerid, int weather) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerWeather");
    cell params[] = {
        PARAMS(2),
        playerid,
        weather
    };
    return native(&::fakeAmx, params);
}

bool ForceClassSelection(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("ForceClassSelection");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerWantedLevel(int playerid, int level) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerWantedLevel");
    cell params[] = {
        PARAMS(2),
        playerid,
        level
    };
    return native(&::fakeAmx, params);
}

int GetPlayerWantedLevel(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerWantedLevel");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerFightingStyle(int playerid, int style) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerFightingStyle");
    cell params[] = {
        PARAMS(2),
        playerid,
        style
    };
    return native(&::fakeAmx, params);
}

int GetPlayerFightingStyle(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerFightingStyle");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerVelocity(int playerid, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerVelocity");
    cell params[] = {
        PARAMS(4),
        playerid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerVelocity( int playerid, float &x, float &y, float &z) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerVelocity");
    cell params[] = {
        PARAMS(4),
        playerid,
        reinterpret_cast<cell>(&x),
        reinterpret_cast<cell>(&y),
        reinterpret_cast<cell>(&z)
    };
    return native(&::fakeAmx, params);
}

bool PlayCrimeReportForPlayer(int playerid, int suspectid, int crime) {
    static auto native = Wrapper::GetInstance()->GetNative("PlayCrimeReportForPlayer");
    cell params[] = {
        PARAMS(3),
        playerid,
        suspectid,
        crime
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerShopName(int playerid, const std::string &shopname) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerShopName");
    cstring shopname_(shopname.begin(), shopname.end());
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(shopname_.c_str())
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerSkillLevel(int playerid, int skill, int level) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerSkillLevel");
    cell params[] = {
        PARAMS(3),
        playerid,
        skill,
        level
    };
    return native(&::fakeAmx, params);
}

int GetPlayerSurfingVehicleID(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerSurfingVehicleID");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerAttachedObject(int playerid, int index, int modelid, int bone, float fOffsetX, 
    float fOffsetY, float fOffsetZ, float fRotX, float fRotY, float fRotZ, float fScaleX, 
    float fScaleY, float fScaleZ) 
{
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerAttachedObject");
    cell params[] = {
        PARAMS(13),
        playerid,
        index,
        modelid,
        bone,
        fOffsetX,
        fOffsetY,
        fOffsetZ,
        fRotX,
        fRotY,
        fRotZ,
        fScaleX,
        fScaleY,
        fScaleZ
    };
    return native(&::fakeAmx, params);
}

bool RemovePlayerAttachedObject(int playerid, int index) {
    static auto native = Wrapper::GetInstance()->GetNative("RemovePlayerAttachedObject");
    cell params[] = {
        PARAMS(2),
        playerid,
        index
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerAttachedObjectSlotUsed(int playerid, int index) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerAttachedObjectSlotUsed");
    cell params[] = {
        PARAMS(2),
        playerid,
        index
    };
    return native(&::fakeAmx, params);
}

bool SetPVarInt(int playerid, const std::string &varname, int value) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPVarInt");
    cstring varname_(varname.begin(), varname.end());
    cell params[] = {
        PARAMS(3),
        playerid,
        reinterpret_cast<cell>(varname_.c_str()),
        value
    };
    return native(&::fakeAmx, params);
}

int GetPVarInt(int playerid, const std::string &varname) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPVarInt");
    cstring varname_(varname.begin(), varname.end());
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(varname_.c_str())
    };
    return native(&::fakeAmx, params);
}

bool SetPVarString(int playerid, const std::string &varname, const std::string &value) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPVarString");
    cstring varname_(varname.begin(), varname.end());
    cstring value_(value.begin(), value.end());
    cell params[] = {
        PARAMS(3),
        playerid,
        reinterpret_cast<cell>(varname_.c_str()),
        reinterpret_cast<cell>(value_.c_str()),
    };
    return native(&::fakeAmx, params);
}

bool GetPVarString(int playerid, const std::string &varname, std::string &value, size_t maxlength) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPVarString");
    cstring varname_(varname.begin(), varname.end());
    cstring value_(maxlength, '\0');
    cell params[] = {
        PARAMS(4),
        playerid,
        reinterpret_cast<cell>(varname_.c_str()),
        reinterpret_cast<cell>(value_.data()),
        maxlength
    };
    bool ret = native(&::fakeAmx, params);
    std::copy(value_.begin(), value_.end(), std::back_inserter(value));
    return ret;
}

bool SetPVarFloat(int playerid, const std::string &varname, float value) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPVarFloat");
    cstring varname_(varname.begin(), varname.end());
    cell params[] = {
        PARAMS(3),
        playerid,
        reinterpret_cast<cell>(varname_.c_str()),
        amx_ftoc(value)
    };
    return native(&::fakeAmx, params);
}

float GetPVarFloat(int playerid, const std::string &varname) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPVarFloat");
    cstring varname_(varname.begin(), varname.end());
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(varname_.c_str())
    };
    auto result = native(&::fakeAmx, params);
    return amx_ctof(result);
}

bool DeletePVar(int playerid, const std::string &varname) {
    static auto native = Wrapper::GetInstance()->GetNative("DeletePVar");
    cstring varname_(varname.begin(), varname.end());
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(varname_.c_str())
    };
    return native(&::fakeAmx, params);
}

int GetPVarsUpperIndex(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPVarsUpperIndex");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool GetPVarNameAtIndex(int playerid, int index, std::string &varname, size_t maxlength) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPVarNameAtIndex");
    cstring varname_(maxlength, '\0');
    cell params[] = {
        PARAMS(4),
        playerid,
        index,
        reinterpret_cast<cell>(varname_.data()),
        maxlength
    };
    bool ret =  native(&::fakeAmx, params);
    std::copy(varname_.begin(), varname_.end(), std::back_inserter(varname));
    return ret;
}

int GetPVarType(int playerid, const std::string &varname) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPVarType");
    cstring varname_(varname.begin(), varname.end());
    cell params[] = {
        PARAMS(2),
        playerid,
        reinterpret_cast<cell>(varname_.c_str())
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerChatBubble(int playerid, const std::string &text, long color, float drawdistance, long expiretime) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerChatBubble");
    cstring text_(text.begin(), text.end());
    cell params[] = {
        PARAMS(5),
        playerid,
        reinterpret_cast<cell>(text_.c_str()),
        color,
        amx_ftoc(drawdistance),
        expiretime
    };
    return native(&::fakeAmx, params);
}

bool PutPlayerInVehicle(int playerid, int vehicleid, int seatid) {
    static auto native = Wrapper::GetInstance()->GetNative("PutPlayerInVehicle");
    cell params[] = {
        PARAMS(3),
        playerid,
        vehicleid,
        seatid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerVehicleID(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerVehicleID");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

int GetPlayerVehicleSeat(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerVehicleSeat");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool RemovePlayerFromVehicle(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("RemovePlayerFromVehicle");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool TogglePlayerControllable(int playerid, bool toggle) {
    static auto native = Wrapper::GetInstance()->GetNative("TogglePlayerControllable");
    cell params[] = {
        PARAMS(2),
        playerid,
        toggle
    };
    return native(&::fakeAmx, params);
}

bool PlayerPlaySound(int playerid, int soundid, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("PlayerPlaySound");
    cell params[] = {
        PARAMS(5),
        playerid,
        soundid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool ApplyAnimation(int playerid, const std::string &animlib, const std::string &animname, 
    float fDelta, bool loop, bool lockx, bool locky, bool freeze, long time, bool forcesync)
{
    static auto native = Wrapper::GetInstance()->GetNative("ApplyAnimation");
    cstring animlib_(animlib.begin(), animlib.end());
    cstring animname_(animname.begin(), animname.end());
    cell params[] = {
        PARAMS(10),
        playerid,
        reinterpret_cast<cell>(animlib_.c_str()),
        reinterpret_cast<cell>(animname_.c_str()),
        amx_ftoc(fDelta),
        loop,
        lockx,
        locky,
        freeze,
        time,
        forcesync
    };
    return native(&::fakeAmx, params);
}

bool ClearAnimations(int playerid, bool forcesync) {
    static auto native = Wrapper::GetInstance()->GetNative("ClearAnimations");
    cell params[] = {
        PARAMS(2),
        playerid,
        forcesync
    };
    return native(&::fakeAmx, params);
}

int GetPlayerAnimationIndex(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerAnimationIndex");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool GetAnimationName(int index, std::string &animlib, size_t len1, std::string &animname, size_t len2) {
    static auto native = Wrapper::GetInstance()->GetNative("GetAnimationName");
    cstring animlib_(len1, '\0');
    cstring animname_(len2, '\0');
    cell params[] = {
        PARAMS(5),
        index,
        reinterpret_cast<cell>(animlib_.data()),
        len1,
        reinterpret_cast<cell>(animname_.data()),
        len2
    };
    bool ret =  native(&::fakeAmx, params);
    std::copy(animlib_.begin(), animlib_.end(), std::back_inserter(animlib));
    std::copy(animname_.begin(), animname_.end(), std::back_inserter(animname));
    return ret;
}

int GetPlayerSpecialAction(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerSpecialAction");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerSpecialAction(int playerid, int actionid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerSpecialAction");
    cell params[] = {
        PARAMS(2),
        playerid,
        actionid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerCheckpoint(int playerid, float x, float y, float z, float size) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerCheckpoint");
    cell params[] = {
        PARAMS(5),
        playerid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z),
        amx_ftoc(size)
    };
    return native(&::fakeAmx, params);
}

bool DisablePlayerCheckpoint(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("DisablePlayerCheckpoint");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerRaceCheckpoint(int playerid, int type, float x, float y, float z, 
    float nextx, float nexty, float nextz, float size) 
{
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerRaceCheckpoint");
    cell params[] = {
        PARAMS(9),
        playerid,
        type,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z),
        amx_ftoc(nextx),
        amx_ftoc(nexty),
        amx_ftoc(nextz),
        amx_ftoc(size)
    };
    return native(&::fakeAmx, params);
}

bool DisablePlayerRaceCheckpoint(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("DisablePlayerRaceCheckpoint");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerWorldBounds(int playerid, float x_max, float x_min, float y_max, float y_min) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerWorldBounds");
    cell params[] = {
        PARAMS(5),
        playerid,
        amx_ftoc(x_max),
        amx_ftoc(x_min),
        amx_ftoc(y_max),
        amx_ftoc(y_min)
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerMarkerForPlayer(int playerid, int showplayerid, long color) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerMarkerForPlayer");
    cell params[] = {
        PARAMS(3),
        playerid,
        showplayerid,
        color
    };
    return native(&::fakeAmx, params);
}

bool ShowPlayerNameTagForPlayer(int playerid, int showplayerid, bool show) {
    static auto native = Wrapper::GetInstance()->GetNative("ShowPlayerNameTagForPlayer");
    cell params[] = {
        PARAMS(3),
        playerid,
        showplayerid,
        show
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerMapIcon(int playerid, int iconid, float x, float y, float z, int markertype, long color, int style) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerMapIcon");
    cell params[] = {
        PARAMS(8),
        playerid,
        iconid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z),
        markertype,
        color,
        style
    };
    return native(&::fakeAmx, params);
}

bool RemovePlayerMapIcon(int playerid, int iconid) {
    static auto native = Wrapper::GetInstance()->GetNative("RemovePlayerMapIcon");
    cell params[] = {
        PARAMS(2),
        playerid,
        iconid
    };
    return native(&::fakeAmx, params);
}

bool AllowPlayerTeleport(int playerid, bool allow) {
    static auto native = Wrapper::GetInstance()->GetNative("AllowPlayerTeleport");
    cell params[] = {
        PARAMS(2),
        playerid,
        allow
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerCameraPos(int playerid, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerCameraPos");
    cell params[] = {
        PARAMS(4),
        playerid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerCameraLookAt(int playerid, float x, float y, float z) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerCameraLookAt");
    cell params[] = {
        PARAMS(4),
        playerid,
        amx_ftoc(x),
        amx_ftoc(y),
        amx_ftoc(z)
    };
    return native(&::fakeAmx, params);
}

bool SetCameraBehindPlayer(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetCameraBehindPlayer");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerCameraPos(int playerid, float &x, float &y, float &z) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerCameraPos");
    cell params[] = {
        PARAMS(4),
        playerid,
        reinterpret_cast<cell>(&x),
        reinterpret_cast<cell>(&y),
        reinterpret_cast<cell>(&z),
    };
    return native(&::fakeAmx, params);
}

bool GetPlayerCameraFrontVector(int playerid, float &x, float &y, float &z) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerCameraFrontVector");
    cell params[] = {
        PARAMS(4),
        playerid,
        reinterpret_cast<cell>(&x),
        reinterpret_cast<cell>(&y),
        reinterpret_cast<cell>(&z),
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerConnected(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerConnected");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerInVehicle(int playerid, int vehicleid) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerInVehicle");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerInAnyVehicle(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerInAnyVehicle");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerInCheckpoint(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerInCheckpoint");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool IsPlayerInRaceCheckpoint(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("IsPlayerInRaceCheckpoint");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool SetPlayerVirtualWorld(int playerid, long worldid) {
    static auto native = Wrapper::GetInstance()->GetNative("SetPlayerVirtualWorld");
    cell params[] = {
        PARAMS(2),
        playerid,
        worldid
    };
    return native(&::fakeAmx, params);
}

long GetPlayerVirtualWorld(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("GetPlayerVirtualWorld");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

bool EnableStuntBonusForPlayer(int playerid, bool enable) {
    static auto native = Wrapper::GetInstance()->GetNative("EnableStuntBonusForPlayer");
    cell params[] = {
        PARAMS(2),
        playerid,
        enable
    };
    return native(&::fakeAmx, params);
}

void EnableStuntBonusForAll(bool enable) {
    static auto native = Wrapper::GetInstance()->GetNative("EnableStuntBonusForAll");
    cell params[] = {
        PARAMS(1),
        enable
    };
    native(&::fakeAmx, params);
}

bool TogglePlayerSpectating(int playerid, bool toggle) {
    static auto native = Wrapper::GetInstance()->GetNative("TogglePlayerSpectating");
    cell params[] = {
        PARAMS(2),
        playerid,
        toggle
    };
    return native(&::fakeAmx, params);
}

bool PlayerSpectatePlayer(int playerid, int targetplayerid, int mode) {
    static auto native = Wrapper::GetInstance()->GetNative("PlayerSpectatePlayer");
    cell params[] = {
        PARAMS(3),
        playerid,
        targetplayerid,
        mode
    };
    return native(&::fakeAmx, params);
}

bool PlayerSpectateVehicle(int playerid, int targetvehicleid, int mode) {
    static auto native = Wrapper::GetInstance()->GetNative("PlayerSpectateVehicle");
    cell params[] = {
        PARAMS(3),
        playerid,
        targetvehicleid,
        mode
    };
    return native(&::fakeAmx, params);
}

bool StartRecordingPlayerData(int playerid, int recordtype, const std::string &recordname) {
    static auto native = Wrapper::GetInstance()->GetNative("StartRecordingPlayerData");
    cstring recordname_(recordname.begin(), recordname.end());
    cell params[] = {
        PARAMS(3),
        playerid,
        recordtype,
        reinterpret_cast<cell>(recordname_.c_str())
    };
    return native(&::fakeAmx, params);
}

bool StopRecordingPlayerData(int playerid) {
    static auto native = Wrapper::GetInstance()->GetNative("StopRecordingPlayerData");
    cell params[] = {
        PARAMS(1),
        playerid
    };
    return native(&::fakeAmx, params);
}

} // namespace samp

#ifdef _MSC_VER
    #pragma warning(pop)
#endif