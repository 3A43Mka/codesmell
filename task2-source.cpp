enum TransportType // instead of enum we should use class inheritance
{
    eCar,
    ePlane,
    eSubmarine
};

class Transport
{
public:
    Transport(TransportType type) : m_type(type) {}
    int GetSpeed(int distance, int time)
    {
        if (time != 0) // we can replace this with guard, meaning inverse condition with returning
        {
            switch (m_type) // won't be needed after we reimplement this with class inheritance
            {
            case eCar:
                return distance / time;
            case ePlane:
                return distance / (time - getTakeOffTime() - getLandingTime());
            case eSubmarine:
                return distance / (time - getDiveTime() - getAscentTime());
            }
        }
    }
    ... 
    private : int m_takeOffTime;
    int m_landingTime;
    int m_diveTime;
    int m_ascentTime; // need to add getters
    enum m_type; 
};