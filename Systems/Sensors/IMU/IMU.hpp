class IMU
{
    private:
        void InitIMU();
    public:
        IMU();

        void Calibrate();
        double GetTemperature();
};