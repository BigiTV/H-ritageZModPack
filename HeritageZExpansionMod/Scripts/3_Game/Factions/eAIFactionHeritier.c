[eAIRegisterFaction(eAIFactionHeritier)]
class eAIFactionHeritier : eAIFaction
{
    protected bool m_HasBeenAggressed;

    void eAIFactionHeritier()
    {
        m_Name = "H�ritier";
        m_Loadout = "HR_Loadout";
        m_HasBeenAggressed = false;
    }

    override bool IsFriendly(notnull eAIFaction other)
    {
        if (other.IsInherited(eAIFactionHeritier))
            return true;

        if (other.IsInherited(eAIFactionEmergent) ||other.IsInherited(eAIFactionArchiviste)||other.IsInherited(eAIFactionCivilian) || other.IsInherited(eAIFactionGuards))
            return !m_HasBeenAggressed;
        
        return false;
    }

    override string GetDisplayName()
    {
        return "H�ritier";
    }
};