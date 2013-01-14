#ifndef MONOSTATE_H
#define MONOSTATE_H

class Monostate
{
public:
    int getTheAnswer() const { return sAnswer; }
private:
    static int sAnswer;
};

#endif // MONOSTATE_H
