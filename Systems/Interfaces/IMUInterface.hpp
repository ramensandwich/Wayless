class IMUInterface
{
    protected:
        void InitIMU();
        bool Calibrate();
        double GetTemperature();
        virtual double GetYaw() = 0;
        virtual double GetPitch() = 0;
        virtual double GetRoll() = 0;
    public:
        IMUInterface() {};
};