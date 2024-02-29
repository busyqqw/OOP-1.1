#pragma once

class Number
{
private:
    int first;
    double second;

public:
    bool Init(int, double);
    void Read();
    void Display() const;
    void multiply(double);

    int Getfirst(int);
    double Getsecond(double);
};