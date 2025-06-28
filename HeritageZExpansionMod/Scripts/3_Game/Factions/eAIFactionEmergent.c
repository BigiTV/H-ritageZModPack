[eAIRegisterFaction(eAIFactionEmergent)]
class eAIFactionEmergent : eAIFaction
{
    protected bool m_HasBeenAggressed;

    void eAIFactionEmergent()
    {
        m_Name = "Emergent";
        m_Loadout = "EM_Loadout";
        m_HasBeenAggressed = false;
    }

    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionEmergent))
            return true;

        if (other.IsInherited(eAIFactionHeritier) || other.IsInherited(eAIFactionCivilian) || other.IsInherited(eAIFactionGuards))
            return !m_HasBeenAggressed;

        return false;
    }

    override string GetDisplayName()
    {
        return "Emergent";
    }
};
