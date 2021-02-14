//
// Created by starm on 2020-11-17.
//

#ifndef CPPPRJS_COUNTER_H
#define CPPPRJS_COUNTER_H


class Counter {

    int value;
    public:
        Counter() : value{0} {}
        void reset()
            { value = 0; }
        void count()
            { ++value; }
        int getValue() const
            { return value; }

};


#endif //CPPPRJS_COUNTER_H
