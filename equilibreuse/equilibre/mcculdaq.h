#ifndef MCCULDAQ_H
#define MCCULDAQ_H


class MccUldaq
{
public:
    MccUldaq();
    void ulAOut(const int _numCanal, const double _tensionMaxCommande);
};

#endif // MCCULDAQ_H
