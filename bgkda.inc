enum E_KDA_PLAYER_DATA {
	E_PLAYER_KILLS,
	E_PLAYER_ASSISTS,
	E_PLAYER_MATCHES,
	E_PLAYER_WINS
};

static
	KDA_g_sPlayerData[MAX_PLAYERS][E_KDA_PLAYER_DATA];

stock SetPlayerKills(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_KILLS] = amount;

stock GetPlayerKills(playerid)
	return KDA_g_sPlayerData[playerid][E_PLAYER_KILLS];

stock GivePlayerKills(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_KILLS] += amount;

stock ResetPlayerKills(playerid)
	KDA_g_sPlayerData[playerid][E_PLAYER_KILLS] = 0;

stock GetPlayerDeaths(playerid)
	return KDA_g_sPlayerData[playerid][E_PLAYER_MATCHES] - KDA_g_sPlayerData[playerid][E_PLAYER_WINS];

stock SetPlayerAssists(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_ASSISTS] = amount;

stock GetPlayerAssists(playerid)
	return KDA_g_sPlayerData[playerid][E_PLAYER_ASSISTS];

stock GivePlayerAssists(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_ASSISTS] += amount;

stock ResetPlayerAssists(playerid)
	KDA_g_sPlayerData[playerid][E_PLAYER_ASSISTS] = 0;

stock SetPlayerMatches(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_MATCHES] = amount;

stock GetPlayerMatches(playerid)
	return KDA_g_sPlayerData[playerid][E_PLAYER_MATCHES];

stock GivePlayerMatches(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_MATCHES] += amount;

stock ResetPlayerMatches(playerid)
	KDA_g_sPlayerData[playerid][E_PLAYER_MATCHES] = 0;

stock SetPlayerWins(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_WINS] = amount;

stock GetPlayerWins(playerid)
	return KDA_g_sPlayerData[playerid][E_PLAYER_WINS];

stock GivePlayerWins(playerid, amount)
	KDA_g_sPlayerData[playerid][E_PLAYER_WINS] += amount;

stock ResetPlayerWins(playerid)
	KDA_g_sPlayerData[playerid][E_PLAYER_WINS] = 0;

stock Float:GetPlayerKillDeathRatio(playerid) {
	if (!GetPlayerDeaths(playerid))
		return 0.0;

	return float(KDA_g_sPlayerData[playerid][E_PLAYER_KILLS]) / float(GetPlayerDeaths(playerid));
}

stock Float:GetPlayerKDARatio(playerid) {
	if (!GetPlayerDeaths(playerid))
		return 0.0;

	return (float(KDA_g_sPlayerData[playerid][E_PLAYER_KILLS]) + float(KDA_g_sPlayerData[playerid][E_PLAYER_ASSISTS])) / float(GetPlayerDeaths(playerid));
}
