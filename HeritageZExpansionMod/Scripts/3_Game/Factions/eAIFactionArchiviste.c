[eAIRegisterFaction(eAIFactionArchiviste)]
class eAIFactionArchiviste : eAIFaction
{
	protected bool m_HasBeenAggressed;

	void eAIFactionArchiviste()
	{
		m_Name = "Archiviste";
		m_Loadout = "AR_Loadout";
		m_HasBeenAggressed = false;
	}

	override bool IsFriendly(notnull eAIFaction other)
	{
		if (other.IsInherited(eAIFactionArchiviste))
			return true;

		if (other.IsInherited(eAIFactionHeritier) || other.IsInherited(eAIFactionCivilian) || other.IsInherited(eAIFactionGuards))
			return !m_HasBeenAggressed;

		return false;
	}

	override string GetDisplayName()
	{
		return "Archiviste";
	}
};
